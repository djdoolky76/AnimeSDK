#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeFloorUnlockRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORUNLOCKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8678B0)
#define RPG_GAMECORE_MAZEFLOORUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D867780)

namespace RPG::GameCore
{
	class MazeFloorUnlockRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditionExpression; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORUNLOCKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeFloorUnlockRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeFloorUnlockRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
