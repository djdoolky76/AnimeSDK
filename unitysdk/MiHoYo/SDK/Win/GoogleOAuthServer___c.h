#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17268DE0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17268E20)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__REDIRECTRESULTURL_B__25_0_OFFSET UNITYSDK_OFFSET(0x17268E30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer___c_TypeDefinitionIndex = 9324;

	class GoogleOAuthServer___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x297B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x297B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C_CTOR_OFFSET))(this);
		}

		::System::Void _RedirectResultUrl_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__REDIRECTRESULTURL_B__25_0_OFFSET))(this);
		}

	};
}
