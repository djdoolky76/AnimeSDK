#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAIDPLAKEBP.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define AAEFIGLHBLH_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xB726EB0)
#define AAEFIGLHBLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB726FE0)
#define AAEFIGLHBLH_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB726F80)
#define AAEFIGLHBLH_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB726E50)

inline static constexpr unsigned int AAEFIGLHBLH_TypeDefinitionIndex = 83774;

	class AAEFIGLHBLH : public ::GAIDPLAKEBP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEFIGLHBLH_CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AAEFIGLHBLH_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void BEMHFPJIJME(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AAEFIGLHBLH_BEMHFPJIJME_OFFSET))(this, a1, a2);
		}

		::System::Void EPJFIHHDMAK(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + AAEFIGLHBLH_EPJFIHHDMAK_OFFSET))(this, a1);
		}

	};
