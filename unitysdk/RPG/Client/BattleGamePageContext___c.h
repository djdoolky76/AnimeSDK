#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC822760)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8227A0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__64_0_OFFSET UNITYSDK_OFFSET(0xC8227B0)

namespace RPG::Client
{
	class BattleGamePageContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59C20);
		}

		static ::System::Action** StaticGet___9__64_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Void __ToggleAvatarPanel_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__64_0_OFFSET))(this);
		}

	};
}
