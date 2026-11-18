#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHBKFFHANDB;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6F4A0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__PLAYGETCOINANIM_B__2_OFFSET UNITYSDK_OFFSET(0x19C6F4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass49_3_TypeDefinitionIndex = 43694;

	template <typename T1, typename T2, typename T3>
	class UIHollowMainBottomWidgetController___c__DisplayClass49_3 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals3; // 0x10
		::LHBKFFHANDB* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetCoinAnim_b__2(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_3__PLAYGETCOINANIM_B__2_OFFSET))(this, doneCb);
		}
	};
}
