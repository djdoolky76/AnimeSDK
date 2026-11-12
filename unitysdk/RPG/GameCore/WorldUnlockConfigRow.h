#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WorldUnlockConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_WORLDUNLOCKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC0670)
#define RPG_GAMECORE_WORLDUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EEBFF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldUnlockConfigRow_TypeDefinitionIndex = 14173;

	class WorldUnlockConfigRow : public ::System::Object
	{
	public:
		::System::String* NewWorldHintDialogPrefab; // 0x10
		::System::String* DirectUnlockCondition; // 0x18
		::Il2CppArray<::System::UInt32>* InitMainMissionList; // 0x20
		::System::UInt32 WorldPreUnlockStartMission; // 0x28
		::System::UInt32 NewWorldHintDialogActivityID; // 0x2C
		::System::UInt32 WorldPreUnlockEndMission; // 0x30
		::System::UInt32 PreWorldID; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDUNLOCKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::WorldUnlockConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WorldUnlockConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
