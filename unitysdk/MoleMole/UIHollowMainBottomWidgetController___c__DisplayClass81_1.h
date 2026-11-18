#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_1__CTOR_OFFSET UNITYSDK_OFFSET(0x187CAFD0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_1__MOVELEFTAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0x187CAFE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c__DisplayClass81_1_TypeDefinitionIndex = 43691;

	template <typename T>
	class UIHollowMainBottomWidgetController___c__DisplayClass81_1 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* hpTran; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_1__CTOR_OFFSET))(this);
		}

		::System::Void _MoveLeftAvatar_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__DISPLAYCLASS81_1__MOVELEFTAVATAR_B__1_OFFSET))(this);
		}
	};
}
