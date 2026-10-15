#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Http { class NtlmSession; }
namespace System { class Object; }
namespace System::Net { class HttpWebRequest; }

#define MONO_HTTP_NTLMCLIENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBAD90)
#define MONO_HTTP_NTLMCLIENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBADD0)
#define MONO_HTTP_NTLMCLIENT___C__AUTHENTICATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EFBADE0)

namespace Mono::Http
{
	inline static constexpr unsigned int NtlmClient___c_TypeDefinitionIndex = 2454;

	class NtlmClient___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Mono.Http", "<>c")->GetStaticField(0x36910);
		}

		static ::System::Object** StaticGet___9__1_0()
		{
			return (::System::Object**)UnitySDK::FromName("Mono.Http", "<>c")->GetStaticField(0x36918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT___C_CTOR_OFFSET))(this);
		}

		::Mono::Http::NtlmSession* _Authenticate_b__1_0(::System::Net::HttpWebRequest* a1)
		{
			return ((::Mono::Http::NtlmSession*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + MONO_HTTP_NTLMCLIENT___C__AUTHENTICATE_B__1_0_OFFSET))(this, a1);
		}

	};
}
