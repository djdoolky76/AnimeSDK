#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAFHGMKOGNG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_DragCallbackOld; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_TwoPointDragCallback; }

#define MOLEMOLE_UIMAINCITYCAMERACONTROLCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D06A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraControlContext_TypeDefinitionIndex = 84965;

	class UIMainCityCameraControlContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Events::UnityAction* OnResetBtnCallback; // 0x28
		::UnityEngine::Events::UnityAction* OnSkillBtnCallback; // 0x30
		::UnityEngine::Events::UnityAction* OnBottomAddBtnCallback; // 0x38
		::UnityEngine::UI::Extension::UIImgEventTrigger_DragCallbackOld* dragCallback; // 0x40
		::UnityEngine::Events::UnityAction* OnSnapBtnCallback; // 0x48
		::UnityEngine::UI::Extension::UIImgEventTrigger_TwoPointDragCallback* dragTwoPointCallback; // 0x50
		::UnityEngine::Events::UnityAction* OnSwitchBtnCallback; // 0x58
		::UnityEngine::Events::UnityAction* OnHideBtnCallback; // 0x60
		::UnityEngine::Events::UnityAction* OnFullScreenBtnCallback; // 0x68
		::UnityEngine::Events::UnityAction* OnCloseBtnCallback; // 0x70
		::UnityEngine::Events::UnityAction* OnBottomReduceCallback; // 0x78
		::System::Func_1<::System::Boolean>* IsEnableSwitchBtnFunc; // 0x80
		::UnityEngine::Events::UnityAction_1<::System::Single>* OnSliderChangeCallback; // 0x88
		::System::Nullable_1<::System::Int32> InitShowPhotoFrameID; // 0x90
		::System::Nullable_1<::System::Boolean> IsLoadLastVolume; // 0x98
		::System::Nullable_1<::System::Boolean> IsLoadLastFrame; // 0x9A
		::System::Nullable_1<::System::Boolean> IsLoadLastSticker; // 0x9C
		::CAFHGMKOGNG SourceType; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERACONTROLCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
