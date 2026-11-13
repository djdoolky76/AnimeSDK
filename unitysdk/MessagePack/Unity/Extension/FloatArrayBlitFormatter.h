#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x208F2250)
#define MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x208F2240)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int FloatArrayBlitFormatter_TypeDefinitionIndex = 10173;

	class FloatArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_FLOATARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
