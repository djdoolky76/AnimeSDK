#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD710)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalVector2_TypeDefinitionIndex = 28279;

	class OptionalVector2
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR2__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
