#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class EnemyWaveInformTemplateExt; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146654A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146654E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__ONGRAPHSTARTED_B__2_1_OFFSET UNITYSDK_OFFSET(0x146654F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEnemyMonsterList___c_TypeDefinitionIndex = 50302;

	class LDTurnBasedGetEnemyMonsterList___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LDTurnBasedGetEnemyMonsterList___c_TypeDefinitionIndex)->GetStaticField(0x46C50);
		}
		static ::System::Comparison_1<::MoleMole::Project::Config::EnemyWaveInformTemplateExt*>** StaticGet___9__2_1()
		{
			return (::System::Comparison_1<::MoleMole::Project::Config::EnemyWaveInformTemplateExt*>**)Il2CppClass::FromTypeDefinitionIndex(LDTurnBasedGetEnemyMonsterList___c_TypeDefinitionIndex)->GetStaticField(0x46C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnGraphStarted_b__2_1(::MoleMole::Project::Config::EnemyWaveInformTemplateExt* a, ::MoleMole::Project::Config::EnemyWaveInformTemplateExt* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Project::Config::EnemyWaveInformTemplateExt*, ::MoleMole::Project::Config::EnemyWaveInformTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST___C__ONGRAPHSTARTED_B__2_1_OFFSET))(this, a, b);
		}
	};
}
