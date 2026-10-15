#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define KJLLNCOKAPF_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xB454130)
#define KJLLNCOKAPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4542A0)
#define KJLLNCOKAPF_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xB454240)
#define KJLLNCOKAPF_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB453F90)

inline static constexpr unsigned int KJLLNCOKAPF_TypeDefinitionIndex = 80995;

	class KJLLNCOKAPF : public ::OMCMJNICFCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJLLNCOKAPF_CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KJLLNCOKAPF_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void BEMHFPJIJME(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KJLLNCOKAPF_BEMHFPJIJME_OFFSET))(this, a1, a2);
		}

		::System::Void EPJFIHHDMAK(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + KJLLNCOKAPF_EPJFIHHDMAK_OFFSET))(this, a1);
		}

	};
