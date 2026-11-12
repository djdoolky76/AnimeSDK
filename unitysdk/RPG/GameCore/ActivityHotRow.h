#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHotRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E578BC0)
#define RPG_GAMECORE_ACTIVITYHOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5786B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHotRow_TypeDefinitionIndex = 11730;

	class ActivityHotRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* RewardShow; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* RewardReceived; // 0x20
		::RPG::Client::TextID ItemDes; // 0x28
		::RPG::Client::TextID ActivityName; // 0x38
		::System::UInt32 ActivityID; // 0x48
		::System::Int32 SortWeight; // 0x4C
		::System::UInt32 ActivityPanelOverwrite; // 0x50
		::System::UInt32 GotoID; // 0x54
		::RPG::Client::TextID DesName; // 0x58
		::RPG::Client::TextID TimeDes; // 0x68
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
