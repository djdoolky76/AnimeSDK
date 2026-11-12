#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionToiletTransfer; }

#define RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75C630)
#define RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E75C640)
#define RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E75C5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionToiletTransfer_TypeDefinitionIndex = 18504;

	class CakeRaceActionToiletTransfer : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionToiletTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionToiletTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionToiletTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionToiletTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONTOILETTRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
