#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamVoiceAtlasBindingRow; }

#define RPG_GAMECORE_TEAMVOICEATLASBINDINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7E590)
#define RPG_GAMECORE_TEAMVOICEATLASBINDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB7E420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamVoiceAtlasBindingRow_TypeDefinitionIndex = 12683;

	class TeamVoiceAtlasBindingRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 LinkAvatar; // 0x14
		::System::UInt32 AtlasVoiceID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMVOICEATLASBINDINGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamVoiceAtlasBindingRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamVoiceAtlasBindingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMVOICEATLASBINDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
