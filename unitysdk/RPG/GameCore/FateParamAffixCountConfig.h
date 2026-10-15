#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamAffixCountConfig; }

#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BCB0)
#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69BCC0)
#define RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamAffixCountConfig_TypeDefinitionIndex = 16630;

	class FateParamAffixCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamAffixCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamAffixCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamAffixCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamAffixCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMAFFIXCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
