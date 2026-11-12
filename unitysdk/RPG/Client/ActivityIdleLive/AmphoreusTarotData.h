#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCD8E8C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET UNITYSDK_OFFSET(0xCD8F0D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET UNITYSDK_OFFSET(0xCD8EEF0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AmphoreusTarotData_TypeDefinitionIndex = 77739;

	class AmphoreusTarotData : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::String* SmallIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* AbilityParams; // 0x28
		::System::UInt32 TriggerNodeId; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::GameCore::GenderType GenderLimit; // 0x38
		::System::UInt32 TriggerChapterId; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_CTOR_OFFSET))(this);
		}

		::System::String* GetFullDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETFULLDESC_OFFSET))(this);
		}

		::System::String* GetEffectDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AMPHOREUSTAROTDATA_GETEFFECTDESC_OFFSET))(this);
		}

	};
}
