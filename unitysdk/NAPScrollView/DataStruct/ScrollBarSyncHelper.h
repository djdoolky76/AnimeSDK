#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBARSYNCHELPER_COMPUTESCROLLBARVALUEBYCONTENTDELTA_OFFSET UNITYSDK_OFFSET(0x13ECF120)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollBarSyncHelper_TypeDefinitionIndex = 43251;

	class ScrollBarSyncHelper : public ::System::Object
	{
	public:
		static ::System::Single ComputeScrollBarValueByContentDelta(::System::Single totalSizeAtAxis, ::System::Single viewRectSizeAtAxis, ::System::Single currentScrollBarValue, ::System::Single delta, ::System::Boolean IsScrollStartInner, ::System::Boolean IsScrollEndInner)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBARSYNCHELPER_COMPUTESCROLLBARVALUEBYCONTENTDELTA_OFFSET))(totalSizeAtAxis, viewRectSizeAtAxis, currentScrollBarValue, delta, IsScrollStartInner, IsScrollEndInner);
		}
	};
}
