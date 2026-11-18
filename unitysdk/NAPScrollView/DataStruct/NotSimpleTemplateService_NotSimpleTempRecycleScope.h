#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class NotSimpleTemplateService; }

#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_NOTSIMPLETEMPRECYCLESCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12885490)
#define NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_NOTSIMPLETEMPRECYCLESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x12885480)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int NotSimpleTemplateService_NotSimpleTempRecycleScope_TypeDefinitionIndex = 39205;

	class NotSimpleTemplateService_NotSimpleTempRecycleScope : public ::System::Object
	{
	public:
		::NAPScrollView::DataStruct::NotSimpleTemplateService* _service; // 0x10

		::System::Void _ctor(::NAPScrollView::DataStruct::NotSimpleTemplateService* service)
		{
			return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::NotSimpleTemplateService*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_NOTSIMPLETEMPRECYCLESCOPE__CTOR_OFFSET))(this, service);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_NOTSIMPLETEMPLATESERVICE_NOTSIMPLETEMPRECYCLESCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
