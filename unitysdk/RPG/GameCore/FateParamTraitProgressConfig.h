#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamTraitProgressConfig; }

#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC947B0)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC947C0)
#define RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC94770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamTraitProgressConfig_TypeDefinitionIndex = 16802;

	class FateParamTraitProgressConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamTraitProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamTraitProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamTraitProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamTraitProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMTRAITPROGRESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
