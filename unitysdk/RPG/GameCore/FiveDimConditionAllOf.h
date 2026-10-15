#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventCondition; }
namespace RPG::GameCore { class FiveDimConditionAllOf; }

#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3010)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B3020)
#define RPG_GAMECORE_FIVEDIMCONDITIONALLOF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B5E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimConditionAllOf_TypeDefinitionIndex = 18796;

	class FiveDimConditionAllOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONALLOF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
