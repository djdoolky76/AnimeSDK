#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfEntranceNPCConfig; }

#define RPG_GAMECORE_ELFENTRANCENPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635960)
#define RPG_GAMECORE_ELFENTRANCENPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635840)

namespace RPG::GameCore
{
	class ElfEntranceNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ConfigID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfEntranceNPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfEntranceNPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
