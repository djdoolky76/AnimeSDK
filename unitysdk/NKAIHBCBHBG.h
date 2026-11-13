#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define NKAIHBCBHBG_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0x1A7A9AF0)
#define NKAIHBCBHBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7A9C00)
#define NKAIHBCBHBG_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x1A7A9BA0)
#define NKAIHBCBHBG_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A7A9920)

inline static constexpr unsigned int NKAIHBCBHBG_TypeDefinitionIndex = 83774;

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
