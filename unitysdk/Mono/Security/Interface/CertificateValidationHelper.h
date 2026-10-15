#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Security::Interface { class ICertificateValidator2; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }

#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0336F0)
#define MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1C033790)

namespace Mono::Security::Interface
{
	class CertificateValidationHelper : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_supportsTrustAnchors()
		{
			return (::System::Boolean*)UnitySDK::FromName("Mono.Security.Interface", "CertificateValidationHelper")->GetStaticField(0xB160);
		}

		static ::System::Boolean* StaticGet_noX509Chain()
		{
			return (::System::Boolean*)UnitySDK::FromName("Mono.Security.Interface", "CertificateValidationHelper")->GetStaticField(0xB161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_CCTOR_OFFSET))();
		}

		static ::Mono::Security::Interface::ICertificateValidator2* GetInternalValidator(::Mono::Security::Interface::MonoTlsSettings* a1, ::Mono::Security::Interface::MonoTlsProvider* a2)
		{
			return ((::Mono::Security::Interface::ICertificateValidator2*(*)(::Mono::Security::Interface::MonoTlsSettings*, ::Mono::Security::Interface::MonoTlsProvider*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_CERTIFICATEVALIDATIONHELPER_GETINTERNALVALIDATOR_OFFSET))(a1, a2);
		}

	};
}
