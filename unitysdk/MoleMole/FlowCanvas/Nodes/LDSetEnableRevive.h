#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1356D910)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1356D960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetEnableRevive_TypeDefinitionIndex = 41311;

	class LDSetEnableRevive
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETENABLEREVIVE_INVOKE_OFFSET))(this, value);
		}
	};
}
