#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFHOCGNJKEF;
namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143085A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143085E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x143085F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c_TypeDefinitionIndex = 67014;

	class LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::GFHOCGNJKEF*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::GFHOCGNJKEF*>**)Il2CppClass::FromTypeDefinitionIndex(LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c_TypeDefinitionIndex)->GetStaticField(0x48730);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDTurnBasedCreateNewTurnEntityUnitSnapshotByConfig___c_TypeDefinitionIndex)->GetStaticField(0x48738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__CTOR_OFFSET))(this);
		}

		::GFHOCGNJKEF* _Invoke_b__0_0(::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo* v)
		{
			return ((::GFHOCGNJKEF*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYUNITSNAPSHOTBYCONFIG___C__INVOKE_B__0_0_OFFSET))(this, v);
		}
	};
}
