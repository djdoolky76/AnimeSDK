#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHexRow; }

#define RPG_GAMECORE_ROGUETOURNHEXROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3D510)
#define RPG_GAMECORE_ROGUETOURNHEXROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3D270)

namespace RPG::GameCore
{
	class RogueTournHexRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x10
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* AvatarDamageType; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* AvatarType; // 0x20
		::System::UInt32 MazeBuffID; // 0x28
		::RPG::GameCore::RogueTournMode TournMode; // 0x2C
		::System::UInt32 HexID; // 0x30
		::System::UInt32 DisplayID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournHexRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournHexRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
