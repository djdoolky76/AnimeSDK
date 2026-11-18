#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1EF1E020)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF1E030)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector4ArrayBlitFormatter_TypeDefinitionIndex = 29352;

	class Vector4ArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR4ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
