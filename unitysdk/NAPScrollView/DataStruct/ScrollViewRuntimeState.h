#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MonoUITableScrollV2_InitDataState.h"
#include "unitysdk/MonoUITableScrollV2_SimulationDragState.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollToTargetContext_AlignParamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;
namespace UnityEngine { class RectTransform; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWRUNTIMESTATE_CLEARPENDINGSCROLLANDSELECT_OFFSET UNITYSDK_OFFSET(0x12C4DA10)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWRUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4DA90)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewRuntimeState_TypeDefinitionIndex = 47682;

	class ScrollViewRuntimeState : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* CurrentSelectAlignTargetRectTransform; // 0x10
		::MonoUITableScrollV2_ScrollParams_AlignParam* ScrollToTargetOverrideAlignParam; // 0x18
		::UnityEngine::RectTransform* ScrollToTargetTransform; // 0x20
		::System::Single AlignLerp; // 0x28
		::System::Single LastScrollBarValue; // 0x2C
		::System::Int32 CurrentSelectAlignTargetDataIndex; // 0x30
		::System::Single LerpTargetScroll; // 0x34
		::System::Boolean NextTimeRefreshGameObjectNeedPlayPageShowAnim; // 0x38
		::System::Boolean IsLogged; // 0x39
		::System::Nullable_1<::System::Boolean> ScrollToTargetToEnd; // 0x3A
		::System::Boolean InsideLateUpdate; // 0x3C
		::System::Byte _padding0[0x3];
		::Foundation::Coroutine::CoroutineHandle OnEnableHandle; // 0x40
		::System::Boolean MScrollInited; // 0x44
		::System::Boolean IsScrollPointerDown; // 0x45
		::System::Boolean PendingSelectIgnoreClickCallback; // 0x46
		::System::Byte _padding1[0x1];
		::System::Single OriginalScrollSize; // 0x48
		::System::Single LastSize; // 0x4C
		::System::Int32 EmptyPaddingDataCount; // 0x50
		::System::Int32 ScrollToTargetDataIndex; // 0x54
		::System::Boolean PendingSelect; // 0x58
		::System::Boolean MIsStart; // 0x59
		::System::Boolean PendingSelectHasAnim; // 0x5A
		::System::Boolean TriggerSimulationDragThisFrame; // 0x5B
		::System::Boolean MoveDirectly; // 0x5C
		::System::Boolean StartAxisIsVertial; // 0x5D
		::System::Boolean HasInitCellSize; // 0x5E
		::System::Boolean PendingSelectIgnoreSelectCallback; // 0x5F
		::System::Int32 PendingSelectIndex; // 0x60
		::System::Single CurrentSelectAlignTime; // 0x64
		::MonoUITableScrollV2_SimulationDragState SimulationDragState; // 0x68
		::NAPScrollView::DataStruct::ScrollToTargetContext_AlignParamType ScrollToTargetAlignParamType; // 0x6C
		::MonoUITableScrollV2_InitDataState InitDataState; // 0x70
		::System::Int32 SelectAlignDataIndex; // 0x74
		::System::Single LerpCurrentScroll; // 0x78
		::System::Int32 NonEmptyDataCount; // 0x7C
		::System::Nullable_1<::System::Int32> ScrollToTargetFromDataIndex; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWRUNTIMESTATE__CTOR_OFFSET))(this);
		}

		::System::Void ClearPendingScrollAndSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWRUNTIMESTATE_CLEARPENDINGSCROLLANDSELECT_OFFSET))(this);
		}
	};
}
