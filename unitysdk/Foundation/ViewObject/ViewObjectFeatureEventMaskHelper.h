#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class IViewObjectComponent; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTFEATUREEVENTMASKHELPER_GETEVENTMASK_OFFSET UNITYSDK_OFFSET(0x165CB2F0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTFEATUREEVENTMASKHELPER_HASEVENT_1_OFFSET UNITYSDK_OFFSET(0x165CB320)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTFEATUREEVENTMASKHELPER_HASEVENT_OFFSET UNITYSDK_OFFSET(0x165CB300)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectFeatureEventMaskHelper_TypeDefinitionIndex = 89483;

	class ViewObjectFeatureEventMaskHelper : public ::System::Object
	{
	public:
		static ::System::Int32 GetEventMask(::Foundation::ViewObject::EViewObjectComponentFeatureEvent evt)
		{
			return ((::System::Int32(*)(::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTFEATUREEVENTMASKHELPER_GETEVENTMASK_OFFSET))(evt);
		}

		static ::System::Boolean HasEvent(::System::Int32 mask, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent evt)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTFEATUREEVENTMASKHELPER_HASEVENT_OFFSET))(mask, evt);
		}

		static ::System::Boolean HasEvent_1(::Foundation::ViewObject::IViewObjectComponent* viewObjectComponent, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent evt)
		{
			return ((::System::Boolean(*)(::Foundation::ViewObject::IViewObjectComponent*, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTFEATUREEVENTMASKHELPER_HASEVENT_1_OFFSET))(viewObjectComponent, evt);
		}
	};
}
