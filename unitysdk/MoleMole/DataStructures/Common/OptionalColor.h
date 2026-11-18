#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD680)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalColor_TypeDefinitionIndex = 28070;

	class OptionalColor
	{
	public:
		::System::Void _ctor(::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALCOLOR__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
