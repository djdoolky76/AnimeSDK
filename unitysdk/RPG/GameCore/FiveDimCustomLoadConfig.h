#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameCustomLoadConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }

#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C3DB0)
#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8C3DF0)
#define RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8C3D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCustomLoadConfig_TypeDefinitionIndex = 18768;

	class FiveDimCustomLoadConfig : public ::RPG::GameCore::LittleGameCustomLoadConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCustomLoadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCUSTOMLOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
