#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class IPluginFeatureStateOwner; }
namespace NAPScrollView::DataStruct { class IScrollViewLogicService; }
namespace System { template <typename T> class Func_1; }

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewPluginRuntimeService_1_TypeDefinitionIndex = 80752;

	template <typename T>
	class ScrollViewPluginRuntimeService_1 : public ::System::Object
	{
	public:
		T _services; // 0x0
		::System::Func_1<::MonoUITableScrollV2*>* _ownerGetter; // 0x0
		::System::Func_1<::NAPScrollView::DataStruct::IScrollViewLogicService*>* _logicGetter; // 0x0
		::NAPScrollView::DataStruct::IPluginFeatureStateOwner* _featureOwner; // 0x0
		::System::Int32 _PendingSelectAlignDataIndex_k__BackingField; // 0x0
		::System::Boolean _EnableNotInterruptPreScrollIfCurNoNeedScroll_TempFor1_0_k__BackingField; // 0x0
	};
}
