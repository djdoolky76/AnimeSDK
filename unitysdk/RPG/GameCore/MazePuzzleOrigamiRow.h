#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }

#define RPG_GAMECORE_MAZEPUZZLEORIGAMIROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86DBF0)
#define RPG_GAMECORE_MAZEPUZZLEORIGAMIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86D830)

namespace RPG::GameCore
{
	class MazePuzzleOrigamiRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropState>* MainPropStateList; // 0x10
		::System::UInt32 MirrorMainPropID; // 0x18
		::RPG::GameCore::PropState CreateNpcPropState; // 0x1C
		::System::UInt32 ColonyID; // 0x20
		::System::UInt32 SubPropID; // 0x24
		::System::UInt32 MirrorGroupID; // 0x28
		::System::UInt32 NpcGroupID; // 0x2C
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 FloorID; // 0x34
		::System::UInt32 NpcInstanceID; // 0x38
		::RPG::GameCore::PropState TargetSubPropState; // 0x3C
		::System::UInt32 MainPropID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMIROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleOrigamiRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMIROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
