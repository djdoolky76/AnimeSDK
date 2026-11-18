#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD660)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalBool_TypeDefinitionIndex = 28215;

	class OptionalBool
	{
	public:
		::System::Void _ctor(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALBOOL__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
