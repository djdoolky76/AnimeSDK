#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD69CE40)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD69CE80)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__SHOWDIALOGTEXTANDRESTARTGAME_B__4_0_OFFSET UNITYSDK_OFFSET(0xD69CE90)

namespace RPG::Client
{
	class MessageBoxDialogUtil___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58310);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x58318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowDialogTextAndRestartGame_b__4_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL___C__SHOWDIALOGTEXTANDRESTARTGAME_B__4_0_OFFSET))(this, a1);
		}

	};
}
