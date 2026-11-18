#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace MoleMole { class UIFlowerMainPageController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1986D1F0)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__0_OFFSET UNITYSDK_OFFSET(0x1986D200)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__1_OFFSET UNITYSDK_OFFSET(0x1986D630)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__2_OFFSET UNITYSDK_OFFSET(0x1986D9A0)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__3_OFFSET UNITYSDK_OFFSET(0x1986DB30)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__4_OFFSET UNITYSDK_OFFSET(0x1986D610)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainPageController___c__DisplayClass24_0_TypeDefinitionIndex = 45562;

	class UIFlowerMainPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Action* __9__4; // 0x10
		::System::Action_2<::System::Int32, ::System::Action*>* openTimelineHandler; // 0x18
		::MoleMole::UIFlowerMainPageController* __4__this; // 0x20
		::IANDOOLAALI_DLAAJNDJPLO* openResultDialogHandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__0_OFFSET))(this, message);
		}

		::System::Void _FinishFlower_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__4_OFFSET))(this);
		}

		::System::Void _FinishFlower_b__1(::System::Int32 timelineID, ::System::Action* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__1_OFFSET))(this, timelineID, onClose);
		}

		::System::Void _FinishFlower_b__2(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__2_OFFSET))(this, message);
		}

		::System::Void _FinishFlower_b__3(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS24_0__FINISHFLOWER_B__3_OFFSET))(this, message);
		}
	};
}
