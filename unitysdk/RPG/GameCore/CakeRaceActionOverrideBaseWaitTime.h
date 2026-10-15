#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionOverrideBaseWaitTime; }

#define RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51BED0)
#define RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51BEE0)
#define RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51BE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionOverrideBaseWaitTime_TypeDefinitionIndex = 18343;

	class CakeRaceActionOverrideBaseWaitTime : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 MinWaitTime; // 0x10
		::System::UInt32 MaxWaitTime; // 0x14
		::System::Int32 BaseWaitAdd; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONOVERRIDEBASEWAITTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
