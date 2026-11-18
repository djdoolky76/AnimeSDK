#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12B30DE0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE_START_OFFSET UNITYSDK_OFFSET(0x12B30ED0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B310A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x12B310E0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcTakeDamage_TypeDefinitionIndex = 82109;

	class HackerGameNpcTakeDamage : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::HackerGameDamageData>* damageData; // 0xA8
		::FlowCanvas::FlowOutput* output; // 0xB0
		::FlowCanvas::FlowInput* start; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMENPCTAKEDAMAGE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}
	};
}
