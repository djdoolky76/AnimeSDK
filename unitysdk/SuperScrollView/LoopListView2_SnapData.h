#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xF4CC4B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF4E58E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 48694;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Single mTargetSnapVal; // 0x10
		::System::Int32 mSnapTargetIndex; // 0x14
		::System::Single mMoveMaxAbsVec; // 0x18
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x1C
		::System::Single mCurSnapVal; // 0x30
		::System::Int32 mIsSnapDirect; // 0x34
		::SuperScrollView::SnapStatus mSnapStatus; // 0x38
		::System::Boolean mIsTempTarget; // 0x3C
		::System::Boolean mIsForceSnapTo; // 0x3D
		::System::Boolean mIsFinishCallbackDone; // 0x3E
		::System::Boolean mIsSnapWithPredict; // 0x3F
		::System::Int32 mTempTargetIndex; // 0x40
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
