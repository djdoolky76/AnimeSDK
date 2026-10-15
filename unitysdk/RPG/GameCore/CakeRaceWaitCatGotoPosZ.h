#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceWaitCatGotoPosZ; }

#define RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553B30)
#define RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D553B40)
#define RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitCatGotoPosZ_TypeDefinitionIndex = 24297;

	class CakeRaceWaitCatGotoPosZ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CatConfigID; // 0x18
		::System::Int32 PositionZ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITCATGOTOPOSZ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
