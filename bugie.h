#pragma once

typedef enum LogLevel {
  LOG_LEVEL_TRACE,
  LOG_LEVEL_DEBUG,
  LOG_LEVEL_INFO,
  LOG_LEVEL_NOTICE,
  LOG_LEVEL_WARNING,
  LOG_LEVEL_ERROR,
  LOG_LEVEL_CRITICAL,
  LOG_LEVEL_FATAL
} LogLevel;

typedef enum LogTimestamp {
  LOG_TIMESTAMP_ISO_8601,
  LOG_TIMESTAMP_CLF,
  LOG_TIMESTAMP_DATE_ONLY,
  LOG_TIMESTAMP_TIME_ONLY,
  LOG_TIMESTAMP_DATE_TIME,
  LOG_TIMESTAMP_UNIX_SECOND,
  LOG_TIMESTAMP_UNIX_MILLISECOND,
  LOG_TIMESTAMP_UNIX_MACROSECOND,
  TIMESTAMP_RFC_EMAIL,
  LOG_TIMESTAMP_CUSTOM
} LogTimestamp;

typedef enum LogStream {
  LOG_STREAM_CONSOLE_STDOUT,
  LOG_STREAM_CONSOLE_STDERR,
  LOG_STREAM_FILE,
  LOG_STREAM_FILE_DESCRIPTOR
} LogStream;