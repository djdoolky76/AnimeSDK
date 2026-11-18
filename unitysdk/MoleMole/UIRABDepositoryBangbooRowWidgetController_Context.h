#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FIPKLLAILEM;
class IBENDELLLAO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1799C120)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooRowWidgetController_Context_TypeDefinitionIndex = 48012;

	class UIRABDepositoryBangbooRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FIPKLLAILEM* BuddyData; // 0x28
		::System::Action_1<::System::Object*>* OnClickAction; // 0x30
		::System::Func_2<::System::Object*, ::IBENDELLLAO*>* GetNotificationNodeFunc; // 0x38
		::System::Int32 PoolIdIfFromPool; // 0x40
		::System::Boolean ShowStar; // 0x44
		::System::Boolean ShowInfo; // 0x45
		::System::Boolean ShowFinished; // 0x46
		::System::Byte _padding0[0x1];
		::System::Int32 RightNum; // 0x48
		::System::Int32 LeftNum; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
