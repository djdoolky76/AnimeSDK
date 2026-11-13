#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_IME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B43B030)
#define CLOUDGAME_MAILBOX_IME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B43B070)
#define CLOUDGAME_MAILBOX_IME___C__CONNECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B43B080)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Ime___c_TypeDefinitionIndex = 7553;

	class Ime___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("CloudGame.MailBox", "<>c")->GetStaticField(0x355C0);
		}

		static ::System::Action_1<::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::String*>**)UnitySDK::FromName("CloudGame.MailBox", "<>c")->GetStaticField(0x355C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C_CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__3_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C__CONNECT_B__3_0_OFFSET))(this, a1);
		}

	};
}
