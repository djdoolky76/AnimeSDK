#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A0843A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A084100)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_RESUME_OFFSET UNITYSDK_OFFSET(0x1A084330)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_START_OFFSET UNITYSDK_OFFSET(0x1A084410)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A084480)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A084530)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A084570)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x1A084610)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x1A0846A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_3_OFFSET UNITYSDK_OFFSET(0x1A084730)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_4_OFFSET UNITYSDK_OFFSET(0x1A084740)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_5_OFFSET UNITYSDK_OFFSET(0x1A084760)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameTimer_TypeDefinitionIndex = 90484;

	class HackerGameTimer : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Single>* _deltaTimeFloat; // 0xA8
		::FlowCanvas::FlowInput* _pause; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::Int32>* _totalTimeOutputInt32; // 0xB8
		::FlowCanvas::ValueOutput_1<::System::Single>* _totalTimeOutput; // 0xC0
		::FlowCanvas::FlowOutput* _advance; // 0xC8
		::FlowCanvas::FlowInput* _start; // 0xD0
		::FlowCanvas::FlowInput* _resume; // 0xD8
		::System::Boolean _isPaused; // 0xE0
		::System::Byte _padding0[0x3];
		::System::Single _totalTime; // 0xE4
		::System::Single _deltaTime; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Resume(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_RESUME_OFFSET))(this, flow);
		}

		::System::Void Pause(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_PAUSE_OFFSET))(this, flow);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_START_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__0_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_3_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0_4()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_4_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__0_5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_5_OFFSET))(this);
		}
	};
}
