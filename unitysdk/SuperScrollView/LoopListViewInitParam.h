#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SuperScrollView { class LoopListViewInitParam; }

#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0x1712EC50)
#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1712ECB0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewInitParam_TypeDefinitionIndex = 48692;

	class LoopListViewInitParam : public ::System::Object
	{
	public:
		::System::Single mSnapFinishThreshold; // 0x10
		::System::Boolean mMovePanelUseViewPortSize; // 0x14
		::System::Boolean mForbidAutoScrollWhenItemSelected; // 0x15
		::System::Byte _padding0[0x2];
		::System::Single mSnapVecThreshold; // 0x18
		::System::Single mItemDefaultWithPaddingSize; // 0x1C
		::System::Single mDistanceForRecycle1; // 0x20
		::System::Single mDistanceForNew1; // 0x24
		::System::Single mDistanceForRecycle0; // 0x28
		::System::Single mSnapFinishCallbackThreshold; // 0x2C
		::System::Single mSmoothDumpRate; // 0x30
		::System::Single mDistanceForNew0; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::LoopListViewInitParam* CopyDefaultInitParam()
		{
			return ((::SuperScrollView::LoopListViewInitParam*(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET))();
		}

	};
}
