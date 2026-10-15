#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActGetCoinByParamConfig; }

#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699D50)
#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699D60)
#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActGetCoinByParamConfig_TypeDefinitionIndex = 19224;

	class FateActGetCoinByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActGetCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActGetCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActGetCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActGetCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
