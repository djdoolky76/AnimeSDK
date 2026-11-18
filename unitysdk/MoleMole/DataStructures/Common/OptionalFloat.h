#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD6B0)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalFloat_TypeDefinitionIndex = 28173;

	class OptionalFloat
	{
	public:
		::System::Void _ctor(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALFLOAT__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
