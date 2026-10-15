#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class Object; }

#define LJFHKAJPFNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB711B30)
#define LJFHKAJPFNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB711B60)
#define LJFHKAJPFNE___C__ENABLEENVPROFILE_B__77_0_OFFSET UNITYSDK_OFFSET(0xB711B70)

	class LJFHKAJPFNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60630);
		}

		static ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate** StaticGet___9__77_0()
		{
			return (::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C_CTOR_OFFSET))(this);
		}

		::System::Void _EnableEnvProfile_b__77_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJFHKAJPFNE___C__ENABLEENVPROFILE_B__77_0_OFFSET))(this, a1);
		}

	};
