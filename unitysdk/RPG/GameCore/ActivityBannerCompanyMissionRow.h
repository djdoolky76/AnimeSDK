#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityBannerCompanyMissionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D320E20)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D320530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBannerCompanyMissionRow_TypeDefinitionIndex = 10978;

	class ActivityBannerCompanyMissionRow : public ::System::Object
	{
	public:
		::System::String* MainImagePath; // 0x10
		::System::String* SubImagePath; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x20
		::Il2CppArray<::System::UInt32>* UnlockMissionList; // 0x28
		::Il2CppArray<::System::UInt32>* AvatarIDList; // 0x30
		::System::UInt32 SortID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ShortDesc; // 0x40
		::RPG::Client::TextID SubTitle; // 0x50
		::System::UInt32 ActivityModuleID; // 0x60
		::System::UInt32 BannerID; // 0x64
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
