#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GMMBMCIOBKM;

#define MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x173F61A0)
#define MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS9_1__ONPOPSHOWED_B__2_OFFSET UNITYSDK_OFFSET(0x173F6510)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_BabeltowerPageController___c__DisplayClass9_1_TypeDefinitionIndex = 62724;

	template <typename T>
	class UILevelResultV2_BabeltowerPageController___c__DisplayClass9_1 : public ::System::Object
	{
	public:
		::GMMBMCIOBKM* towerModel; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS9_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_BABELTOWERPAGECONTROLLER___C__DISPLAYCLASS9_1__ONPOPSHOWED_B__2_OFFSET))(this);
		}
	};
}
