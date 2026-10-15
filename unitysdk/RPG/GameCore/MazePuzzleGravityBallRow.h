#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleGravityBallRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86B2D0)
#define RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86B100)

namespace RPG::GameCore
{
	class MazePuzzleGravityBallRow : public ::System::Object
	{
	public:
		::System::String* HiddenStoryCode; // 0x10
		::System::String* WallPrefab; // 0x18
		::Il2CppArray<::System::UInt32>* DestructablePropList; // 0x20
		::System::UInt32 PuzzleID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleGravityBallRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleGravityBallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
