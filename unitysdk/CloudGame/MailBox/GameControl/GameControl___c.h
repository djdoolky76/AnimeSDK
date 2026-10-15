#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC1EC60)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1ECA0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CONNECT_B__13_0_OFFSET UNITYSDK_OFFSET(0x1BC1ECB0)

namespace CloudGame::MailBox::GameControl
{
	class GameControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("CloudGame.MailBox.GameControl", "<>c")->GetStaticField(0x2EA70);
		}

		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)UnitySDK::FromName("CloudGame.MailBox.GameControl", "<>c")->GetStaticField(0x2EA78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__13_0(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CONNECT_B__13_0_OFFSET))(this, a1);
		}

	};
}
