#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define PAMPELGAMES_SHARED_UTILITY_PGEMPTYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace PampelGames::Shared::Utility
{
	inline static constexpr unsigned int PGEmptyComponent_TypeDefinitionIndex = 21154;

	class PGEmptyComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGEMPTYCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
