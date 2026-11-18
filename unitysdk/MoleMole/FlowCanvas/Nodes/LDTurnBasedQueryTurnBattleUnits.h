#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryFilter.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryKey.h"

namespace MoleMole { class TurnBattleUnitBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDQUERYTURNBATTLEUNITS_INVOKE_OFFSET UNITYSDK_OFFSET(0x14665530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDQUERYTURNBATTLEUNITS__CTOR_OFFSET UNITYSDK_OFFSET(0x146656C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedQueryTurnBattleUnits_TypeDefinitionIndex = 75183;

	class LDTurnBasedQueryTurnBattleUnits
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDQUERYTURNBATTLEUNITS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Invoke(::MoleMole::TurnBattleUnitQueryKey key, ::MoleMole::TurnBattleUnitQueryFilter filter)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*(*)(::PVOID, ::MoleMole::TurnBattleUnitQueryKey, ::MoleMole::TurnBattleUnitQueryFilter))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDQUERYTURNBATTLEUNITS_INVOKE_OFFSET))(this, key, filter);
		}
	};
}
