#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetNextScore; }

#define RPG_GAMECORE_MARBLESETNEXTSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81AB60)
#define RPG_GAMECORE_MARBLESETNEXTSCORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81AB70)
#define RPG_GAMECORE_MARBLESETNEXTSCORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81AAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetNextScore_TypeDefinitionIndex = 16860;

	class MarbleSetNextScore : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::UInt32 Score; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetNextScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetNextScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetNextScore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetNextScore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
