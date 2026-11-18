#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERRUNTIMEMUTATIONSERVICE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x12C37E90)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERRUNTIMEMUTATIONSERVICE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x12C37EC0)
#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERRUNTIMEMUTATIONSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C37EB0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewAdapterRuntimeMutationService_TypeDefinitionIndex = 91870;

	class LegacyScrollViewAdapterRuntimeMutationService : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* _adapter; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::LegacyScrollViewAdapter* adapter)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::LegacyScrollViewAdapter*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERRUNTIMEMUTATIONSERVICE__CTOR_OFFSET))(this, adapter);
		}

		::MonoUITableScrollV2* get_Owner()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERRUNTIMEMUTATIONSERVICE_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWADAPTERRUNTIMEMUTATIONSERVICE_SET_ENABLED_OFFSET))(this, value);
		}
	};
}
