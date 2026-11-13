#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x17115180)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1712E5D0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 48694;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Int32 mSnapTargetIndex; // 0x10
		::System::Int32 mIsSnapDirect; // 0x14
		::System::Single mTargetSnapVal; // 0x18
		::System::Single mCurSnapVal; // 0x1C
		::System::Int32 mTempTargetIndex; // 0x20
		::System::Single mMoveMaxAbsVec; // 0x24
		::SuperScrollView::SnapStatus mSnapStatus; // 0x28
		::System::Boolean mIsFinishCallbackDone; // 0x2C
		::System::Boolean mIsTempTarget; // 0x2D
		::System::Boolean mIsSnapWithPredict; // 0x2E
		::System::Boolean mIsForceSnapTo; // 0x2F
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET))(this);
		}

	};
}
