#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define JMKIJLCFJMF___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB26E740)
#define JMKIJLCFJMF___C__DISPLAYCLASS27_0___REMOVEMAXSPEEDMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0xB26E750)

	class JMKIJLCFJMF___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveMaxSpeedModifier_b__0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF___C__DISPLAYCLASS27_0___REMOVEMAXSPEEDMODIFIER_B__0_OFFSET))(this, a1);
		}

	};
