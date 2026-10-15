#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameTagConfig; }

#define RPG_GAMECORE_LITTLEGAMETAGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B94F0)
#define RPG_GAMECORE_LITTLEGAMETAGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7B9500)
#define RPG_GAMECORE_LITTLEGAMETAGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B9450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTagConfig_TypeDefinitionIndex = 18849;

	class LittleGameTagConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::HoyoTagContainer* Tags; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETAGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTagConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETAGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTagConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETAGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
