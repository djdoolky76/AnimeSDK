#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x130C7070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD__CTOR_OFFSET UNITYSDK_OFFSET(0x130C7100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDForceRemoveCard_TypeDefinitionIndex = 47926;

	class LDForceRemoveCard
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Int32 cardId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDFORCEREMOVECARD_INVOKE_OFFSET))(this, cardId);
		}
	};
}
