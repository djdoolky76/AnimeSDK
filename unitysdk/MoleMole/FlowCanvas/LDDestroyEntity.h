#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }

#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x142F40A0)
#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY_REMOVESUMMONEDENTITY_OFFSET UNITYSDK_OFFSET(0x142F4880)
#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY_START_OFFSET UNITYSDK_OFFSET(0x142F41B0)
#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x142F4C80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDDestroyEntity_TypeDefinitionIndex = 41929;

	class LDDestroyEntity : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* TargetEntity; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Object*>* DestroyEntityTypeInput; // 0xB0
		::FlowCanvas::FlowOutput* Output; // 0xB8
		::FlowCanvas::FlowInput* Input; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY_START_OFFSET))(this, f);
		}

		::System::Void RemoveSummonedEntity(::MoleMole::EntityHandle target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY_REMOVESUMMONEDENTITY_OFFSET))(this, target);
		}
	};
}
