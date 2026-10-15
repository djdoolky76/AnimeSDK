#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StroyLineTrialAvatarDataRow; }

#define RPG_GAMECORE_STROYLINETRIALAVATARDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2E3B0)
#define RPG_GAMECORE_STROYLINETRIALAVATARDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB2E1A0)

namespace RPG::GameCore
{
	class StroyLineTrialAvatarDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x10
		::Il2CppArray<::System::UInt32>* InitTrialAvatarList; // 0x18
		::System::UInt32 StoryLineID; // 0x20
		::System::UInt32 CaptainAvatarID; // 0x24
		::System::Boolean SkipJoinLineup; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STROYLINETRIALAVATARDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StroyLineTrialAvatarDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StroyLineTrialAvatarDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STROYLINETRIALAVATARDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
