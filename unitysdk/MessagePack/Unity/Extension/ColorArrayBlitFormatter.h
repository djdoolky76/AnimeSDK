#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB42E90)
#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB42E80)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int ColorArrayBlitFormatter_TypeDefinitionIndex = 10161;

	class ColorArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
