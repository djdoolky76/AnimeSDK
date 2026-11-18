#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"

class MFHGKCPFCNC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_BUILDPARAMFROMAREA_OFFSET UNITYSDK_OFFSET(0x14AE3650)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAAFFIXICONPATHBYAREAID_OFFSET UNITYSDK_OFFSET(0x14AE3FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAICONPATHBYAREAID_OFFSET UNITYSDK_OFFSET(0x14AE3E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE3210)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE4140)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaFocusUISpecialParam_TypeDefinitionIndex = 41050;

	class LD_AbyssS2_GetAreaFocusUISpecialParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam Invoke(::System::Int32 areaSelectIndex)
		{
			return ((::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_INVOKE_OFFSET))(this, areaSelectIndex);
		}

		::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam BuildParamFromArea(::System::Collections::Generic::IList_1<::MFHGKCPFCNC*>* areaList, ::System::Collections::Generic::IList_1<::System::Int32>* routeIndexList)
		{
			return ((::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam(*)(::PVOID, ::System::Collections::Generic::IList_1<::MFHGKCPFCNC*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_BUILDPARAMFROMAREA_OFFSET))(this, areaList, routeIndexList);
		}

		::System::String* GetAreaAffixIconPathByAreaID(::System::Int32 routePointID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAAFFIXICONPATHBYAREAID_OFFSET))(this, routePointID);
		}

		::System::String* GetAreaIconPathByAreaID(::MFHGKCPFCNC* rfMapArea)
		{
			return ((::System::String*(*)(::PVOID, ::MFHGKCPFCNC*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAICONPATHBYAREAID_OFFSET))(this, rfMapArea);
		}
	};
}
