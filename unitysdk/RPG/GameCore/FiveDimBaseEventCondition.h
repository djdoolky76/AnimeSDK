#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameBaseEventCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventCondition; }

#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D685900)
#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6858A0)
#define RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6825B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventCondition_TypeDefinitionIndex = 18794;

	class FiveDimBaseEventCondition : public ::RPG::GameCore::LittleGameBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBaseEventCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBaseEventCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
