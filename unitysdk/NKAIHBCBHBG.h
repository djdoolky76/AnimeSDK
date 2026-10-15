#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define NKAIHBCBHBG_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xBC275F0)
#define NKAIHBCBHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC27700)
#define NKAIHBCBHBG_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBC276A0)
#define NKAIHBCBHBG_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBC27420)

inline static constexpr unsigned int NKAIHBCBHBG_TypeDefinitionIndex = 80994;

	class NKAIHBCBHBG : public ::OMCMJNICFCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAIHBCBHBG_CTOR_OFFSET))(this);
		}

		::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NKAIHBCBHBG_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void BEMHFPJIJME(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NKAIHBCBHBG_BEMHFPJIJME_OFFSET))(this, a1, a2);
		}

		::System::Void EPJFIHHDMAK(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + NKAIHBCBHBG_EPJFIHHDMAK_OFFSET))(this, a1);
		}

	};
