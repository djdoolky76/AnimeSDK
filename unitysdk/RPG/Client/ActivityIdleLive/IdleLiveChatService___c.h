#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDCJNKCNJDL;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC46F700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC46F740)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C___CLEARINVALIDSPECIALCHATS_B__9_0_OFFSET UNITYSDK_OFFSET(0xC46F750)

namespace RPG::Client::ActivityIdleLive
{
	class IdleLiveChatService___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::GDCJNKCNJDL*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::GDCJNKCNJDL*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x22690);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x22698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ClearInvalidSpecialChats_b__9_0(::GDCJNKCNJDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDCJNKCNJDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C___CLEARINVALIDSPECIALCHATS_B__9_0_OFFSET))(this, a1);
		}

	};
}
