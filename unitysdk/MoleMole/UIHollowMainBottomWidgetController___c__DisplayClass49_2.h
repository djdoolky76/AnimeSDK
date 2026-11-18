#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHBKFFHANDB;
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__CTOR_OFFSET UNITYSDK_OFFSET(0x183A9130)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__PLAYGETCOINANIM_B__1_OFFSET UNITYSDK_OFFSET(0x183A9140)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass49_2_TypeDefinitionIndex = 43689;

	template <typename T1, typename T2>
	class UIHollowMainBottomWidgetController___c__DisplayClass49_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::LHBKFFHANDB* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGetCoinAnim_b__1(::System::Action* doneCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS49_2__PLAYGETCOINANIM_B__1_OFFSET))(this, doneCb);
		}
	};
}
