#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIACDLNBJB;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define CAEBEEOCLLI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1BCE40)
#define CAEBEEOCLLI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BCDC0)

inline static constexpr unsigned int CAEBEEOCLLI_TypeDefinitionIndex = 80921;

	class CAEBEEOCLLI : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + CAEBEEOCLLI_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* BPLPBPMEODA(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::ALIACDLNBJB* a3)
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::ALIACDLNBJB*))((::PBYTE)hIl2Cpp + CAEBEEOCLLI_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
