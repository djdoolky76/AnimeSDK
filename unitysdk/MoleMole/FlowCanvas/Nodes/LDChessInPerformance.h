#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class LOHPBEPDLOG;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_DOCHESSBOARDPERFORM_OFFSET UNITYSDK_OFFSET(0x1B4AE230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_MUTEINPUT_OFFSET UNITYSDK_OFFSET(0x1B4AE8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4AE510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEFINISH_OFFSET UNITYSDK_OFFSET(0x1B4AE590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_PROCESSUIFADEIN_OFFSET UNITYSDK_OFFSET(0x1B4AE550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B4ADD90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_SETUPUI_OFFSET UNITYSDK_OFFSET(0x1B4AE630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_START_OFFSET UNITYSDK_OFFSET(0x1B4ADF10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4AEF80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AEF40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__DOCHESSBOARDPERFORM_B__12_0_OFFSET UNITYSDK_OFFSET(0x1B4AEFF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__REGISTERPORTS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B4AEFC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDChessInPerformance_TypeDefinitionIndex = 65507;

	class LDChessInPerformance : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::String** StaticGet_setupTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LDChessInPerformance_TypeDefinitionIndex)->GetStaticField(0x48720);
		}
		::FlowCanvas::ValueInput_1<::System::String*>* cutSceneIdInput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* cutScenePointsInput; // 0xB0
		::FlowCanvas::FlowOutput* noChessBoardOutput; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* isGroupDataInput; // 0xC8
		::LOHPBEPDLOG* cachedShotTask; // 0xD0
		::FlowCanvas::FlowOutput* successOutput; // 0xD8
		::FlowCanvas::FlowInput* input; // 0xE0
		::System::Boolean muteInputState; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__CCTOR_OFFSET))();
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_START_OFFSET))(this, f);
		}

		::System::Boolean DoChessBoardPerform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_DOCHESSBOARDPERFORM_OFFSET))(this);
		}

		::System::Void OnCutSceneDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEDESTROY_OFFSET))(this);
		}

		::System::Void ProcessUIFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_PROCESSUIFADEIN_OFFSET))(this);
		}

		::System::Void OnCutSceneFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_ONCUTSCENEFINISH_OFFSET))(this);
		}

		::System::Void SetUpUI(::System::Boolean showStatus, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_SETUPUI_OFFSET))(this, showStatus, ignoreAnimation);
		}

		::System::Void MuteInput(::System::Boolean status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE_MUTEINPUT_OFFSET))(this, status);
		}

		::System::Void _RegisterPorts_b__10_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__REGISTERPORTS_B__10_0_OFFSET))(this, f);
		}

		::System::Void _DoChessBoardPerform_b__12_0(::LOHPBEPDLOG* task)
		{
			return ((::System::Void(*)(::PVOID, ::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHESSINPERFORMANCE__DOCHESSBOARDPERFORM_B__12_0_OFFSET))(this, task);
		}
	};
}
