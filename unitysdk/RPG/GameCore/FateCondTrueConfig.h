#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateCondTrueConfig; }

#define RPG_GAMECORE_FATECONDTRUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66D170)
#define RPG_GAMECORE_FATECONDTRUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66D180)
#define RPG_GAMECORE_FATECONDTRUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66D130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondTrueConfig_TypeDefinitionIndex = 19248;

	class FateCondTrueConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
