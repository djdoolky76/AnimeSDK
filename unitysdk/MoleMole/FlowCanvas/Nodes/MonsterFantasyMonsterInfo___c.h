#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFHOCGNJKEF;
namespace MoleMole::FlowCanvas::Nodes { class MonsterFantasySkillInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124614D0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12461510)
#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__TOPROTO_B__14_0_OFFSET UNITYSDK_OFFSET(0x12461520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterFantasyMonsterInfo___c_TypeDefinitionIndex = 68270;

	class MonsterFantasyMonsterInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonsterFantasyMonsterInfo___c_TypeDefinitionIndex)->GetStaticField(0x41B30);
		}
		static ::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::GFHOCGNJKEF*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*, ::GFHOCGNJKEF*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterFantasyMonsterInfo___c_TypeDefinitionIndex)->GetStaticField(0x41B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__CTOR_OFFSET))(this);
		}

		::GFHOCGNJKEF* _ToProto_b__14_0(::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo* v)
		{
			return ((::GFHOCGNJKEF*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterFantasySkillInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERFANTASYMONSTERINFO___C__TOPROTO_B__14_0_OFFSET))(this, v);
		}
	};
}
