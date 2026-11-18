#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIBangkovTaskDetailWidgetController; }

#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CREATETASKDETAILBANGKOVITEMTIPCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x19BCA170)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCA160)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskDetailWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 77683;

	class UIBangkovTaskDetailWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovTaskDetailWidgetController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateTaskDetailBangkovItemTipCallback_b__0(::IFOHGNLIAKH* c)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CREATETASKDETAILBANGKOVITEMTIPCALLBACK_B__0_OFFSET))(this, c);
		}
	};
}
