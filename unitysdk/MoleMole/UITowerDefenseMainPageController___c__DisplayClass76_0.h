#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJMLLONLLEG;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ISFEEENOUGH_1_OFFSET UNITYSDK_OFFSET(0x14E18280)
#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ONPOINTERDOWN_0_OFFSET UNITYSDK_OFFSET(0x14E18250)
#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14E18240)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseMainPageController___c__DisplayClass76_0_TypeDefinitionIndex = 70753;

	class UITowerDefenseMainPageController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerDefenseMainPageController* __4__this; // 0x10
		::UnityEngine::GameObject* previewModel; // 0x18
		::System::Int32 templateID; // 0x20
		::System::Int32 index; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::CJMLLONLLEG* _AddBangBooCard_g__OnPointerDown_0()
		{
			return ((::CJMLLONLLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ONPOINTERDOWN_0_OFFSET))(this);
		}

		::System::Boolean _AddBangBooCard_g__IsFeeEnough_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ISFEEENOUGH_1_OFFSET))(this);
		}
	};
}
