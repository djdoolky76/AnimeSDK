#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1E7B2FA0)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B2FB0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int Vector3ArrayBlitFormatter_TypeDefinitionIndex = 29154;

	class Vector3ArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
