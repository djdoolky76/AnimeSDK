#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ApplySwordTrainingOptionStrategy; }

#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8BB0)
#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C8BC0)
#define RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C8AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplySwordTrainingOptionStrategy_TypeDefinitionIndex = 20849;

	class ApplySwordTrainingOptionStrategy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplySwordTrainingOptionStrategy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplySwordTrainingOptionStrategy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYSWORDTRAININGOPTIONSTRATEGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
