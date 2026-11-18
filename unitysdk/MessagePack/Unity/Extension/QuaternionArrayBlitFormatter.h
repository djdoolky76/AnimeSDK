#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1EDCB2C0)
#define MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDCB2D0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int QuaternionArrayBlitFormatter_TypeDefinitionIndex = 29768;

	class QuaternionArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER__CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_QUATERNIONARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}
	};
}
