#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPFMDEBJEMG;
namespace MoleMole { class UIChatPlusTimeLinePageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1806C2C0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS37_0__ONNORMALGRAPHEXIT_B__1_OFFSET UNITYSDK_OFFSET(0x1806C2D0)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS37_0__ONNORMALGRAPHEXIT_B__2_OFFSET UNITYSDK_OFFSET(0x1806C360)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusTimeLinePageController___c__DisplayClass37_0_TypeDefinitionIndex = 42313;

	class UIChatPlusTimeLinePageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIChatPlusTimeLinePageController* __4__this; // 0x10
		::System::Action_1<::DPFMDEBJEMG*>* onFinishCallBack; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNormalGraphExit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS37_0__ONNORMALGRAPHEXIT_B__1_OFFSET))(this);
		}

		::System::Void _OnNormalGraphExit_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS37_0__ONNORMALGRAPHEXIT_B__2_OFFSET))(this);
		}
	};
}
