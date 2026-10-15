#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB42EC0)
#define MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB42EB0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int DoubleArrayBlitFormatter_TypeDefinitionIndex = 10166;

	class DoubleArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_DOUBLEARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
