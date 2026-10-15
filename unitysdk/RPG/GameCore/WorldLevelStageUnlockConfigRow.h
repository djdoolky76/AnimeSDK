#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WorldLevelStageUnlockConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7F540)
#define RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC7EED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelStageUnlockConfigRow_TypeDefinitionIndex = 12567;

	class WorldLevelStageUnlockConfigRow : public ::System::Object
	{
	public:
		::System::String* UIEntranceBgPath; // 0x10
		::System::UInt32 RaidID; // 0x18
		::System::UInt32 UIEntranceParam; // 0x1C
		::System::UInt32 UIEnviromentParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::WorldLevelStageUnlockConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WorldLevelStageUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELSTAGEUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
