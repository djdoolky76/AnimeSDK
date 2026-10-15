#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveGachaWorldTagConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4D45E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC4D4610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xC4D4620)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveGachaPoolConfig___c_TypeDefinitionIndex = 75253;

	class IdleLiveGachaPoolConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x257D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x257D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig* _Create_b__0_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveGachaWorldTagConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEGACHAPOOLCONFIG___C__CREATE_B__0_0_OFFSET))(this, a1);
		}

	};
}
