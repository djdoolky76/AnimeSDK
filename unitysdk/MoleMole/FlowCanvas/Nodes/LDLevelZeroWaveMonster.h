#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas { class LevelZeroMonsterCreateData; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateData; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x10D11090)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_BEGIN_OFFSET UNITYSDK_OFFSET(0x10D0FCA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x10D10E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_EXPENDCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x10D0FF40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_FULLCREATEDLIST_OFFSET UNITYSDK_OFFSET(0x10D10A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x10D10E30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x10D10D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x10D0FC50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCURRENTTAG_OFFSET UNITYSDK_OFFSET(0x10D0FE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETMONSTERTYPE_OFFSET UNITYSDK_OFFSET(0x10D11590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D0F820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D116A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x10D116B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x10D116C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__REGISTERPORTS_B__6_2_OFFSET UNITYSDK_OFFSET(0x10D116D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x10D116E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x10D117A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x10D117D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_GETCREATELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x10D117E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_GETCREATELISTDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x10D117F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_GETCURRENTMONSTERIDTYPE_OFFSET UNITYSDK_OFFSET(0x10D11800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D11810)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroWaveMonster_TypeDefinitionIndex = 51621;

	class LDLevelZeroWaveMonster : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroMonsterCreateData*>*>* levelZeroCreateInput; // 0x1B0
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateData*>* extendCreateData; // 0x1B8
		::FlowCanvas::ValueInput_1<::System::Object*>* typeInput; // 0x1C0
		::FlowCanvas::ValueInput_1<::System::Int32>* tagInput; // 0x1C8
		::MoleMole::FlowCanvas::Nodes::MonsterIDType _monsterIDType; // 0x1D0
		::System::Boolean inited; // 0x1D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_REGISTERPORTS_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_BEGIN_OFFSET))(this, f);
		}

		::System::Void ExpendCreatedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_EXPENDCREATEDLIST_OFFSET))(this);
		}

		::System::Void FullCreatedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_FULLCREATEDLIST_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* GetCreateListDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCREATELISTDATABYINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_DOPRELOAD_OFFSET))(this);
		}

		::System::Void ActivePreloadMonster(::MoleMole::Battle::Entity* entity, ::System::Int32 createIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_ACTIVEPRELOADMONSTER_OFFSET))(this, entity, createIndex);
		}

		::System::Int32 GetCurrentTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETCURRENTTAG_OFFSET))(this);
		}

		::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum GetMonsterType()
		{
			return ((::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER_GETMONSTERTYPE_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__6_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__6_1()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__REGISTERPORTS_B__6_1_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__6_2()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER__REGISTERPORTS_B__6_2_OFFSET))(this);
		}

		::System::Void __base_ActivePreloadMonster(::MoleMole::Battle::Entity* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_ACTIVEPRELOADMONSTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Begin(::FlowCanvas::Flow P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_BEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_DOPRELOAD_OFFSET))(this);
		}

		::System::Int32 __base_GetCreateListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_GETCREATELISTCOUNT_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* __base_GetCreateListDataByIndex(::System::Int32 P0)
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_GETCREATELISTDATABYINDEX_OFFSET))(this, P0);
		}

		::MoleMole::FlowCanvas::Nodes::MonsterIDType __base_GetCurrentMonsterIdType()
		{
			return ((::MoleMole::FlowCanvas::Nodes::MonsterIDType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_GETCURRENTMONSTERIDTYPE_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROWAVEMONSTER___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
