#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCKPJIMOBPH.h"
#include "unitysdk/GDMCCILLGAO.h"
#include "unitysdk/KODBFFILGCA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class FMHDMLBDIJC;
class IILMGLCLKKF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT_GETEFFECTIVEITEMID_OFFSET UNITYSDK_OFFSET(0x12C0A280)
#define MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0A3B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemInfoWidgetController_Context_TypeDefinitionIndex = 76154;

	class UIZenkovItemInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::FMHDMLBDIJC* EquipTargetKovBagIndex; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* MenuBlackList; // 0x38
		::FMHDMLBDIJC* KovBagIndex; // 0x40
		::UnityEngine::Transform* OverrideTransform; // 0x48
		::System::Boolean ForceShowLevel; // 0x50
		::System::Boolean HideOperateButtons; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 SearchContainerBagId; // 0x54
		::System::Int32 ItemId; // 0x58
		::GDMCCILLGAO FadeInFrom; // 0x5C
		::KODBFFILGCA ZenkovPageType; // 0x60
		::System::Int32 EquipTargetBagType; // 0x64
		::System::Boolean PenetrateClose; // 0x68
		::System::Boolean OverrideShowGetMethodButton; // 0x69
		::System::Boolean ForceShowExplanation; // 0x6A
		::System::Boolean IsInSearchMode; // 0x6B
		::DCKPJIMOBPH Scenario; // 0x6C
		::UnityEngine::Vector2 WidgetPivot; // 0x70
		::System::Int32 AvatarId; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetEffectiveItemId(::IILMGLCLKKF* kovData)
		{
			return ((::System::Int32(*)(::PVOID, ::IILMGLCLKKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMINFOWIDGETCONTROLLER_CONTEXT_GETEFFECTIVEITEMID_OFFSET))(this, kovData);
		}
	};
}
