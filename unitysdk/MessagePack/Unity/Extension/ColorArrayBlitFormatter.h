#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x208F21F0)
#define MESSAGEPACK_UNITY_EXTENSION_COLORARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x208F21E0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int ColorArrayBlitFormatter_TypeDefinitionIndex = 10169;

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
