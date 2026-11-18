#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/X509/X509ChainStatusFlags.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509CertificateCollection_8FF10F09B594C630; }
namespace Mono::Security::X509 { class X509Certificate_6FD3D162D0D30FF0; }
namespace System { class String; }

#define MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET UNITYSDK_OFFSET(0x1FDAF4E0)
#define MONO_SECURITY_X509_X509CHAIN_FINDBYISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1FDAF290)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET UNITYSDK_OFFSET(0x1FDAFB00)
#define MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET UNITYSDK_OFFSET(0x1FDAFD50)
#define MONO_SECURITY_X509_X509CHAIN_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0x1FDAF100)
#define MONO_SECURITY_X509_X509CHAIN_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1FDAF110)
#define MONO_SECURITY_X509_X509CHAIN_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1FDAF120)
#define MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1FDAF130)
#define MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET UNITYSDK_OFFSET(0x1FDB00E0)
#define MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET UNITYSDK_OFFSET(0x1FDB0320)
#define MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FDB0220)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FDAF270)
#define MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1FDAF250)
#define MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET UNITYSDK_OFFSET(0x1FDB02D0)
#define MONO_SECURITY_X509_X509CHAIN_SET_TRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x1FDAF240)
#define MONO_SECURITY_X509_X509CHAIN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDAEF30)
#define MONO_SECURITY_X509_X509CHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDAEE60)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Chain_TypeDefinitionIndex = 2299;

	class X509Chain : public ::System::Object
	{
	public:
		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* _root; // 0x10
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* certs; // 0x18
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* _chain; // 0x20
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* roots; // 0x28
		::Mono::Security::X509::X509ChainStatusFlags _status; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* chain)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN__CTOR_1_OFFSET))(this, chain);
		}

		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_Chain()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_CHAIN_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* get_Root()
		{
			return ((::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_ROOT_OFFSET))(this);
		}

		::Mono::Security::X509::X509ChainStatusFlags get_Status()
		{
			return ((::Mono::Security::X509::X509ChainStatusFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_STATUS_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_TrustAnchors()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_GET_TRUSTANCHORS_OFFSET))(this);
		}

		::System::Void set_TrustAnchors(::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_SET_TRUSTANCHORS_OFFSET))(this, value);
		}

		::System::Void LoadCertificate(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* x509)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATE_OFFSET))(this, x509);
		}

		::System::Void LoadCertificates(::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* collection)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_LOADCERTIFICATES_OFFSET))(this, collection);
		}

		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* FindByIssuerName(::System::String* issuerName)
		{
			return ((::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDBYISSUERNAME_OFFSET))(this, issuerName);
		}

		::System::Boolean Build(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* leaf)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_BUILD_OFFSET))(this, leaf);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_RESET_OFFSET))(this);
		}

		::System::Boolean IsValid(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISVALID_OFFSET))(this, cert);
		}

		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* FindCertificateParent(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* child)
		{
			return ((::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEPARENT_OFFSET))(this, child);
		}

		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* FindCertificateRoot(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* potentialRoot)
		{
			return ((::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_FINDCERTIFICATEROOT_OFFSET))(this, potentialRoot);
		}

		::System::Boolean IsTrusted(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* potentialTrusted)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISTRUSTED_OFFSET))(this, potentialTrusted);
		}

		::System::Boolean IsParent(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* child, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509CHAIN_ISPARENT_OFFSET))(this, child, parent);
		}
	};
}
