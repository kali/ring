/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#ifndef HEADER_TEST_CONFIG
#define HEADER_TEST_CONFIG

#include <string>


struct TestConfig {
  int port = 0;
  bool is_server = false;
  bool is_dtls = false;
  bool resume = false;
  bool fallback_scsv = false;
  std::string key_file;
  std::string cert_file;
  std::string expected_server_name;
  std::string expected_certificate_types;
  bool require_any_client_certificate = false;
  std::string advertise_npn;
  std::string expected_next_proto;
  bool false_start = false;
  std::string select_next_proto;
  bool async = false;
  bool write_different_record_sizes = false;
  bool cbc_record_splitting = false;
  bool partial_write = false;
  bool no_tls12 = false;
  bool no_tls11 = false;
  bool no_tls1 = false;
  bool no_ssl3 = false;
  std::string expected_channel_id;
  std::string send_channel_id;
  bool shim_writes_first = false;
  bool tls_d5_bug = false;
  std::string host_name;
  std::string advertise_alpn;
  std::string expected_alpn;
  std::string expected_advertised_alpn;
  std::string select_alpn;
  bool expect_session_miss = false;
  bool expect_extended_master_secret = false;
  std::string psk;
  std::string psk_identity;
  bool renegotiate = false;
  bool allow_unsafe_legacy_renegotiation = false;
  std::string srtp_profiles;
  bool enable_ocsp_stapling = false;
  std::string expected_ocsp_response;
  bool enable_signed_cert_timestamps = false;
  std::string expected_signed_cert_timestamps;
  bool fastradio_padding = false;
  int min_version = 0;
  int max_version = 0;
  int mtu = 0;
  bool implicit_handshake = false;
  bool use_early_callback = false;
  bool fail_early_callback = false;
  bool install_ddos_callback = false;
  bool fail_ddos_callback = false;
  bool fail_second_ddos_callback = false;
  std::string cipher;
  bool handshake_never_done = false;
  int export_keying_material = 0;
  std::string export_label;
  std::string export_context;
  bool use_export_context = false;
  bool reject_peer_renegotiations = false;
  bool no_legacy_server_connect = false;
};

bool ParseConfig(int argc, char **argv, TestConfig *out_config);


#endif  // HEADER_TEST_CONFIG
