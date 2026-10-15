#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinExtraSource.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class MBBEBLGELAP;
class MKKGJDHBOMH;
class OKLEONFEGAC;
namespace RPG::GameCore { class GameEntity; }

#define DIAHGNIILIK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEF660)
#define DIAHGNIILIK_DEBKLDOJEFE_OFFSET UNITYSDK_OFFSET(0xEBEF6C0)
#define DIAHGNIILIK_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xEBEF670)

	class DIAHGNIILIK : public ::System::Object
	{
	public:
		::MKKGJDHBOMH* GAHPOBBGKMO; // 0x10
		::MBBEBLGELAP* JMHAHDHJNCC; // 0x18
		::OKLEONFEGAC* OFMAGBDMKGI; // 0x20
		::BJHMBGLPOLB* OMBELOGGHCA; // 0x28
		::RPG::GameCore::FateRinExtraSource COEPLOMIKJG; // 0x30
		::System::Void _ctor(::OKLEONFEGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLEONFEGAC*))((::PBYTE)hIl2Cpp + DIAHGNIILIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAHGNIILIK_KHNCMBEFIKI_OFFSET))(this);
		}

		::MKKGJDHBOMH* DEBKLDOJEFE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::MKKGJDHBOMH*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DIAHGNIILIK_DEBKLDOJEFE_OFFSET))(this, a1);
		}

	};
