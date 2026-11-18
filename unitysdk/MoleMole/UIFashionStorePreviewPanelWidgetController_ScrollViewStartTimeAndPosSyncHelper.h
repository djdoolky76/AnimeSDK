#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NAPScrollView/DataStruct/MoveContext.h"
#include "unitysdk/System/Nullable_1.h"

class GPOCDKHHGFG;
class KOGPMKOGCLC;
class MonoUITableScrollV2;
class ODNBJIEICJH;
class PONBOHIGCJP_CNBLLJPHHGB;
namespace System { template <typename T> class Func_1; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_CALSCROLLVIEWSTARTTIME_OFFSET UNITYSDK_OFFSET(0x18088780)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x18087E00)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_ONMUSICTRACKMOVE_OFFSET UNITYSDK_OFFSET(0x18089010)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_SCROLLVIEWSTARTTIMETOSCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x18088540)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATESCROLLVIEWSTARTTIME_OFFSET UNITYSDK_OFFSET(0x180883E0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18088380)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x18087C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_ScrollViewStartTimeAndPosSyncHelper_TypeDefinitionIndex = 73741;

	class UIFashionStorePreviewPanelWidgetController_ScrollViewStartTimeAndPosSyncHelper : public ::System::Object
	{
	public:
		::PONBOHIGCJP_CNBLLJPHHGB* _fashionStoreData; // 0x10
		::LJHFMILANJA_1<::System::Single>* _scrollViewStartTime; // 0x18
		::ODNBJIEICJH* _propertySyncHelper; // 0x20
		::IHECGHKOIPM_1<::System::Single>* _sizePerItem; // 0x28
		::System::Func_1<::MonoUITableScrollV2*>* _scrollViewGetter; // 0x30
		::GPOCDKHHGFG* _propertyAllocateHelper; // 0x38
		::IHECGHKOIPM_1<::System::Single>* _timePerItem; // 0x40
		::System::Boolean _scrollViewStartTimeDirty; // 0x48

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::PONBOHIGCJP_CNBLLJPHHGB* fashionStoreData, ::IHECGHKOIPM_1<::System::Single>* sizePerItem, ::IHECGHKOIPM_1<::System::Single>* timePerItem, ::LJHFMILANJA_1<::System::Single>* scrollViewStartTime, ::System::Func_1<::MonoUITableScrollV2*>* scrollViewGetter)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_CNBLLJPHHGB*, ::IHECGHKOIPM_1<::System::Single>*, ::IHECGHKOIPM_1<::System::Single>*, ::LJHFMILANJA_1<::System::Single>*, ::System::Func_1<::MonoUITableScrollV2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_INIT_OFFSET))(this, fashionStoreData, sizePerItem, timePerItem, scrollViewStartTime, scrollViewGetter);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> ScrollViewStartTimeToScrollDelta(::System::Single newStartTime)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_SCROLLVIEWSTARTTIMETOSCROLLDELTA_OFFSET))(this, newStartTime);
		}

		::System::Nullable_1<::System::Single> CalScrollViewStartTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_CALSCROLLVIEWSTARTTIME_OFFSET))(this);
		}

		::System::Void OnMusicTrackMove(::NAPScrollView::DataStruct::MoveContext moveContext, ::System::Single currentPosition)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_ONMUSICTRACKMOVE_OFFSET))(this, moveContext, currentPosition);
		}

		::System::Boolean UpdateScrollViewStartTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATESCROLLVIEWSTARTTIME_OFFSET))(this);
		}
	};
}
