#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfPhaseConfig; }
namespace RPG::GameCore { class ElfPhaseItem; }

#define RPG_GAMECORE_ELFPHASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6374A0)
#define RPG_GAMECORE_ELFPHASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6373B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfPhaseConfig_TypeDefinitionIndex = 18457;

	class ElfPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfPhaseItem*>* PhaseConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfPhaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfPhaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
