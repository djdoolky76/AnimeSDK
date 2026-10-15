#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamOccupiedBuffSlotNumConfig; }

#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C6F0)
#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C700)
#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C6B0)

namespace RPG::GameCore
{
	class FateParamOccupiedBuffSlotNumConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
