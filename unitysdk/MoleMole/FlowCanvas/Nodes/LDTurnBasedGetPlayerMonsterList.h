#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasyMonsterInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETPLAYERMONSTERLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x104182F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETPLAYERMONSTERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x104184C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetPlayerMonsterList_TypeDefinitionIndex = 60979;

	class LDTurnBasedGetPlayerMonsterList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETPLAYERMONSTERLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasyMonsterInfo*>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterFantasyMonsterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETPLAYERMONSTERLIST_INVOKE_OFFSET))(this);
		}
	};
}
