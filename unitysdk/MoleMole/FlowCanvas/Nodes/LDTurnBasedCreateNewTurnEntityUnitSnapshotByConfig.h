#pragma once
#include "unitysdk/unitysdk.h"

class MENMIHAMGKH;
namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4B6A20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B6B90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig_TypeDefinitionIndex = 67013;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET))(this);
		}

		::MENMIHAMGKH* Invoke(::System::UInt32 entityID, ::System::Int32 configID, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>* unlockedSkills)
		{
			return ((::MENMIHAMGKH*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET))(this, entityID, configID, unlockedSkills);
		}
	};
}
