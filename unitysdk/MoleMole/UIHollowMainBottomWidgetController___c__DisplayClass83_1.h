#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS83_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6F710)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS83_1__SHOWCHANGEAVATARANIM_B__0_OFFSET UNITYSDK_OFFSET(0x19C6F720)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass83_1_TypeDefinitionIndex = 43695;

	template <typename T>
	class UIHollowMainBottomWidgetController___c__DisplayClass83_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* tran; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS83_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowChangeAvatarAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS83_1__SHOWCHANGEAVATARANIM_B__0_OFFSET))(this);
		}
	};
}
