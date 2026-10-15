#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB64290)
#define MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB64280)

namespace MessagePack::Unity::Extension
{
	class Vector3ArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_VECTOR3ARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
