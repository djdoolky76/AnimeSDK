#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfDecoratorConfig; }

#define RPG_GAMECORE_ELFDECORATORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D607590)
#define RPG_GAMECORE_ELFDECORATORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6075A0)
#define RPG_GAMECORE_ELFDECORATORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6074D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfDecoratorConfig_TypeDefinitionIndex = 18482;

	class ElfDecoratorConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDECORATORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDecoratorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDecoratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDECORATORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfDecoratorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfDecoratorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFDECORATORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
