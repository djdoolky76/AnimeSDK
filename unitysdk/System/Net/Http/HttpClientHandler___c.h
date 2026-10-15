#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE602A0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE602D0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CREATEWEBREQUEST_B__61_0_OFFSET UNITYSDK_OFFSET(0x1EE602E0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__SENDASYNC_B__64_0_OFFSET UNITYSDK_OFFSET(0x1EE60320)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClientHandler___c_TypeDefinitionIndex = 3762;

	class HttpClientHandler___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__61_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("System.Net.Http", "<>c")->GetStaticField(0xBEC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Net.Http", "<>c")->GetStaticField(0xBEC8);
		}

		static ::System::Action** StaticGet___9__64_0()
		{
			return (::System::Action**)UnitySDK::FromName("System.Net.Http", "<>c")->GetStaticField(0xBED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateWebRequest_b__61_0(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CREATEWEBREQUEST_B__61_0_OFFSET))(this, a1);
		}

		::System::Void _SendAsync_b__64_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__SENDASYNC_B__64_0_OFFSET))(this, a1);
		}

	};
}
