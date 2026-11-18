#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KGKLCBGGPDN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UISUMMERTIDETREASUREAVATARDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9C560)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureAvatarDialogPopWindowController_Context_TypeDefinitionIndex = 41006;

	class UISummerTideTreasureAvatarDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckRoleUnlock; // 0x28
		::System::Action_2<::System::Object*, ::System::Int32>* OnRoleConfirmed; // 0x30
		::System::Func_2<::System::Int32, ::System::Boolean>* CheckRoleRecommend; // 0x38
		::System::Func_1<::System::Collections::Generic::IReadOnlyList_1<::KGKLCBGGPDN*>*>* GetAllTemplates; // 0x40
		::System::Int32 StageId; // 0x48
		::System::Int32 CurrentRoleId; // 0x4C
		::System::Int32 UnlockTips; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREAVATARDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
