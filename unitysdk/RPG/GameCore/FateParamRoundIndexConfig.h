#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamRoundIndexConfig; }

#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC946F0)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC94700)
#define RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC946B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamRoundIndexConfig_TypeDefinitionIndex = 16792;

	class FateParamRoundIndexConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamRoundIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamRoundIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamRoundIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamRoundIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMROUNDINDEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
