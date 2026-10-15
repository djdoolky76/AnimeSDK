#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GeneralAudioItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KFOMKKPPMBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB3C9110)
#define KFOMKKPPMBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C9150)
#define KFOMKKPPMBO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB3C9160)

	class KFOMKKPPMBO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GeneralAudioItem*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::GeneralAudioItem*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B2E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B2E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFOMKKPPMBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO___C_CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__0_0(::RPG::Client::GeneralAudioItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::GeneralAudioItem*))((::PBYTE)hIl2Cpp + KFOMKKPPMBO___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
