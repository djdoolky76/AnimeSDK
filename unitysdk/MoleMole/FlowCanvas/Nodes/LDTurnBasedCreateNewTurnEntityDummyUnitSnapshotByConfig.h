#pragma once
#include "unitysdk/unitysdk.h"

class CAKFNAFOPHC;

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1623CAE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1623CB70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityDummyUnitSnapshotByConfig_TypeDefinitionIndex = 89726;

	class LDTurnBasedCreateNewTurnEntityDummyUnitSnapshotByConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET))(this);
		}

		::CAKFNAFOPHC* Invoke(::System::UInt32 entityID, ::System::Int32 configID)
		{
			return ((::CAKFNAFOPHC*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET))(this, entityID, configID);
		}
	};
}
