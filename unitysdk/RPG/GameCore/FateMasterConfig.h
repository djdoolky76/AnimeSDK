#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateMasterConfig; }
namespace RPG::GameCore { class FateTextDynamicParamConfig; }

#define RPG_GAMECORE_FATEMASTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66D570)
#define RPG_GAMECORE_FATEMASTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66D4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateMasterConfig_TypeDefinitionIndex = 16620;

	class FateMasterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateTextDynamicParamConfig* TextDynamicParamConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMASTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateMasterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateMasterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMASTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
