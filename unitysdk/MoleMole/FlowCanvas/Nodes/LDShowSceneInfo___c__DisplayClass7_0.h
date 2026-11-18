#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B6760)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B4B6770)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowSceneInfo___c__DisplayClass7_0_TypeDefinitionIndex = 47026;

	class LDShowSceneInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowOutput* flowOutput; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWSCENEINFO___C__DISPLAYCLASS7_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
