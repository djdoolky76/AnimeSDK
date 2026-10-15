#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_LOGINMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4A8180)
#define RPG_CLIENT_LOGINMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD4A81C0)
#define RPG_CLIENT_LOGINMODULE___C___ONCMDREGIONSTOPSCNOTIFY_B__15_0_OFFSET UNITYSDK_OFFSET(0xD4A81D0)

namespace RPG::Client
{
	class LoginModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3A540);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3A548);
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
