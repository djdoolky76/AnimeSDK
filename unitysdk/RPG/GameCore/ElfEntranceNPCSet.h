#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfEntranceNPCConfig; }
namespace RPG::GameCore { class ElfEntranceNPCSet; }

#define RPG_GAMECORE_ELFENTRANCENPCSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D635A60)
#define RPG_GAMECORE_ELFENTRANCENPCSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D635970)

namespace RPG::GameCore
{
	class ElfEntranceNPCSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfEntranceNPCConfig*>* NPCs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfEntranceNPCSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfEntranceNPCSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFENTRANCENPCSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
