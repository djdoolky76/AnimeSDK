#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/NEIMNLALAJN.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1783DEF0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_2__PLAYSTORYNODE_B__10_OFFSET UNITYSDK_OFFSET(0x1783DF00)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_2__PLAYSTORYNODE_B__11_OFFSET UNITYSDK_OFFSET(0x1783E0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass144_2_TypeDefinitionIndex = 44739;

	template <typename T1, typename T2>
	class UIGalgamePageController___c__DisplayClass144_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::Action* __9__11; // 0x18
		::NEIMNLALAJN itemGroup; // 0x20
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_2__PLAYSTORYNODE_B__10_OFFSET))(this);
		}

		::System::Void _PlayStoryNode_b__11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS144_2__PLAYSTORYNODE_B__11_OFFSET))(this);
		}
	};
}
