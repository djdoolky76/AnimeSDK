#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3B4B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B5A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomMonsterPatternByTag_TypeDefinitionIndex = 60498;

	class LDRandomMonsterPatternByTag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::String* filterTag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG_INVOKE_OFFSET))(this, filterTag);
		}
	};
}
