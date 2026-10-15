#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionGodExchangeCatTransfer; }

#define RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5495B0)
#define RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5495C0)
#define RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D549540)

namespace RPG::GameCore
{
	class CakeRaceActionGodExchangeCatTransfer : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGodExchangeCatTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGODEXCHANGECATTRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
