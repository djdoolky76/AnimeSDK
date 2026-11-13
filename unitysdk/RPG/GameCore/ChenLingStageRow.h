#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingStageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91CD90)
#define RPG_GAMECORE_CHENLINGSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F91C990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingStageRow_TypeDefinitionIndex = 11091;

	class ChenLingStageRow : public ::System::Object
	{
	public:
		::System::String* IconPathInBattle; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::ChenLingStageType Type; // 0x30
		::System::UInt32 CampID; // 0x34
		::System::UInt32 FinishUnlockDeckID; // 0x38
		::System::UInt32 LockDeckID; // 0x3C
		::System::UInt32 NextID; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID CommanderName; // 0x48
		::System::UInt32 UnlockSubMissionID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
