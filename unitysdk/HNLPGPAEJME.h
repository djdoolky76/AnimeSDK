#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define HNLPGPAEJME_CTOR_OFFSET UNITYSDK_OFFSET(0x15D94820)
#define HNLPGPAEJME_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x15D947C0)
#define HNLPGPAEJME_ONHOVER_OFFSET UNITYSDK_OFFSET(0x15D945E0)
#define HNLPGPAEJME_POFHPJFCFFJ_OFFSET UNITYSDK_OFFSET(0x15D94690)

inline static constexpr unsigned int HNLPGPAEJME_TypeDefinitionIndex = 80992;

	class HNLPGPAEJME : public ::OMCMJNICFCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLPGPAEJME_CTOR_OFFSET))(this);
		}

		::System::Void OnHover(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HNLPGPAEJME_ONHOVER_OFFSET))(this, a1, a2);
		}

		::System::Void POFHPJFCFFJ(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HNLPGPAEJME_POFHPJFCFFJ_OFFSET))(this, a1, a2);
		}

		::System::Void EPJFIHHDMAK(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + HNLPGPAEJME_EPJFIHHDMAK_OFFSET))(this, a1);
		}

	};
