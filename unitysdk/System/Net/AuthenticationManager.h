#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentialPolicy; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1F01E6F0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F01FC40)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1F01E7F0)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET UNITYSDK_OFFSET(0x1F01E340)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1F01F200)

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationManager_TypeDefinitionIndex = 2822;

	class AuthenticationManager : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)UnitySDK::FromName("System.Net", "AuthenticationManager")->GetStaticField(0x3DA80);
		}

		static ::System::Collections::ArrayList** StaticGet_modules()
		{
			return (::System::Collections::ArrayList**)UnitySDK::FromName("System.Net", "AuthenticationManager")->GetStaticField(0x3DA88);
		}

		static ::System::Net::ICredentialPolicy** StaticGet_credential_policy()
		{
			return (::System::Net::ICredentialPolicy**)UnitySDK::FromName("System.Net", "AuthenticationManager")->GetStaticField(0x3DA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Void EnsureModules()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET))();
		}

		static ::System::Net::Authorization* Authenticate(::System::String* a1, ::System::Net::WebRequest* a2, ::System::Net::ICredentials* a3)
		{
			return ((::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Net::Authorization* DoAuthenticate(::System::String* a1, ::System::Net::WebRequest* a2, ::System::Net::ICredentials* a3)
		{
			return ((::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* a1, ::System::Net::ICredentials* a2)
		{
			return ((::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET))(a1, a2);
		}

	};
}
