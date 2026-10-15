#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/X509Certificates/X509CertificateImpl.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F080830)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509Certificate2Impl_TypeDefinitionIndex = 2694;

	class X509Certificate2Impl : public ::System::Security::Cryptography::X509Certificates::X509CertificateImpl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_X509CERTIFICATE2IMPL_CTOR_OFFSET))(this);
		}

	};
}
