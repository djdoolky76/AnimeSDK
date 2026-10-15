#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC939B70)
#define RPG_CLIENT_CHALLENGE_CHALLENGETARGETINFOROWCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC939BB0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeTargetInfoRowControl___c_TypeDefinitionIndex = 81420;

	class ChallengeTargetInfoRowControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge", "<>c")->GetStaticField(0x69F50);
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
