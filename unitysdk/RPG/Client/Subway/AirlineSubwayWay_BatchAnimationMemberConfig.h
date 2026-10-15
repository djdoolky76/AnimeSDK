#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_MemberConfig.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_BATCHANIMATIONMEMBERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE14B1C0)

namespace RPG::Client::Subway
{
	class AirlineSubwayWay_BatchAnimationMemberConfig : public ::RPG::Client::Subway::AirlineSubwayWay_MemberConfig
	{
	public:
		::System::String* PrefabPath; // 0x18
		::System::String* PrefabAnimGroupPath; // 0x20
		::Il2CppArray<::System::Object*>* RandomConfigs; // 0x28
		::Il2CppArray<::System::Object*>* AnimationInfos; // 0x30
		::Il2CppArray<::System::Object*>* PossessionConfigs; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_BATCHANIMATIONMEMBERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
