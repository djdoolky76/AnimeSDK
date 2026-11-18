#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NAPScrollView::DataStruct { class IScrollViewEdgeObject; }
namespace System { class Action; }

#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F90030)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_ENDEDGE_OFFSET UNITYSDK_OFFSET(0x18F8FFC0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_ENDSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x18F8FFE0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_HASEDGEOBJECT_OFFSET UNITYSDK_OFFSET(0x18F8FFA0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_STARTEDGE_OFFSET UNITYSDK_OFFSET(0x18F8FFB0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_STARTSIZEATAXIS_OFFSET UNITYSDK_OFFSET(0x18F8FFD0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_SETENDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x18F900C0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_SETSTARTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x18F90070)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_TICKVISIBILITY_OFFSET UNITYSDK_OFFSET(0x18F8FFF0)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F90120)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F90110)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int EmptyScrollViewEdgeAreaService_TypeDefinitionIndex = 50942;

	class EmptyScrollViewEdgeAreaService : public ::System::Object
	{
	public:
		static ::NAPScrollView::DataStruct::EmptyScrollViewEdgeAreaService** StaticGet_Instance()
		{
			return (::NAPScrollView::DataStruct::EmptyScrollViewEdgeAreaService**)Il2CppClass::FromTypeDefinitionIndex(EmptyScrollViewEdgeAreaService_TypeDefinitionIndex)->GetStaticField(0x48EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasEdgeObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_HASEDGEOBJECT_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeObject* get_StartEdge()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_STARTEDGE_OFFSET))(this);
		}

		::NAPScrollView::DataStruct::IScrollViewEdgeObject* get_EndEdge()
		{
			return ((::NAPScrollView::DataStruct::IScrollViewEdgeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_ENDEDGE_OFFSET))(this);
		}

		::System::Single get_StartSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_STARTSIZEATAXIS_OFFSET))(this);
		}

		::System::Single get_EndSizeAtAxis()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_GET_ENDSIZEATAXIS_OFFSET))(this);
		}

		::System::Void TickVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_TICKVISIBILITY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_CLEAR_OFFSET))(this);
		}

		::System::Void SetStartCallbacks(::System::Action* onAppear, ::System::Action* onDisappear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_SETSTARTCALLBACKS_OFFSET))(this, onAppear, onDisappear);
		}

		::System::Void SetEndCallbacks(::System::Action* onAppear, ::System::Action* onDisappear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYSCROLLVIEWEDGEAREASERVICE_SETENDCALLBACKS_OFFSET))(this, onAppear, onDisappear);
		}
	};
}
