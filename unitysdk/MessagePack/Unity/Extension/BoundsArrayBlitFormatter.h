#pragma once
#include "unitysdk/unitysdk.h"

#define MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB63690)
#define MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x1BB63680)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int BoundsArrayBlitFormatter_TypeDefinitionIndex = 10162;

	class BoundsArrayBlitFormatter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_CTOR_OFFSET))(this);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_BOUNDSARRAYBLITFORMATTER_GET_TYPECODE_OFFSET))(this);
		}

	};
}
