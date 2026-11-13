#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePlaneRow; }

#define RPG_GAMECORE_MAZEPLANEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F3B0)
#define RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB6EC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePlaneRow_TypeDefinitionIndex = 14202;

	class MazePlaneRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 MazePoolType; // 0x18
		::System::UInt32 SubType; // 0x1C
		::System::UInt32 PlaneID; // 0x20
		::RPG::GameCore::PlaneType PlaneType; // 0x24
		::System::UInt32 StartFloorID; // 0x28
		::System::UInt32 WorldID; // 0x2C
		::RPG::Client::TextID PlaneName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePlaneRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePlaneRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
