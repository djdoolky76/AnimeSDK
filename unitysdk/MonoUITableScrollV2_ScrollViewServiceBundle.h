#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class DataListWrapper; }
namespace NAPScrollView::DataStruct { class ScrollViewEventService; }
namespace NAPScrollView::DataStruct { class ScrollViewInitDataAlignService; }
namespace NAPScrollView::DataStruct { class ScrollViewSoundService; }
namespace NAPScrollView::DataStruct { class SettingService; }

#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_CREATE_OFFSET UNITYSDK_OFFSET(0x113971E0)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0x11397440)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_EVENT_OFFSET UNITYSDK_OFFSET(0x11397310)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_INITDATAALIGN_OFFSET UNITYSDK_OFFSET(0x113973B0)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x113971C0)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_SETTINGSERVICE_OFFSET UNITYSDK_OFFSET(0x11397250)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_SOUNDSERVICE_OFFSET UNITYSDK_OFFSET(0x11397270)
#define MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x113971D0)

inline static constexpr unsigned int MonoUITableScrollV2_ScrollViewServiceBundle_TypeDefinitionIndex = 40098;

class MonoUITableScrollV2_ScrollViewServiceBundle : public ::System::Object
{
public:
	::MonoUITableScrollV2* _owner; // 0x10

	::System::Void _ctor(::MonoUITableScrollV2* owner)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE__CTOR_OFFSET))(this, owner);
	}

	::MonoUITableScrollV2* get_Owner()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_OWNER_OFFSET))(this);
	}

	static ::MonoUITableScrollV2_ScrollViewServiceBundle* Create(::MonoUITableScrollV2* owner)
	{
		return ((::MonoUITableScrollV2_ScrollViewServiceBundle*(*)(::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_CREATE_OFFSET))(owner);
	}

	::NAPScrollView::DataStruct::SettingService* get_SettingService()
	{
		return ((::NAPScrollView::DataStruct::SettingService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_SETTINGSERVICE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollViewSoundService* get_SoundService()
	{
		return ((::NAPScrollView::DataStruct::ScrollViewSoundService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_SOUNDSERVICE_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollViewEventService* get_Event()
	{
		return ((::NAPScrollView::DataStruct::ScrollViewEventService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_EVENT_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::ScrollViewInitDataAlignService* get_InitDataAlign()
	{
		return ((::NAPScrollView::DataStruct::ScrollViewInitDataAlignService*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_INITDATAALIGN_OFFSET))(this);
	}

	::NAPScrollView::DataStruct::DataListWrapper* get_DataList()
	{
		return ((::NAPScrollView::DataStruct::DataListWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLVIEWSERVICEBUNDLE_GET_DATALIST_OFFSET))(this);
	}
};
