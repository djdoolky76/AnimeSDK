#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAIDPLAKEBP.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define CHEMJEJKPJI_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xCC938D0)
#define CHEMJEJKPJI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC939E0)
#define CHEMJEJKPJI_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xCC93980)
#define CHEMJEJKPJI_ONDRAG_OFFSET UNITYSDK_OFFSET(0xCC93870)

	class CHEMJEJKPJI : public ::GAIDPLAKEBP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEMJEJKPJI_CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CHEMJEJKPJI_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void BEMHFPJIJME(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CHEMJEJKPJI_BEMHFPJIJME_OFFSET))(this, a1, a2);
		}

		::System::Void EPJFIHHDMAK(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + CHEMJEJKPJI_EPJFIHHDMAK_OFFSET))(this, a1);
		}

	};
