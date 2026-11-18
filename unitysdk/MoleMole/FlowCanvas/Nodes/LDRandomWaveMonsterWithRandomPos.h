#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelZeroRandomPosWaveMonster.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS_FULLCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x124538F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12453840)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x12453D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x12453EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS___BASE_FULLCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x12453EF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12453F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x12453F10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomWaveMonsterWithRandomPos_TypeDefinitionIndex = 80518;

	class LDRandomWaveMonsterWithRandomPos : public ::MoleMole::FlowCanvas::Nodes::LDLevelZeroRandomPosWaveMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* complexRateInput; // 0x220
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Int32>*>* weaknessAttrList; // 0x228

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void FullCreatedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS_FULLCREATEDLIST_OFFSET))(this);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::System::Void __base_FullCreatedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS___BASE_FULLCREATEDLIST_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS___BASE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMWAVEMONSTERWITHRANDOMPOS___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}
	};
}
