#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC937B50)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC937B90)
#define RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C___DETECT_B__9_0_OFFSET UNITYSDK_OFFSET(0xC937BA0)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeGroupExpirationDetectViewModel___c_TypeDefinitionIndex = 81424;

	class ChallengeGroupExpirationDetectViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.Challenge", "<>c")->GetStaticField(0x69F10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge", "<>c")->GetStaticField(0x69F18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __Detect_b__9_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEGROUPEXPIRATIONDETECTVIEWMODEL___C___DETECT_B__9_0_OFFSET))(this, a1);
		}

	};
}
