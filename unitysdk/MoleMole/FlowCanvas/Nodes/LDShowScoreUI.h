#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/JAPOBHAHDFP.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETFINALTEXTWITHCACHE_OFFSET UNITYSDK_OFFSET(0x146623F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONCLOSEPARAM_OFFSET UNITYSDK_OFFSET(0x14661F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONGRAPHSTOPEDPARAM_OFFSET UNITYSDK_OFFSET(0x14661A50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONRESTARTPARAM_OFFSET UNITYSDK_OFFSET(0x14662120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONSTARTPARAM_OFFSET UNITYSDK_OFFSET(0x14661C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x14661750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x14661450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONRESTART_OFFSET UNITYSDK_OFFSET(0x146618D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONSTART_OFFSET UNITYSDK_OFFSET(0x146615D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14661100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__CTOR_OFFSET UNITYSDK_OFFSET(0x14662C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x14662D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x14662D90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_2_OFFSET UNITYSDK_OFFSET(0x14662DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x14662DB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowScoreUI_TypeDefinitionIndex = 89917;

	class LDShowScoreUI : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* cachedFinalText; // 0xA8
		::System::String* cachedKey; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Boolean>* ShowWhenMidText; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FairyTextUpdateType>* UpdateType; // 0xC0
		::Il2CppArray<::FlowCanvas::ValueInput_1<::System::String*>*>* paramInputs; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* paramList; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::BubbleType>* bubbleType; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* iconTextureKey; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* textMapKey; // 0xF0
		::System::Collections::Generic::List_1<::System::String*>* cachedParam; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONSTART_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONCLOSE_OFFSET))(this);
		}

		::System::Void OnRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_ONRESTART_OFFSET))(this);
		}

		::System::Void GetOnGraphStopedParam(::JAPOBHAHDFP& arg)
		{
			return ((::System::Void(*)(::PVOID, ::JAPOBHAHDFP&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONGRAPHSTOPEDPARAM_OFFSET))(this, arg);
		}

		::System::Void GetOnStartParam(::JAPOBHAHDFP& arg)
		{
			return ((::System::Void(*)(::PVOID, ::JAPOBHAHDFP&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONSTARTPARAM_OFFSET))(this, arg);
		}

		::System::Void GetOnCloseParam(::JAPOBHAHDFP& arg)
		{
			return ((::System::Void(*)(::PVOID, ::JAPOBHAHDFP&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONCLOSEPARAM_OFFSET))(this, arg);
		}

		::System::Void GetOnRestartParam(::JAPOBHAHDFP& arg)
		{
			return ((::System::Void(*)(::PVOID, ::JAPOBHAHDFP&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETONRESTARTPARAM_OFFSET))(this, arg);
		}

		::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType> GetFinalTextWithCache()
		{
			return ((::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI_GETFINALTEXTWITHCACHE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI__REGISTERPORTS_B__11_2_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCOREUI___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
