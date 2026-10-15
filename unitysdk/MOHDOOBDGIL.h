#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIACDLNBJB;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define MOHDOOBDGIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA26F80)
#define MOHDOOBDGIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA27020)

inline static constexpr unsigned int MOHDOOBDGIL_TypeDefinitionIndex = 80957;

	class MOHDOOBDGIL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOHDOOBDGIL_CTOR_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* BPLPBPMEODA(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::ALIACDLNBJB* a3)
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::ALIACDLNBJB*))((::PBYTE)hIl2Cpp + MOHDOOBDGIL_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
