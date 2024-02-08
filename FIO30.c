#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incorrect_password(const char *user) {
  int ret;
  /* ユーザ名は256文字以下に制限されている */
  static const char msg_format[] = "%s cannot be authenticated.\n";
  size_t len = strlen(user) + sizeof(msg_format);
  char *msg = (char *)malloc(len);
  if (msg == NULL) {
    /* エラー処理 */
  }
  ret = snprintf(msg, len, msg_format, user);
  if (ret < 0) {
    /* エラー処理 */
  } else if (ret >= len) {
    /* 切り捨てられた出力の処理 */
  }
  fprintf(stderr, msg);
  free(msg);
}