#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOIHOACNIF;
namespace System { class Action; }
namespace System { class Object; }

#define PIOIHOACNIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC275F90)
#define PIOIHOACNIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC275FD0)
#define PIOIHOACNIF___C__GET__ONPLAYERCREATEACTION_B__9_0_OFFSET UNITYSDK_OFFSET(0xC275FE0)
#define PIOIHOACNIF___C__GET__ONPLAYERDESTROYACTION_B__11_0_OFFSET UNITYSDK_OFFSET(0xC276060)

	class PIOIHOACNIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F8A0);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F8A8);
		}

		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOIHOACNIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__OnPlayerCreateAction_b__9_0(::PIOIHOACNIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOIHOACNIF*))((::PBYTE)hIl2Cpp + PIOIHOACNIF___C__GET__ONPLAYERCREATEACTION_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _get__OnPlayerDestroyAction_b__11_0(::PIOIHOACNIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOIHOACNIF*))((::PBYTE)hIl2Cpp + PIOIHOACNIF___C__GET__ONPLAYERDESTROYACTION_B__11_0_OFFSET))(this, a1);
		}

	};
