#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIACDLNBJB;
class CAEBEEOCLLI;
class JMIAGJADDDK;
class MOHDOOBDGIL;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputBrain; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define KMBPODMNLAN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB53CB30)
#define KMBPODMNLAN_CTOR_OFFSET UNITYSDK_OFFSET(0xB53CA60)

inline static constexpr unsigned int KMBPODMNLAN_TypeDefinitionIndex = 80928;

	class KMBPODMNLAN : public ::System::Object
	{
	public:
		::MOHDOOBDGIL* JPOICDFFNLN; // 0x10
		::JMIAGJADDDK* LFCGFHMCEFD; // 0x18
		::CAEBEEOCLLI* ODBKGBNKPPJ; // 0x20
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + KMBPODMNLAN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain* BPLPBPMEODA(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::ALIACDLNBJB* a3)
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHudInputBrain*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::ALIACDLNBJB*))((::PBYTE)hIl2Cpp + KMBPODMNLAN_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
