#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHBKFFHANDB;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2B3A0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__PLAYGETITEMANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18F2B3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass48_0_TypeDefinitionIndex = 43685;

	class UIHollowMainBottomWidgetController___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::LHBKFFHANDB* entry; // 0x10
		::System::Int32 count; // 0x18
		::System::Boolean add; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetItemAnim_b__0(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS48_0__PLAYGETITEMANIM_B__0_OFFSET))(this, doneCb);
		}
	};
}
