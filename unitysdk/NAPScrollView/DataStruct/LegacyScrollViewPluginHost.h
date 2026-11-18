#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class LegacyScrollViewAdapter; }

#define NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINHOST__CTOR_OFFSET UNITYSDK_OFFSET(0x11579670)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int LegacyScrollViewPluginHost_TypeDefinitionIndex = 39657;

	class LegacyScrollViewPluginHost : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::LegacyScrollViewAdapter* _adapter; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::LegacyScrollViewAdapter* adapter)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::LegacyScrollViewAdapter*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_LEGACYSCROLLVIEWPLUGINHOST__CTOR_OFFSET))(this, adapter);
		}
	};
}
