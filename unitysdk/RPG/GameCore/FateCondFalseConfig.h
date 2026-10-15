#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateCondFalseConfig; }

#define RPG_GAMECORE_FATECONDFALSECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66CFE0)
#define RPG_GAMECORE_FATECONDFALSECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66CFF0)
#define RPG_GAMECORE_FATECONDFALSECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66CFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondFalseConfig_TypeDefinitionIndex = 19249;

	class FateCondFalseConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
