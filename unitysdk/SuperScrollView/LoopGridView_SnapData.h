#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xF4BB860)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xF4C91E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView_SnapData_TypeDefinitionIndex = 48684;

	class LoopGridView_SnapData : public ::System::Object
	{
	public:
		::System::Single mTargetSnapVal; // 0x10
		::System::Boolean mIsForceSnapTo; // 0x14
		::System::Byte _padding0[0x3];
		::SuperScrollView::SnapStatus mSnapStatus; // 0x18
		::System::Single mCurSnapVal; // 0x1C
		::SuperScrollView::RowColumnPair mSnapTarget; // 0x20
		::UnityEngine::Vector2 mSnapNeedMoveDir; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CLEAR_OFFSET))(this);
		}

	};
}
