#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionGenCurSectionWubbaboo; }

#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51B8A0)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51B8B0)
#define RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51B800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionGenCurSectionWubbaboo_TypeDefinitionIndex = 18340;

	class CakeRaceActionGenCurSectionWubbaboo : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 Percent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENCURSECTIONWUBBABOO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
