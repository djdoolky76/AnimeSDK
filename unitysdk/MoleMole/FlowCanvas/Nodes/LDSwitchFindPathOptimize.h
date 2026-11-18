#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHFINDPATHOPTIMIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C88D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHFINDPATHOPTIMIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C89F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchFindPathOptimize_TypeDefinitionIndex = 83334;

	class LDSwitchFindPathOptimize
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHFINDPATHOPTIMIZE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle entity, ::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHFINDPATHOPTIMIZE_INVOKE_OFFSET))(this, entity, b);
		}
	};
}
