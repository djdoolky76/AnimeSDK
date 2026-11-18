#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AHIKNHGPAMH;
class ALDOKCCIFNB;

#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8BDD0)
#define MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS45_0__ONTUTORIALBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x19C8BDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyDetailPageController___c__DisplayClass45_0_TypeDefinitionIndex = 77808;

	class UIStrategyDetailPageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::AHIKNHGPAMH* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTutorialBtnClicked_b__0(::ALDOKCCIFNB* data)
		{
			return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYDETAILPAGECONTROLLER___C__DISPLAYCLASS45_0__ONTUTORIALBTNCLICKED_B__0_OFFSET))(this, data);
		}
	};
}
