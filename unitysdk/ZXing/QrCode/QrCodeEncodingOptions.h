#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Common/EncodingOptions.h"

namespace System { class String; }

#define ZXING_QRCODE_QRCODEENCODINGOPTIONS_SET_CHARACTERSET_OFFSET UNITYSDK_OFFSET(0x44554E0)
#define ZXING_QRCODE_QRCODEENCODINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x4453BD0)

namespace ZXing::QrCode
{
	inline static constexpr unsigned int QrCodeEncodingOptions_TypeDefinitionIndex = 19058;

	class QrCodeEncodingOptions : public ::ZXing::Common::EncodingOptions
	{
	public:
		::System::Void set_CharacterSet(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEENCODINGOPTIONS_SET_CHARACTERSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEENCODINGOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
