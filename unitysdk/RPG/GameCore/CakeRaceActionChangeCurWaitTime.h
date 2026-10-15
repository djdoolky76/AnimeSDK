#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionChangeCurWaitTime; }

#define RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548420)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D548430)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5483D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionChangeCurWaitTime_TypeDefinitionIndex = 18336;

	class CakeRaceActionChangeCurWaitTime : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Int32 Value; // 0x10
		::System::Boolean ClearOnComplete; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURWAITTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
