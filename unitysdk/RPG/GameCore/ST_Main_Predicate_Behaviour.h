#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class STTaskConfig; }
namespace RPG::GameCore { class ST_Main_Predicate_Behaviour; }

#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA53A20)
#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA53A30)
#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA539F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Predicate_Behaviour_TypeDefinitionIndex = 20121;

	class ST_Main_Predicate_Behaviour : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* SuccessTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* FailedTaskList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
