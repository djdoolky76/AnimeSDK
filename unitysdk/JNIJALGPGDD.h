#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AIMNKMEFBKE;
class BPHJOOGJPKD;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConditionConfig; }
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConfig; }

#define JNIJALGPGDD_BLDNFOIOLFB_OFFSET UNITYSDK_OFFSET(0x1C6D9920)
#define JNIJALGPGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D8920)
#define JNIJALGPGDD_DILHFOECNEI_OFFSET UNITYSDK_OFFSET(0x1C6D91A0)
#define JNIJALGPGDD_FGANFFIEMCG_OFFSET UNITYSDK_OFFSET(0x1C6D9E20)
#define JNIJALGPGDD_IIEIOLGIFDB_OFFSET UNITYSDK_OFFSET(0x1C6DA400)
#define JNIJALGPGDD_IKNLCINPPGD_OFFSET UNITYSDK_OFFSET(0x1C6D9680)
#define JNIJALGPGDD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6D8930)
#define JNIJALGPGDD_OHJDGIBJGLO_OFFSET UNITYSDK_OFFSET(0x1C6D8CC0)
#define JNIJALGPGDD_PLHJPEDHDBH_OFFSET UNITYSDK_OFFSET(0x1C6D8970)

inline static constexpr unsigned int JNIJALGPGDD_TypeDefinitionIndex = 36420;

	class JNIJALGPGDD : public ::System::Object
	{
	public:
		::BPHJOOGJPKD* FLMODBLFAGD; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::BPHJOOGJPKD* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + JNIJALGPGDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIJALGPGDD_INITIALIZE_OFFSET))(this);
		}

		::System::Boolean PLHJPEDHDBH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNIJALGPGDD_PLHJPEDHDBH_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatColorfulDiceSkillConfig* OHJDGIBJGLO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNIJALGPGDD_OHJDGIBJGLO_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig* DILHFOECNEI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNIJALGPGDD_DILHFOECNEI_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* IKNLCINPPGD(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNIJALGPGDD_IKNLCINPPGD_OFFSET))(this, a1);
		}

		::System::Boolean BLDNFOIOLFB(::System::UInt32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JNIJALGPGDD_BLDNFOIOLFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean FGANFFIEMCG(::System::UInt32 a1, ::IJFIHJJPHNA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JNIJALGPGDD_FGANFFIEMCG_OFFSET))(this, a1, a2);
		}

		::System::Boolean IIEIOLGIFDB(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JNIJALGPGDD_IIEIOLGIFDB_OFFSET))(this, a1);
		}

	};
