#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelRandomEntitiesSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7C20)
#define RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A7C30)
#define RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A7BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRandomEntitiesSelectorConfig_TypeDefinitionIndex = 15927;

	class ChimeraDuelRandomEntitiesSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Source; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* MaxCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMENTITIESSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
