#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ABLFJPPJLIP_BAFNEDGCKPN;
class EGKDMJGMIFC;
namespace MoleMole { class UIDisplayCaseManualPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1998FE90)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__0_OFFSET UNITYSDK_OFFSET(0x1998FEA0)
#define MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__1_OFFSET UNITYSDK_OFFSET(0x199901E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseManualPageController___c__DisplayClass17_0_TypeDefinitionIndex = 44006;

	class UIDisplayCaseManualPageController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Foundation::AssetPath prefab; // 0x10
		::System::Action* __9__1; // 0x20
		::ABLFJPPJLIP_BAFNEDGCKPN* view; // 0x28
		::EGKDMJGMIFC* cfg; // 0x30
		::MoleMole::UIDisplayCaseManualPageController* __4__this; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLeft_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__0_OFFSET))(this);
		}

		::System::Void _RefreshLeft_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEMANUALPAGECONTROLLER___C__DISPLAYCLASS17_0__REFRESHLEFT_B__1_OFFSET))(this);
		}
	};
}
