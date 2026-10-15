#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventCondition; }
namespace RPG::GameCore { class FiveDimConditionAnyOf; }

#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3110)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B3120)
#define RPG_GAMECORE_FIVEDIMCONDITIONANYOF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B5E60)

namespace RPG::GameCore
{
	class FiveDimConditionAnyOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONANYOF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
