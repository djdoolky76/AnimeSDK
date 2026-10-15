#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD15DA0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD15DE0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER___C__REDIRECTRESULTURL_B__25_0_OFFSET UNITYSDK_OFFSET(0x1BD15DF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer___c_TypeDefinitionIndex = 9316;

	class GoogleOAuthServer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x30F60);
		}

		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x30F68);
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
