#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueModule; }

#define LGOBKEFEAEH___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB69D810)
#define LGOBKEFEAEH___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xB69D820)

inline static constexpr unsigned int LGOBKEFEAEH___c__DisplayClass1_0_TypeDefinitionIndex = 58797;

	class LGOBKEFEAEH___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueModule* rogueModule; // 0x10
		::System::UInt32 nextRogueSiteID; // 0x18
		::System::UInt32 nextRogueRoomID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOBKEFEAEH___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGOBKEFEAEH___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

	};
