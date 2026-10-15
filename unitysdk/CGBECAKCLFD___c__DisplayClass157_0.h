#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define CGBECAKCLFD___C__DISPLAYCLASS157_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC81ED0)
#define CGBECAKCLFD___C__DISPLAYCLASS157_0__REMOVESLAMTARGETSPEEDCLAMP_B__0_OFFSET UNITYSDK_OFFSET(0xCC85120)

	class CGBECAKCLFD___c__DisplayClass157_0 : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS157_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveSlamTargetSpeedClamp_b__0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + CGBECAKCLFD___C__DISPLAYCLASS157_0__REMOVESLAMTARGETSPEEDCLAMP_B__0_OFFSET))(this, a1);
		}

	};
