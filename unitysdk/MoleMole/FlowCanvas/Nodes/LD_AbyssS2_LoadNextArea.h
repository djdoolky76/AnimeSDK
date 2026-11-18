#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class ENGKPGFGGLM;
class IFFKIHMPGJK_PGPENLLCLDF;
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A8F31E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A8F2E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8F2FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8F2180)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__ABYSSLOADNEXT_ALLFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8F2BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F33E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F33A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__EXECUTELOADNEXT_OFFSET UNITYSDK_OFFSET(0x1A8F2260)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__HANDLELEVEL_AREAEND_OFFSET UNITYSDK_OFFSET(0x1A8F23E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A8F33F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1A8F28B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A8F3430)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8F3440)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_LoadNextArea_TypeDefinitionIndex = 54005;

	class LD_AbyssS2_LoadNextArea : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::Boolean* StaticGet_s_isReplayMsg()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_LoadNextArea_TypeDefinitionIndex)->GetStaticField(0x10BC0);
		}
		// static const ::System::String* DEFAUL_STAGE_NAME; // 0x0
		// static const ::System::String* Key_ConfirmMap; // 0x0
		// static const ::System::String* Key_After_confirmMap; // 0x0
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::FlowOutput* onNextAreaLoadFinishedFlowOutput; // 0xB0
		::System::Boolean _hasTransitAvatar; // 0xB8
		::System::Boolean DisableGM; // 0xB9
		::System::Boolean _hasExecuted; // 0xBA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _ExecuteLoadNext(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__EXECUTELOADNEXT_OFFSET))(this, flow);
		}

		::System::Void _SendEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__SENDEVENT_OFFSET))(this);
		}

		::System::Void _HandleLevel_AreaEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__HANDLELEVEL_AREAEND_OFFSET))(this);
		}

		::System::Void _AbyssLoadNext_AllFinishedCallback(::IFFKIHMPGJK_PGPENLLCLDF* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::IFFKIHMPGJK_PGPENLLCLDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__ABYSSLOADNEXT_ALLFINISHEDCALLBACK_OFFSET))(this, ctx);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Boolean OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA__REGISTERPORTS_B__5_0_OFFSET))(this, flow);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LOADNEXTAREA___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
