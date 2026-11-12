#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePlaneRow; }

#define RPG_GAMECORE_MAZEPLANEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83330)
#define RPG_GAMECORE_MAZEPLANEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA82BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePlaneRow_TypeDefinitionIndex = 14202;

	class MazePlaneRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 MazePoolType; // 0x18
		::System::UInt32 WorldID; // 0x1C
		::RPG::Client::TextID PlaneName; // 0x20
		::System::UInt32 PlaneID; // 0x30
		::RPG::GameCore::PlaneType PlaneType; // 0x34
		::System::UInt32 StartFloorID; // 0x38
		::System::UInt32 SubType; // 0x3C
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
