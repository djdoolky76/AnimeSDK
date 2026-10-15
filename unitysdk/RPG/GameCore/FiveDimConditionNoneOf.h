#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventCondition; }
namespace RPG::GameCore { class FiveDimConditionNoneOf; }

#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B3210)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B3220)
#define RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B5E90)

namespace RPG::GameCore
{
	class FiveDimConditionNoneOf : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventCondition*>* Conditions; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCONDITIONNONEOF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
