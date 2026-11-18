#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFC9B0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_1__PLAYNPCFADEACTIONS_B__4_OFFSET UNITYSDK_OFFSET(0x18EFC9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass540_1_TypeDefinitionIndex = 44804;

	template <typename T>
	class UIGalgamePageController___c__DisplayClass540_1 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Int32 idx; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayNPCFadeActions_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS540_1__PLAYNPCFADEACTIONS_B__4_OFFSET))(this);
		}
	};
}
