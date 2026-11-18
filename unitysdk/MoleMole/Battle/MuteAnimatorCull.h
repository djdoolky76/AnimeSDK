#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_MUTEANIMATORCULL__CTOR_OFFSET UNITYSDK_OFFSET(0x1218DB70)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MuteAnimatorCull_TypeDefinitionIndex = 65935;

	class MuteAnimatorCull : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUTEANIMATORCULL__CTOR_OFFSET))(this);
		}
	};
}
