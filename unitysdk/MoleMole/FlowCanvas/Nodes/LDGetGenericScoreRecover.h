#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x162345A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x16234630)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScoreRecover_TypeDefinitionIndex = 58259;

	class LDGetGenericScoreRecover
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* scoreName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER_INVOKE_OFFSET))(this, scoreName);
		}
	};
}
