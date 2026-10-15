#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB64260)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB64250)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector2ArrayBlitFormatter_TypeDefinitionIndex = 10157;

	class Vector2ArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR2ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
