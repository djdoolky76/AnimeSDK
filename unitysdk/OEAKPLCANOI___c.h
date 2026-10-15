#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class Action; }
namespace System { class Object; }

#define OEAKPLCANOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDFE0F0)
#define OEAKPLCANOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBDFE130)
#define OEAKPLCANOI___C___APPLYENVIRONMENTPROFILE_B__26_0_OFFSET UNITYSDK_OFFSET(0xBDFE150)
#define OEAKPLCANOI___C___ONENTITYASYNCLOADCOMPLETE_B__19_0_OFFSET UNITYSDK_OFFSET(0xBDFE140)

	class OEAKPLCANOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E30);
		}

		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E38);
		}

		static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__26_0()
		{
			return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEAKPLCANOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnEntityAsyncLoadComplete_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C___ONENTITYASYNCLOADCOMPLETE_B__19_0_OFFSET))(this);
		}

		::System::Void __ApplyEnvironmentProfile_b__26_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C___APPLYENVIRONMENTPROFILE_B__26_0_OFFSET))(this, a1);
		}

	};
