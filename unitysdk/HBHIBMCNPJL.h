#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define HBHIBMCNPJL_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0x15C045E0)
#define HBHIBMCNPJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C04690)

inline static constexpr unsigned int HBHIBMCNPJL_TypeDefinitionIndex = 80990;

	class HBHIBMCNPJL : public ::OMCMJNICFCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBHIBMCNPJL_CTOR_OFFSET))(this);
		}

		::System::Void BEMHFPJIJME(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HBHIBMCNPJL_BEMHFPJIJME_OFFSET))(this, a1, a2);
		}

	};
