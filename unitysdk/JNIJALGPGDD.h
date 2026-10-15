#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AIMNKMEFBKE;
class BPHJOOGJPKD;
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConditionConfig; }
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConfig; }

#define JNIJALGPGDD_BLDNFOIOLFB_OFFSET UNITYSDK_OFFSET(0x1C707BC0)
#define JNIJALGPGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C706BC0)
#define JNIJALGPGDD_DILHFOECNEI_OFFSET UNITYSDK_OFFSET(0x1C707440)
#define JNIJALGPGDD_FGANFFIEMCG_OFFSET UNITYSDK_OFFSET(0x1C7080C0)
#define JNIJALGPGDD_IIEIOLGIFDB_OFFSET UNITYSDK_OFFSET(0x1C7086A0)
#define JNIJALGPGDD_IKNLCINPPGD_OFFSET UNITYSDK_OFFSET(0x1C707920)
#define JNIJALGPGDD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C706BD0)
#define JNIJALGPGDD_OHJDGIBJGLO_OFFSET UNITYSDK_OFFSET(0x1C706F60)
#define JNIJALGPGDD_PLHJPEDHDBH_OFFSET UNITYSDK_OFFSET(0x1C706C10)

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
