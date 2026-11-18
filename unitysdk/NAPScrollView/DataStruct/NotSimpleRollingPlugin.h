#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/Plugin/TableScrollPluginRollingV2.h"
#include "unitysdk/NAPScrollView/DataStruct/ScrollFloat.h"

namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace NAPScrollView::DataStruct { class NotSimpleScrollViewAdapterServices; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEROLLINGPLUGIN_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0x1287E7D0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEROLLINGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1287E7B0)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEROLLINGPLUGIN___BASE_POSTPROCESSROLLINGTARGET_OFFSET UNITYSDK_OFFSET(0x1287E840)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleRollingPlugin_TypeDefinitionIndex = 85066;

	class NotSimpleRollingPlugin : public ::NAPScrollView::Plugin::TableScrollPluginRollingV2
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* _services; // 0x58

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices* services, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleScrollViewAdapterServices*, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEROLLINGPLUGIN__CTOR_OFFSET))(this, services, provider);
		}

		::NAPScrollView::DataStruct::ScrollFloat PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat target)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEROLLINGPLUGIN_POSTPROCESSROLLINGTARGET_OFFSET))(this, target);
		}

		::NAPScrollView::DataStruct::ScrollFloat __base_PostProcessRollingTarget(::NAPScrollView::DataStruct::ScrollFloat P0)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLEROLLINGPLUGIN___BASE_POSTPROCESSROLLINGTARGET_OFFSET))(this, P0);
		}
	};
}
