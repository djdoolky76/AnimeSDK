#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LOGINMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD49F540)
#define RPG_CLIENT_LOGINMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD49F580)
#define RPG_CLIENT_LOGINMODULE___C___ONCMDREGIONSTOPSCNOTIFY_B__15_0_OFFSET UNITYSDK_OFFSET(0xD49F590)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginModule___c_TypeDefinitionIndex = 65785;

	class LoginModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F020);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnCmdRegionStopScNotify_b__15_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINMODULE___C___ONCMDREGIONSTOPSCNOTIFY_B__15_0_OFFSET))(this, a1);
		}

	};
}
