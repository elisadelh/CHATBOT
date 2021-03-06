#include "sine_model_data.h"

ai_handle ai_sine_model_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_sine_model_weights[ 1284 ] = {
    0xfb, 0x93, 0xdd, 0x3e, 0x75, 0xae, 0x01, 0x3f, 0x80, 0xd3,
    0x90, 0x3e, 0xf8, 0xff, 0xd4, 0xbd, 0x1d, 0x03, 0x08, 0xbf,
    0x85, 0x42, 0x35, 0x3e, 0x36, 0x05, 0x78, 0x3e, 0xfd, 0xca,
    0x7e, 0x3e, 0x01, 0x2d, 0x08, 0xbf, 0x64, 0xba, 0xca, 0xbe,
    0x61, 0xb6, 0x53, 0x3d, 0x37, 0x83, 0xcb, 0x3e, 0xd1, 0x42,
    0x05, 0x3f, 0x9a, 0xf5, 0xc8, 0xbe, 0x2e, 0xd7, 0x7f, 0xbe,
    0x06, 0x8b, 0x95, 0x3e, 0xe6, 0xef, 0x19, 0x3d, 0x98, 0x49,
    0x9c, 0x3c, 0x33, 0x7e, 0x5c, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3f, 0xfa, 0xc6, 0xbe, 0x88, 0xc1,
    0x4e, 0xbe, 0xe3, 0x51, 0x1f, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x38, 0xb4, 0xf0, 0x3e, 0x2c, 0xd4,
    0xbc, 0xbe, 0x01, 0xef, 0xb4, 0x3e, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xfd, 0x35, 0x15, 0x3f, 0x4e, 0x39,
    0x25, 0x3e, 0x73, 0xdc, 0x27, 0x3e, 0x60, 0x52, 0x70, 0xbf,
    0xca, 0xec, 0x8c, 0xbe, 0xb6, 0xdd, 0x52, 0x3e, 0xa6, 0xb2,
    0xf7, 0xbe, 0x6d, 0xcf, 0xe6, 0xbe, 0xc9, 0xed, 0xbd, 0xbd,
    0x5e, 0x1d, 0x4d, 0x3e, 0xc1, 0xbf, 0xc7, 0xbe, 0x14, 0xdd,
    0x55, 0xbd, 0xc6, 0x57, 0x70, 0xbc, 0x6e, 0x3b, 0xf3, 0x3d,
    0x70, 0x44, 0x9d, 0xbd, 0x49, 0x81, 0xa6, 0x3e, 0x11, 0x60,
    0x73, 0x3e, 0xee, 0xd3, 0x75, 0x3e, 0x93, 0x58, 0x7e, 0xbe,
    0x77, 0xb8, 0x73, 0x3e, 0x71, 0x99, 0xc4, 0x3e, 0xac, 0xe5,
    0xbc, 0xbd, 0x4c, 0x85, 0xa7, 0x3d, 0x75, 0xdb, 0x3b, 0xbe,
    0xbc, 0x8f, 0x9b, 0xbe, 0xa2, 0x7d, 0x43, 0xbe, 0x42, 0xa6,
    0x14, 0x3e, 0xe4, 0xce, 0x04, 0x3c, 0xd6, 0x50, 0xbe, 0xbe,
    0xb5, 0x0d, 0xf4, 0xbe, 0x5b, 0x3e, 0xc5, 0xbe, 0x90, 0x94,
    0xf4, 0x3c, 0x72, 0x41, 0x98, 0x3e, 0xec, 0x45, 0xc3, 0x3e,
    0x75, 0x9f, 0x07, 0x3b, 0xc8, 0x19, 0x91, 0xbf, 0x3b, 0xe3,
    0xdb, 0x3e, 0x48, 0x46, 0x1d, 0xbd, 0xb2, 0x04, 0x83, 0xbf,
    0x9b, 0xcd, 0x4e, 0xbe, 0x35, 0x1b, 0x0e, 0xbf, 0xa2, 0x17,
    0x43, 0x3e, 0x90, 0x7a, 0xb9, 0xbe, 0xb8, 0x01, 0xe2, 0x3e,
    0x16, 0x2a, 0x15, 0xbf, 0x58, 0xee, 0x55, 0x3e, 0xb0, 0x5d,
    0x5e, 0xbe, 0x5a, 0x08, 0x0b, 0x3e, 0x77, 0x86, 0x37, 0xbd,
    0x4a, 0x96, 0x0f, 0x3e, 0x4d, 0x4a, 0x78, 0xbd, 0x50, 0x77,
    0x5b, 0xbf, 0x5d, 0x99, 0xaf, 0x3e, 0xa0, 0x26, 0x8c, 0xbd,
    0x6f, 0x57, 0x2a, 0xbf, 0x04, 0xcf, 0xa4, 0xbe, 0x26, 0x26,
    0x4e, 0xbf, 0xf8, 0x89, 0xea, 0xbd, 0xca, 0x15, 0x3c, 0x3e,
    0xf6, 0x35, 0x09, 0x3f, 0x05, 0x26, 0xc4, 0xbe, 0x33, 0x6d,
    0x2b, 0x3e, 0x12, 0x9d, 0x52, 0x3e, 0x20, 0x3b, 0x4e, 0xbc,
    0x84, 0xf0, 0xbe, 0x3e, 0x97, 0xd3, 0x8c, 0xbc, 0x88, 0x50,
    0xaa, 0x3e, 0xdf, 0x1d, 0x03, 0xbf, 0x79, 0x60, 0xd8, 0x3e,
    0x43, 0x9f, 0xcc, 0x3e, 0x24, 0xcb, 0xd5, 0xbd, 0xc9, 0xaa,
    0x47, 0x3e, 0x8d, 0x04, 0x20, 0xbf, 0x3a, 0x74, 0x79, 0x3e,
    0x2a, 0x6a, 0xb2, 0xbe, 0xae, 0xd4, 0xb3, 0x3e, 0xe2, 0xe7,
    0x8f, 0x3e, 0x0f, 0xf9, 0x04, 0x3e, 0x7a, 0xda, 0x6e, 0x3e,
    0x56, 0x01, 0x55, 0x3e, 0x02, 0xd5, 0x96, 0xbe, 0x65, 0xdd,
    0x94, 0xbe, 0xa0, 0xc6, 0xbb, 0x3e, 0x89, 0xc2, 0x37, 0x3e,
    0x3e, 0xb0, 0x39, 0xbe, 0x50, 0xba, 0x92, 0x3c, 0x31, 0x36,
    0x77, 0x3e, 0x26, 0x0a, 0x87, 0x3e, 0x6f, 0x47, 0x30, 0xbd,
    0xa6, 0x09, 0x04, 0x3e, 0xb9, 0x75, 0xad, 0xbe, 0xfb, 0x3c,
    0x8c, 0xbe, 0x87, 0x79, 0x47, 0x3e, 0x5c, 0x02, 0x77, 0x3e,
    0x33, 0x37, 0x85, 0x3e, 0x4f, 0x8c, 0x9e, 0xbe, 0x4b, 0xbe,
    0xdd, 0xbe, 0xa2, 0x4c, 0x11, 0x3e, 0x5a, 0x50, 0x8c, 0xbe,
    0xc6, 0x0b, 0x61, 0x3e, 0x38, 0xb4, 0xa7, 0xbe, 0xf2, 0x73,
    0x8a, 0xbe, 0x30, 0x1e, 0x10, 0xbd, 0xf0, 0xb6, 0x94, 0xbe,
    0xd7, 0x35, 0xca, 0x3e, 0xf7, 0x52, 0xd5, 0x3e, 0x27, 0xe9,
    0xa6, 0xbe, 0xf0, 0xa4, 0xd3, 0xbc, 0xbc, 0x3e, 0xdc, 0x3d,
    0xf0, 0xac, 0x7b, 0x3d, 0xfc, 0x26, 0xcd, 0xbe, 0x24, 0x2c,
    0xc6, 0x3d, 0x08, 0x23, 0x69, 0xbe, 0x56, 0xf8, 0xbb, 0xbe,
    0xd6, 0x76, 0xaf, 0x3e, 0xe4, 0x11, 0x14, 0xbf, 0xf0, 0x00,
    0x80, 0xbd, 0x64, 0x54, 0xd6, 0xbe, 0xef, 0x24, 0x74, 0xbe,
    0x81, 0x18, 0x23, 0x3e, 0x7f, 0xfc, 0xa3, 0xbe, 0x52, 0xbf,
    0xaf, 0xbe, 0x20, 0xdf, 0x1d, 0x3d, 0x07, 0x6b, 0xce, 0xbd,
    0x00, 0xfb, 0xec, 0xbc, 0x9b, 0x56, 0xc1, 0x3e, 0xa0, 0x9f,
    0x19, 0x3d, 0xe1, 0x1c, 0xb8, 0x3e, 0xb1, 0x3b, 0x26, 0x3c,
    0xcf, 0x4e, 0x96, 0x3e, 0xd3, 0x33, 0x58, 0x3e, 0xf8, 0x61,
    0xc7, 0x3e, 0xaa, 0xe4, 0x38, 0x3e, 0x34, 0x29, 0xdc, 0xbd,
    0xa7, 0x2d, 0xfa, 0x3d, 0x8e, 0x8f, 0x39, 0xbe, 0x26, 0xb5,
    0xd1, 0x3e, 0x64, 0x2b, 0xa5, 0xbe, 0x46, 0xea, 0x7a, 0x3e,
    0x9c, 0x2c, 0x01, 0xbf, 0x5a, 0x1b, 0x9c, 0xbe, 0xaf, 0xc0,
    0x2f, 0x3e, 0xb0, 0xb7, 0xe6, 0xbd, 0x56, 0x2c, 0x32, 0x3e,
    0xe5, 0x2a, 0x46, 0x3d, 0xb9, 0x25, 0x5e, 0xbe, 0xf0, 0x74,
    0x8c, 0xbc, 0x2e, 0xe4, 0x4c, 0xbe, 0xde, 0xb6, 0x77, 0x3e,
    0x48, 0xa9, 0xac, 0xbd, 0x5e, 0x17, 0xca, 0xbe, 0xc0, 0x5e,
    0xee, 0x3c, 0xea, 0xe4, 0x31, 0x3e, 0x2a, 0x08, 0x78, 0x3e,
    0x22, 0x90, 0x54, 0x3e, 0x7a, 0x33, 0x8f, 0xbe, 0xc0, 0x6a,
    0xf9, 0xbc, 0x6c, 0xe0, 0xb5, 0xbe, 0xd5, 0x1e, 0xd1, 0x3e,
    0x04, 0x7a, 0xa6, 0x3d, 0x2c, 0x40, 0xb5, 0xbd, 0x02, 0xfd,
    0xbd, 0x3e, 0xa4, 0xd4, 0xb5, 0xbd, 0x9e, 0x01, 0x53, 0x3f,
    0x6d, 0xfa, 0x98, 0xbe, 0x20, 0xf7, 0x6c, 0xbd, 0x4f, 0xa7,
    0xcf, 0xbd, 0x18, 0x1b, 0x3e, 0xbe, 0x8f, 0xd8, 0xba, 0xbd,
    0xa2, 0x05, 0x77, 0x3e, 0xb9, 0xb6, 0xae, 0x3e, 0x0e, 0x6b,
    0x47, 0x3e, 0x5a, 0x4d, 0x7a, 0x3e, 0x93, 0x09, 0x1e, 0x3e,
    0x83, 0xee, 0xc3, 0xbe, 0x19, 0xb6, 0x9a, 0x3e, 0xb5, 0xf0,
    0xf0, 0x3d, 0x22, 0xd2, 0xca, 0xbe, 0x5a, 0x9b, 0xa1, 0xbe,
    0xee, 0x64, 0x02, 0x3e, 0x5f, 0xe6, 0xbc, 0xbe, 0xf8, 0x0f,
    0x59, 0xbd, 0x9c, 0xb0, 0xb5, 0x3e, 0x85, 0x4a, 0x34, 0xbd,
    0x76, 0xe3, 0xb2, 0xbe, 0x14, 0x0a, 0xb0, 0xbe, 0xb8, 0xf9,
    0x4f, 0xbd, 0x1a, 0x92, 0x32, 0x3f, 0x5f, 0x33, 0x6c, 0x3d,
    0xce, 0x03, 0xc3, 0xbe, 0x34, 0x63, 0xc1, 0xbd, 0x4f, 0xd2,
    0xb0, 0xbe, 0x89, 0x06, 0xaa, 0x3e, 0xb6, 0x03, 0x0f, 0xbe,
    0xc0, 0xc6, 0x02, 0x3c, 0x22, 0x05, 0xdd, 0xbe, 0x2c, 0xbd,
    0xa7, 0xbd, 0x7b, 0x12, 0x98, 0xbe, 0xc8, 0xd1, 0x09, 0xbd,
    0xb0, 0x2a, 0x8e, 0x3c, 0xb0, 0x55, 0x95, 0xbe, 0x66, 0xda,
    0x98, 0xbe, 0xb0, 0xde, 0x9c, 0xbc, 0xca, 0x4e, 0x0b, 0xbe,
    0x5e, 0xba, 0xc9, 0xbe, 0xa6, 0x91, 0x44, 0x3e, 0x8e, 0x65,
    0x9e, 0xbe, 0xf2, 0x4b, 0x05, 0xbe, 0x5a, 0x02, 0x91, 0xbe,
    0xf7, 0xac, 0xb9, 0xbe, 0xbc, 0x19, 0xd8, 0x3e, 0x58, 0x5a,
    0x7e, 0xbf, 0x64, 0xb2, 0x7c, 0xbe, 0x35, 0x93, 0x93, 0xbe,
    0xb8, 0x14, 0x08, 0xbe, 0xd2, 0x80, 0x84, 0x3e, 0xd8, 0x3c,
    0x1a, 0xbd, 0x33, 0x5d, 0x83, 0x3e, 0x00, 0x1f, 0xfe, 0xbb,
    0xc6, 0x4e, 0xcf, 0x3e, 0x81, 0xd2, 0xbf, 0xbd, 0xd0, 0x93,
    0x81, 0x3c, 0x52, 0xf3, 0x61, 0x3e, 0x18, 0x0a, 0x51, 0xbd,
    0x30, 0x7d, 0x6d, 0x3e, 0x49, 0x63, 0xf2, 0x3d, 0xa9, 0xad,
    0xd1, 0xbe, 0x97, 0xa7, 0x6d, 0xbe, 0x7a, 0x29, 0x1d, 0x3e,
    0x8c, 0x3e, 0x9d, 0x3d, 0x52, 0x6e, 0x07, 0xbf, 0xfe, 0x6d,
    0x0c, 0x3e, 0x9d, 0xcf, 0x1e, 0xbf, 0x25, 0xd5, 0x9d, 0x3e,
    0x3e, 0x10, 0x2c, 0xbe, 0x0d, 0x96, 0x5d, 0x3d, 0x15, 0x27,
    0x80, 0x3e, 0x8d, 0x03, 0xf4, 0x3e, 0xcd, 0xfe, 0x87, 0x3e,
    0xe4, 0x63, 0x9e, 0x3d, 0xae, 0xba, 0x56, 0xbd, 0xce, 0x82,
    0xaa, 0xbe, 0x20, 0x56, 0xf5, 0xbc, 0x57, 0x32, 0xd2, 0xbe,
    0x04, 0xa9, 0x6d, 0xbe, 0xc3, 0x78, 0xd3, 0x3e, 0x1b, 0xc9,
    0x3d, 0xbe, 0x40, 0x5e, 0x78, 0xbc, 0x7c, 0x1d, 0xa6, 0x3d,
    0x22, 0x78, 0x8c, 0xbe, 0x96, 0xc4, 0x72, 0x3e, 0xb6, 0xab,
    0xd6, 0xbe, 0xcf, 0x19, 0xc8, 0xbe, 0x47, 0x23, 0xab, 0xbe,
    0x53, 0x40, 0xcb, 0x3e, 0x06, 0xc3, 0x95, 0xbe, 0xdb, 0x7d,
    0x9d, 0x3e, 0x5b, 0x0a, 0x0d, 0x3e, 0x86, 0xd1, 0xb7, 0x3e,
    0x5c, 0xbf, 0xde, 0x3e, 0xa0, 0xfc, 0xea, 0x3e, 0x45, 0x18,
    0xf4, 0x3d, 0x29, 0x92, 0x8c, 0xbe, 0x00, 0x00, 0x00, 0x00,
    0x20, 0xd7, 0x2c, 0x3e, 0x02, 0x96, 0x7e, 0xbe, 0x00, 0x00,
    0x00, 0x00, 0xde, 0x36, 0x70, 0xbe, 0x8a, 0xcd, 0xa5, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0x50, 0x4b, 0x33, 0x3e, 0xd2, 0xc8,
    0x0b, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xbf, 0x2a, 0x21, 0xbf,
    0x81, 0xac, 0x67, 0xbf, 0xfe, 0x82, 0xad, 0x3f, 0xed, 0x26,
    0xa6, 0x3f, 0xf1, 0x5f, 0xc5, 0xbe, 0xea, 0x8a, 0x92,
    0x3e, 0x02, 0x0d, 0x18, 0xbf, 0x23, 0xc5, 0x31, 0xbf,
    0xd6, 0x26, 0x63, 0x3e, 0xdc, 0xe9, 0x06, 0xbf, 0x74,
    0x86, 0xe3, 0x3e, 0x64, 0x12, 0x87, 0xbf, 0xa6, 0xd1,
    0xdf, 0xbe, 0x81, 0x04, 0x1e, 0xbf, 0x95, 0x9f, 0xfc,
    0xbe, 0x44, 0xad, 0x2b, 0x3e, 0xe1, 0x0c, 0x85, 0xbe
  };

  return AI_HANDLE_PTR(s_sine_model_weights);

}

