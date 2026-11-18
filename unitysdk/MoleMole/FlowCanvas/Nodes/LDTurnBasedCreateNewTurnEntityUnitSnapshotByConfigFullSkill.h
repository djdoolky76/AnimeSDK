#pragma once
#include "unitysdk/unitysdk.h"

class MENMIHAMGKH;

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7CA6C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfigFullSkill_TypeDefinitionIndex = 74579;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfigFullSkill
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL__CTOR_OFFSET))(this);
		}

		::MENMIHAMGKH* Invoke(::System::UInt32 entityID, ::System::Int32 configID)
		{
			return ((::MENMIHAMGKH*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIGFULLSKILL_INVOKE_OFFSET))(this, entityID, configID);
		}
	};
}
