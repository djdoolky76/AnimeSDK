#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSummonUnitTriggerEnable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96000)
#define RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA96010)
#define RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA95FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSummonUnitTriggerEnable_TypeDefinitionIndex = 20164;

	class SetSummonUnitTriggerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::Il2CppArray<::System::String*>* TriggerNames; // 0x20
		::System::Boolean Enable; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonUnitTriggerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonUnitTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSummonUnitTriggerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSummonUnitTriggerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSUMMONUNITTRIGGERENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
