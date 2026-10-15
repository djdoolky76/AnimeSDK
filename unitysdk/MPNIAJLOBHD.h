#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define MPNIAJLOBHD_BFPALJPFBNL_OFFSET UNITYSDK_OFFSET(0xBA3D180)
#define MPNIAJLOBHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3D750)
#define MPNIAJLOBHD_ONHOVER_OFFSET UNITYSDK_OFFSET(0xBA3CE90)
#define MPNIAJLOBHD_POFHPJFCFFJ_OFFSET UNITYSDK_OFFSET(0xBA3D220)

inline static constexpr unsigned int MPNIAJLOBHD_TypeDefinitionIndex = 80996;

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
