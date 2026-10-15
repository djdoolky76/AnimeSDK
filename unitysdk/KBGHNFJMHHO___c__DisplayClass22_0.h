#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INNLEDLNDNN;
class KBGHNFJMHHO;
namespace RPG::GameCore { class GameEntity; }

#define KBGHNFJMHHO___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB2F5180)
#define KBGHNFJMHHO___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET UNITYSDK_OFFSET(0xB2F6590)
#define KBGHNFJMHHO___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__1_OFFSET UNITYSDK_OFFSET(0xB2F6550)

inline static constexpr unsigned int KBGHNFJMHHO___c__DisplayClass22_0_TypeDefinitionIndex = 71628;

	class KBGHNFJMHHO___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* entity; // 0x10
		::KBGHNFJMHHO* __4__this; // 0x18
		::INNLEDLNDNN* battleEventPanel; // 0x20
		::System::UInt32 slotIndex; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateBattleEventPanel_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__1_OFFSET))(this);
		}

		::System::Void __CreateBattleEventPanel_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGHNFJMHHO___C__DISPLAYCLASS22_0___CREATEBATTLEEVENTPANEL_B__0_OFFSET))(this);
		}

	};
