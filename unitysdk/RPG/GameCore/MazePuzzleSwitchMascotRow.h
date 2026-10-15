#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GIAKECJMGIF;
class KOJOJDPPIEO;
namespace RPG::GameCore { class MazePuzzleSwitchMascotRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D841A90)
#define RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8416B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleSwitchMascotRow_TypeDefinitionIndex = 14094;

	class MazePuzzleSwitchMascotRow : public ::System::Object
	{
	public:
		::System::String* ColliderPath; // 0x10
		::Il2CppArray<::System::UInt32>* ChestID; // 0x18
		::Il2CppArray<::KOJOJDPPIEO*>* Section3LoadEntityList; // 0x20
		::Il2CppArray<::System::UInt32>* ControllerBlackHoleID; // 0x28
		::Il2CppArray<::KOJOJDPPIEO*>* Section1LoadEntityList; // 0x30
		::Il2CppArray<::System::UInt32>* EntryBlackHoleID; // 0x38
		::Il2CppArray<::KOJOJDPPIEO*>* Section2LoadEntityList; // 0x40
		::Il2CppArray<::GIAKECJMGIF*>* CoinPropID; // 0x48
		::System::UInt32 FloorID; // 0x50
		::System::UInt32 PlaneID; // 0x54
		::System::UInt32 SwitchID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleSwitchMascotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleSwitchMascotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
