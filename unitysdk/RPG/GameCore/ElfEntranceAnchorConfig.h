#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfEntranceAnchorConfig; }

#define RPG_GAMECORE_ELFENTRANCEANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635830)
#define RPG_GAMECORE_ELFENTRANCEANCHORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfEntranceAnchorConfig_TypeDefinitionIndex = 16191;

	class ElfEntranceAnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEANCHORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfEntranceAnchorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfEntranceAnchorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCEANCHORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
