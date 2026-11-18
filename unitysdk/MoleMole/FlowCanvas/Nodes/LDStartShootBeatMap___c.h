#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8F0BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F0BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__REGISTERPORTS_G__STOP_5_0_OFFSET UNITYSDK_OFFSET(0x1A8F0BF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStartShootBeatMap___c_TypeDefinitionIndex = 87690;

	class LDStartShootBeatMap___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDStartShootBeatMap___c_TypeDefinitionIndex)->GetStaticField(0x3BE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_g__Stop_5_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARTSHOOTBEATMAP___C__REGISTERPORTS_G__STOP_5_0_OFFSET))(this, flow);
		}
	};
}
