#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10407F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x10407FC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScore_TypeDefinitionIndex = 68866;

	class LDGetGenericScore
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* scoreName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE_INVOKE_OFFSET))(this, scoreName);
		}
	};
}
