#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionSpawnAoeOnCurSectionRows; }
namespace RPG::GameCore { class CakeRaceAoeConfig; }

#define RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C650)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51C660)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionSpawnAoeOnCurSectionRows_TypeDefinitionIndex = 18361;

	class CakeRaceActionSpawnAoeOnCurSectionRows : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 Rows; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::CakeRaceAoeConfig* AoeConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNAOEONCURSECTIONROWS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
