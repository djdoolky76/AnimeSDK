#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMCMJNICFCH.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHoverBrain; }

#define GAIDPLAKEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1593C700)
#define GAIDPLAKEBP_DDDBKDFGAHF_OFFSET UNITYSDK_OFFSET(0x1593C550)

inline static constexpr unsigned int GAIDPLAKEBP_TypeDefinitionIndex = 80992;

	class GAIDPLAKEBP : public ::OMCMJNICFCH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIDPLAKEBP_CTOR_OFFSET))(this);
		}

		static ::System::Void DDDBKDFGAHF(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::Battle::FateRinBattleHudHoverBrain*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GAIDPLAKEBP_DDDBKDFGAHF_OFFSET))(a1, a2);
		}

	};
