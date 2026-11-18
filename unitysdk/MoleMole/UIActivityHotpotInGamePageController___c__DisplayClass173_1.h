#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLKBHBINBF;

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFD920)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_1__ONINLEVELPAUSERESTART_B__1_OFFSET UNITYSDK_OFFSET(0x14BFD930)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass173_1_TypeDefinitionIndex = 43531;

	template <typename T>
	class UIActivityHotpotInGamePageController___c__DisplayClass173_1 : public ::System::Object
	{
	public:
		::MDLKBHBINBF* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnInLevelPauseRestart_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS173_1__ONINLEVELPAUSERESTART_B__1_OFFSET))(this);
		}
	};
}
