#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHMODIFIERSTACKCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x139D9BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHMODIFIERSTACKCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x139D9C30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishModifierStackCount_TypeDefinitionIndex = 73850;

	class LDGetStylishModifierStackCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHMODIFIERSTACKCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHMODIFIERSTACKCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
