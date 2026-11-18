#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollViewLifecycleServiceBase.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class SimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE565210)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE_ONEXTRALATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE5653E0)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE_ONEXTRAUPDATE_OFFSET UNITYSDK_OFFSET(0xE565230)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xE565200)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE___BASE_ONEXTRALATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE565690)
#define NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE___BASE_ONEXTRAUPDATE_OFFSET UNITYSDK_OFFSET(0xE565720)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SimpleLifecycleService_TypeDefinitionIndex = 67805;

	class SimpleLifecycleService : public ::NAPScrollView::DataStruct::ScrollViewLifecycleServiceBase
	{
	public:
		::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* _services; // 0x18

		::System::Void _ctor(::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices* services)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::SimpleScrollViewAdapterServices*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE__CTOR_OFFSET))(this, services);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE_GET_OWNER_OFFSET))(this);
		}

		::System::Void OnExtraUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE_ONEXTRAUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnExtraLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE_ONEXTRALATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnExtraLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE___BASE_ONEXTRALATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnExtraUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SIMPLELIFECYCLESERVICE___BASE_ONEXTRAUPDATE_OFFSET))(this, P0);
		}
	};
}
