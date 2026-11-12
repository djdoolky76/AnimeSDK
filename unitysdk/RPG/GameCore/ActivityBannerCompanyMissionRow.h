#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityBannerCompanyMissionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55D1C0)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E55C890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBannerCompanyMissionRow_TypeDefinitionIndex = 10994;

	class ActivityBannerCompanyMissionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x18
		::System::String* MainImagePath; // 0x20
		::System::String* SubImagePath; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockMissionList; // 0x30
		::System::UInt32 SortID; // 0x38
		::System::UInt32 BannerID; // 0x3C
		::RPG::Client::TextID ShortDesc; // 0x40
		::System::UInt32 ActivityModuleID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SubTitle; // 0x58
		::RPG::Client::TextID Title; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityBannerCompanyMissionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityBannerCompanyMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
