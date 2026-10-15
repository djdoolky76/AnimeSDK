#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC941350)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC941390)

namespace RPG::Client::Challenge
{
	class ChallengeTargetInfoRowControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge", "<>c")->GetStaticField(0x6B9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C_CTOR_OFFSET))(this);
		}

	};
}
