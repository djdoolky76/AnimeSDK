#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB63750)
#define MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB63740)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int IntArrayBlitFormatter_TypeDefinitionIndex = 10164;

	class IntArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_INTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
