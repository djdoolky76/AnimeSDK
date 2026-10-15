#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define CAJHMHHIJEG___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC4875E0)
#define CAJHMHHIJEG___C__DISPLAYCLASS26_0___REMOVETUTORIALMAXSPEEDMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0xC487650)

inline static constexpr unsigned int CAJHMHHIJEG___c__DisplayClass26_0_TypeDefinitionIndex = 58434;

	class CAJHMHHIJEG___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJHMHHIJEG___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveTutorialMaxSpeedModifier_b__0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + CAJHMHHIJEG___C__DISPLAYCLASS26_0___REMOVETUTORIALMAXSPEEDMODIFIER_B__0_OFFSET))(this, a1);
		}

	};
