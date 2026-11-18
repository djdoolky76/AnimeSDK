#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"

#define MESSAGEPACK_SAFEBITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1D4802B0)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1D480370)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1D4803D0)
#define MESSAGEPACK_SAFEBITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1D480310)

namespace MessagePack
{
	inline static constexpr unsigned int SafeBitConverter_TypeDefinitionIndex = 29925;

	class SafeBitConverter : public ::System::Object
	{
	public:
		static ::System::Int64 ToInt64(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> value)
		{
			return ((::System::Int64(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOINT64_OFFSET))(value);
		}

		static ::System::UInt64 ToUInt64(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> value)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT64_OFFSET))(value);
		}

		static ::System::UInt16 ToUInt16(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> value)
		{
			return ((::System::UInt16(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT16_OFFSET))(value);
		}

		static ::System::UInt32 ToUInt32(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte> value)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_SAFEBITCONVERTER_TOUINT32_OFFSET))(value);
		}
	};
}
