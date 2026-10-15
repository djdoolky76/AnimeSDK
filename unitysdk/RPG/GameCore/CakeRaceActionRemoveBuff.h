#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceBuffName.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionRemoveBuff; }

#define RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C1C0)
#define RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51C1D0)
#define RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionRemoveBuff_TypeDefinitionIndex = 18335;

	class CakeRaceActionRemoveBuff : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBuffName>* RemoveBuffs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionRemoveBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionRemoveBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionRemoveBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionRemoveBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONREMOVEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
