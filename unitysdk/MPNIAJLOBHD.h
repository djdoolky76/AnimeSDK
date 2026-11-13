#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define MPNIAJLOBHD_BFPALJPFBNL_OFFSET UNITYSDK_OFFSET(0x1B22B3B0)
#define MPNIAJLOBHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B22B980)
#define MPNIAJLOBHD_ONHOVER_OFFSET UNITYSDK_OFFSET(0x1B22B0C0)
#define MPNIAJLOBHD_POFHPJFCFFJ_OFFSET UNITYSDK_OFFSET(0x1B22B450)

inline static constexpr unsigned int MPNIAJLOBHD_TypeDefinitionIndex = 83776;

	class MPNIAJLOBHD : public ::OMCMJNICFCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPNIAJLOBHD_CTOR_OFFSET))(this);
		}

		::System::Void OnHover(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MPNIAJLOBHD_ONHOVER_OFFSET))(this, a1, a2);
		}

		::System::Void BFPALJPFBNL(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*))((::PBYTE)hIl2Cpp + MPNIAJLOBHD_BFPALJPFBNL_OFFSET))(this, a1);
		}

		::System::Void POFHPJFCFFJ(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MPNIAJLOBHD_POFHPJFCFFJ_OFFSET))(this, a1, a2);
		}

	};
