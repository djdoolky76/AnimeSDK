#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x10407AC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x10407BF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetCurrentStageName_TypeDefinitionIndex = 61460;

	class LDGetCurrentStageName
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME_INVOKE_OFFSET))(this);
		}
	};
}
