#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB42F80)
#define MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB42F70)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int RectArrayBlitFormatter_TypeDefinitionIndex = 10163;

	class RectArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_RECTARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
