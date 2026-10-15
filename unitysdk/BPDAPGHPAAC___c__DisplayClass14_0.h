#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INNLEDLNDNN;
namespace RPG::GameCore { class GameEntity; }

#define BPDAPGHPAAC___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC19FC10)
#define BPDAPGHPAAC___C__DISPLAYCLASS14_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET UNITYSDK_OFFSET(0xC1A0930)

inline static constexpr unsigned int BPDAPGHPAAC___c__DisplayClass14_0_TypeDefinitionIndex = 71620;

	class BPDAPGHPAAC___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::INNLEDLNDNN* battleEventPanel; // 0x18
		::System::UInt32 slotIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreateBattleEventPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC___C__DISPLAYCLASS14_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET))(this);
		}

	};
