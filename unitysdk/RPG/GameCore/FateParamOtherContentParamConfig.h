#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamOtherContentParamConfig; }

#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66ECD0)
#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66ECE0)
#define RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66EC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOtherContentParamConfig_TypeDefinitionIndex = 16628;

	class FateParamOtherContentParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamOtherContentParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamOtherContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamOtherContentParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamOtherContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOTHERCONTENTPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
