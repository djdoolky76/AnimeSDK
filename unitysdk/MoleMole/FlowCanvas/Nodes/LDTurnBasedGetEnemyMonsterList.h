#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A090ED0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A0909D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A090F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A090F70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEnemyMonsterList_TypeDefinitionIndex = 50299;

	class LDTurnBasedGetEnemyMonsterList
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _waveEnemies; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_INVOKE_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
