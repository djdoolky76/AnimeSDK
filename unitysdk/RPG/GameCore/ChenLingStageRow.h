#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingStageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A5390)
#define RPG_GAMECORE_CHENLINGSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7A4F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingStageRow_TypeDefinitionIndex = 11091;

	class ChenLingStageRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconPathInBattle; // 0x18
		::System::UInt32 UnlockSubMissionID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 LockDeckID; // 0x38
		::System::UInt32 CampID; // 0x3C
		::System::UInt32 NextID; // 0x40
		::RPG::GameCore::ChenLingStageType Type; // 0x44
		::System::UInt32 FinishUnlockDeckID; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::Client::TextID CommanderName; // 0x50
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
