#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByLevelLoseCheck; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Predicate_1; }

#define MPCLCMLDPDP_BKJCNBIOBGK_OFFSET UNITYSDK_OFFSET(0xBA39B30)
#define MPCLCMLDPDP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA39860)
#define MPCLCMLDPDP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA399D0)
#define MPCLCMLDPDP_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xBA39FA0)
#define MPCLCMLDPDP_GFCNGAGKCFO_OFFSET UNITYSDK_OFFSET(0xBA39E40)
#define MPCLCMLDPDP_GGHIDBNAJFA_OFFSET UNITYSDK_OFFSET(0xBA3A100)
#define MPCLCMLDPDP_HABAEAOCJNE_OFFSET UNITYSDK_OFFSET(0xBA3A1B0)

	class MPCLCMLDPDP
	{
	public:
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* LNAHEJHFOIL; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_EVALUATE_OFFSET))(this);
		}

		::System::Boolean BKJCNBIOBGK(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_BKJCNBIOBGK_OFFSET))(this, a1);
		}

		::System::Boolean GFCNGAGKCFO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_GFCNGAGKCFO_OFFSET))(this, a1);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void GGHIDBNAJFA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_GGHIDBNAJFA_OFFSET))(this, a1);
		}

		::System::Void HABAEAOCJNE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MPCLCMLDPDP_HABAEAOCJNE_OFFSET))(this, a1);
		}

	};
