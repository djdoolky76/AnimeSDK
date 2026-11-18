#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class IWebViewLoadInterceptor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WEBVIEWLOADINTERCEPTORS_FINDMATCH_OFFSET UNITYSDK_OFFSET(0x1EB35EB0)
#define MIHOYO_SDK_WEBVIEWLOADINTERCEPTORS_REGISTER_OFFSET UNITYSDK_OFFSET(0x1EB35DC0)
#define MIHOYO_SDK_WEBVIEWLOADINTERCEPTORS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB36120)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebViewLoadInterceptors_TypeDefinitionIndex = 35645;

	class WebViewLoadInterceptors : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::MiHoYo::SDK::IWebViewLoadInterceptor*>** StaticGet__list()
		{
			return (::System::Collections::Generic::List_1<::MiHoYo::SDK::IWebViewLoadInterceptor*>**)Il2CppClass::FromTypeDefinitionIndex(WebViewLoadInterceptors_TypeDefinitionIndex)->GetStaticField(0x2B5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWLOADINTERCEPTORS__CCTOR_OFFSET))();
		}

		static ::System::Void Register(::MiHoYo::SDK::IWebViewLoadInterceptor* interceptor)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::IWebViewLoadInterceptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWLOADINTERCEPTORS_REGISTER_OFFSET))(interceptor);
		}

		static ::MiHoYo::SDK::IWebViewLoadInterceptor* FindMatch(::System::String* url)
		{
			return ((::MiHoYo::SDK::IWebViewLoadInterceptor*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBVIEWLOADINTERCEPTORS_FINDMATCH_OFFSET))(url);
		}
	};
}
