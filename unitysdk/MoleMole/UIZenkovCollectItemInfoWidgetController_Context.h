#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCKPJIMOBPH.h"
#include "unitysdk/GDMCCILLGAO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class FMHDMLBDIJC;
class IILMGLCLKKF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVCOLLECTITEMINFOWIDGETCONTROLLER_CONTEXT_GETEFFECTIVEITEMID_OFFSET UNITYSDK_OFFSET(0xEB19DD0)
#define MOLEMOLE_UIZENKOVCOLLECTITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xEB19F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectItemInfoWidgetController_Context_TypeDefinitionIndex = 50340;

	class UIZenkovCollectItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FMHDMLBDIJC* KovBagIndex; // 0x28
		::System::Action* OnClose; // 0x30
		::FMHDMLBDIJC* EquipTargetKovBagIndex; // 0x38
		::UnityEngine::Transform* OverrideTransform; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* MenuBlackList; // 0x48
		::GDMCCILLGAO FadeInFrom; // 0x50
		::System::Boolean ForceShowExplanation; // 0x54
		::System::Boolean PenetrateClose; // 0x55
		::System::Boolean IsInSearchMode; // 0x56
		::System::Boolean ForceShowLevel; // 0x57
		::DCKPJIMOBPH Scenario; // 0x58
		::System::Int32 EquipTargetBagType; // 0x5C
		::UnityEngine::Vector2 WidgetPivot; // 0x60
		::System::Int32 ItemId; // 0x68
		::System::Int32 SearchContainerBagId; // 0x6C
		::System::Int32 AvatarId; // 0x70
		::System::Boolean HideOperateButtons; // 0x74
		::System::Boolean OverrideShowGetMethodButton; // 0x75

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetEffectiveItemId(::IILMGLCLKKF* kovData)
		{
			return ((::System::Int32(*)(::PVOID, ::IILMGLCLKKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTITEMINFOWIDGETCONTROLLER_CONTEXT_GETEFFECTIVEITEMID_OFFSET))(this, kovData);
		}
	};
}
