#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHotRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E519A80)
#define RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E519570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotRow_TypeDefinitionIndex = 11730;

	class ActivityHotRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardShow; // 0x10
		::System::String* ImgPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* RewardReceived; // 0x20
		::RPG::Client::TextID ItemDes; // 0x28
		::RPG::Client::TextID ActivityName; // 0x38
		::RPG::Client::TextID DesName; // 0x48
		::RPG::Client::TextID TimeDes; // 0x58
		::System::UInt32 ActivityPanelOverwrite; // 0x68
		::System::UInt32 GotoID; // 0x6C
		::System::Int32 SortWeight; // 0x70
		::System::UInt32 ActivityID; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
