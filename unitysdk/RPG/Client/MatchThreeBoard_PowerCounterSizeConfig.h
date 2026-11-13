#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEBOARD_POWERCOUNTERSIZECONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8C52D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeBoard_PowerCounterSizeConfig_TypeDefinitionIndex = 67834;

	struct alignas(8) MatchThreeBoard_PowerCounterSizeConfig
	{
		::System::Int32 FontSize; // 0x10
		::System::Single ShadowOffset; // 0x14
		::System::String* Anim; // 0x18
		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_L()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)UnitySDK::FromName("RPG.Client", "PowerCounterSizeConfig")->GetStaticField(0x5BF40);
		}

		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_M()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)UnitySDK::FromName("RPG.Client", "PowerCounterSizeConfig")->GetStaticField(0x5BF50);
		}

		static ::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig* StaticGet_S()
		{
			return (::RPG::Client::MatchThreeBoard_PowerCounterSizeConfig*)UnitySDK::FromName("RPG.Client", "PowerCounterSizeConfig")->GetStaticField(0x5BF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEBOARD_POWERCOUNTERSIZECONFIG_CCTOR_OFFSET))();
		}

	};
}
