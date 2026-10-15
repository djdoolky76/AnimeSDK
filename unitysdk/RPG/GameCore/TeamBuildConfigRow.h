#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamBuildConfigRow; }

#define RPG_GAMECORE_TEAMBUILDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79C30)
#define RPG_GAMECORE_TEAMBUILDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB79880)

namespace RPG::GameCore
{
	class TeamBuildConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BackupList2; // 0x10
		::Il2CppArray<::System::UInt32>* BackupGroupList3; // 0x18
		::Il2CppArray<::System::UInt32>* MemberList; // 0x20
		::Il2CppArray<::System::UInt32>* BackupList1; // 0x28
		::Il2CppArray<::System::UInt32>* BackupGroupList2; // 0x30
		::Il2CppArray<::System::UInt32>* BackupGroupList1; // 0x38
		::Il2CppArray<::System::UInt32>* BackupList3; // 0x40
		::System::UInt32 TeamID; // 0x48
		::System::UInt32 AvatarID; // 0x4C
		::System::UInt32 Position; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamBuildConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
