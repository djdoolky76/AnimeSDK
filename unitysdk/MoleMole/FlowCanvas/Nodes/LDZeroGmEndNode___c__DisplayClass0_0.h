#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/System/Object.h"

class CCLBHPFHKCL;

#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180E51F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x180E5200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDZeroGmEndNode___c__DisplayClass0_0_TypeDefinitionIndex = 46932;

	class LDZeroGmEndNode___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType performType; // 0x10
		::System::Boolean success; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::CCLBHPFHKCL* evt)
		{
			return ((::System::Void(*)(::PVOID, ::CCLBHPFHKCL*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDZEROGMENDNODE___C__DISPLAYCLASS0_0__INVOKE_B__0_OFFSET))(this, evt);
		}
	};
}
