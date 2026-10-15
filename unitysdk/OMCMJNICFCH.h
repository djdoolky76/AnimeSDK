#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerEventKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define OMCMJNICFCH_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xBF19DC0)
#define OMCMJNICFCH_BFPALJPFBNL_OFFSET UNITYSDK_OFFSET(0xBF19CD0)
#define OMCMJNICFCH_BPNJBGFNBFB_OFFSET UNITYSDK_OFFSET(0xBF199D0)
#define OMCMJNICFCH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF19E60)
#define OMCMJNICFCH_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBF19E10)
#define OMCMJNICFCH_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBF19D70)
#define OMCMJNICFCH_ONHOVER_OFFSET UNITYSDK_OFFSET(0xBF19C80)
#define OMCMJNICFCH_POFHPJFCFFJ_OFFSET UNITYSDK_OFFSET(0xBF19D20)

inline static constexpr unsigned int OMCMJNICFCH_TypeDefinitionIndex = 80999;

	class OMCMJNICFCH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCMJNICFCH_CTOR_OFFSET))(this);
		}

		::System::Void BPNJBGFNBFB(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::RPG::Client::FateRin::Battle::HoverBrainStates::FateRinHoverPointerEventKind, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OMCMJNICFCH_BPNJBGFNBFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnHover(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OMCMJNICFCH_ONHOVER_OFFSET))(this, a1, a2);
		}

		::System::Void BFPALJPFBNL(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + OMCMJNICFCH_BFPALJPFBNL_OFFSET))(this, a1);
		}

		::System::Void POFHPJFCFFJ(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OMCMJNICFCH_POFHPJFCFFJ_OFFSET))(this, a1, a2);
		}

		::System::Void OnDrag(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OMCMJNICFCH_ONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void BEMHFPJIJME(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + OMCMJNICFCH_BEMHFPJIJME_OFFSET))(this, a1, a2);
		}

		::System::Void EPJFIHHDMAK(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + OMCMJNICFCH_EPJFIHHDMAK_OFFSET))(this, a1);
		}

	};
