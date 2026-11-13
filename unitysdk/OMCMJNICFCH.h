#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/HoverBrainStates/FateRinHoverPointerEventKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define OMCMJNICFCH_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0x17D49390)
#define OMCMJNICFCH_BFPALJPFBNL_OFFSET UNITYSDK_OFFSET(0x17D492A0)
#define OMCMJNICFCH_BPNJBGFNBFB_OFFSET UNITYSDK_OFFSET(0x17D48FA0)
#define OMCMJNICFCH_CTOR_OFFSET UNITYSDK_OFFSET(0x17D49430)
#define OMCMJNICFCH_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x17D493E0)
#define OMCMJNICFCH_ONDRAG_OFFSET UNITYSDK_OFFSET(0x17D49340)
#define OMCMJNICFCH_ONHOVER_OFFSET UNITYSDK_OFFSET(0x17D49250)
#define OMCMJNICFCH_POFHPJFCFFJ_OFFSET UNITYSDK_OFFSET(0x17D492F0)

inline static constexpr unsigned int OMCMJNICFCH_TypeDefinitionIndex = 83779;

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
