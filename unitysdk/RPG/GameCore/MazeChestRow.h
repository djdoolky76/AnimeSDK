#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeChestRow; }

#define RPG_GAMECORE_MAZECHESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8644B0)
#define RPG_GAMECORE_MAZECHESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D864320)

namespace RPG::GameCore
{
	class MazeChestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChestType>* ChestType; // 0x10
		::System::UInt32 WorldID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeChestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeChestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECHESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
