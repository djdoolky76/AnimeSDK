#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class TeamGroupDataItem; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4AF630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AF7C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateTeamNode_TypeDefinitionIndex = 66918;

	class LDCreateTeamNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::TeamGroupDataItem* teamGroupDataItem, ::System::String* bornPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETEAMNODE_INVOKE_OFFSET))(this, teamGroupDataItem, bornPos);
		}
	};
}
