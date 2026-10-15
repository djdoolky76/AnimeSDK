#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/MainMissionSubType.h"
#include "unitysdk/RPG/GameCore/MainMissionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { class MissionCondition; }
namespace System { class String; }

#define RPG_GAMECORE_MAINMISSIONROW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB8A0)
#define RPG_GAMECORE_MAINMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB890)
#define RPG_GAMECORE_MAINMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D7F87B0)
#define RPG_GAMECORE_MAINMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7F8E50)
#define RPG_GAMECORE_MAINMISSIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D7FB800)
#define RPG_GAMECORE_MAINMISSIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D7FB860)

namespace RPG::GameCore
{
	class MainMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextMainMissionList; // 0x10
		::Il2CppArray<::System::UInt32>* SubRewardList; // 0x18
		::Il2CppArray<::RPG::GameCore::MissionCondition*>* BeginParam; // 0x20
		::Il2CppArray<::RPG::GameCore::MissionCondition*>* TakeParam; // 0x28
		::System::UInt32 WorldID; // 0x30
		::System::UInt32 DisplayRewardID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 TrackWeight; // 0x48
		::System::UInt32 MissionPack; // 0x4C
		::System::UInt32 MissionStoryEvent; // 0x50
		::System::Boolean IsInRaid; // 0x54
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MainMissionType Type; // 0x58
		::RPG::GameCore::LogicOperation BeginOperation; // 0x5C
		::System::UInt32 MainMissionID; // 0x60
		::System::UInt32 DisplayPriority; // 0x64
		::RPG::GameCore::MainMissionSubType SubType; // 0x68
		::RPG::GameCore::LogicOperation TakeOperation; // 0x6C
		::System::UInt32 RewardID; // 0x70
		::System::UInt32 NextTrackMainMission; // 0x74
		::System::UInt32 MissionAdvance; // 0x78
		::System::UInt32 ChapterID; // 0x7C
		static ::System::String** StaticGet_CONFIG_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "MainMissionRow")->GetStaticField(0x18C60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_CCTOR_OFFSET))();
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
