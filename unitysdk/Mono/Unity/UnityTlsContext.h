#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/MobileTlsContext.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509verify_result.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace Mono::Security::Interface { class MonoTlsConnectionInfo; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_certificate_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_read_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_write_callback; }
namespace Mono::Unity { class UnityTls_unitytls_tlsctx_x509verify_callback; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1DAF8F30)
#define MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DAF6F80)
#define MONO_UNITY_UNITYTLSCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF7070)
#define MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DAF87B0)
#define MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1DAF7FC0)
#define MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1DAED5E0)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1DAF8500)
#define MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1DAF8510)
#define MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1DAED3A0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1DAF8AD0)
#define MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DAF6DC0)
#define MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET UNITYSDK_OFFSET(0x1DAED7A0)
#define MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1DAF8520)
#define MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x1DAED0F0)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1DAF8E00)
#define MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DAF6EA0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET UNITYSDK_OFFSET(0x1DAF88B0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DAF6CE0)
#define MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET UNITYSDK_OFFSET(0x1DAED9D0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTlsContext_TypeDefinitionIndex = 2401;

	class UnityTlsContext : public ::Mono::Net::Security::MobileTlsContext
	{
	public:
		::Il2CppArray<::System::Byte>* readBuffer; // 0x48
		::System::Security::Cryptography::X509Certificates::X509Certificate* localClientCertificate; // 0x50
		::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* certificateCallback; // 0x58
		::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate; // 0x60
		::Il2CppArray<::System::Byte>* writeBuffer; // 0x68
		::Mono::Security::Interface::MonoTlsConnectionInfo* connectioninfo; // 0x70
		::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* readCallback; // 0x78
		::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* verifyCallback; // 0x80
		::System::Exception* lastException; // 0x88
		::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* writeCallback; // 0x90
		::PVOID tlsContext; // 0x98
		::PVOID requestedClientKey; // 0xA0
		::PVOID requestedClientCertChain; // 0xA8
		::System::Boolean isAuthenticated; // 0xB0
		::System::Boolean hasContext; // 0xB1
		::System::Boolean closedGraceful; // 0xB2
		::System::Byte _padding0[0x1];
		::System::Runtime::InteropServices::GCHandle handle; // 0xB4
		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* a1, ::System::Boolean a2, ::System::String* a3, ::System::Security::Authentication::SslProtocols a4, ::System::Security::Cryptography::X509Certificates::X509Certificate* a5, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::System::String*, ::System::Security::Authentication::SslProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* a1, ::PVOID a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_EXTRACTNATIVEKEYANDCHAINFROMMANAGEDCERTIFICATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_GET_LOCALCLIENTCERTIFICATE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Boolean> Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Boolean>(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_SHUTDOWN_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void StartHandshake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_STARTHANDSHAKE_OFFSET))(this);
		}

		::System::Boolean ProcessHandshake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_PROCESSHANDSHAKE_OFFSET))(this);
		}

		::System::Void FinishHandshake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_FINISHHANDSHAKE_OFFSET))(this);
		}

		static ::System::IntPtr WriteCallback(::PVOID a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		::System::IntPtr WriteCallback_1(::PVOID a1, ::System::IntPtr a2, ::PVOID a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_WRITECALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::IntPtr ReadCallback(::PVOID a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_OFFSET))(a1, a2, a3, a4);
		}

		::System::IntPtr ReadCallback_1(::PVOID a1, ::System::IntPtr a2, ::PVOID a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::PVOID, ::System::IntPtr, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_READCALLBACK_1_OFFSET))(this, a1, a2, a3);
		}

		static ::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback(::PVOID a1, ::Mono::Unity::UnityTls_unitytls_x509list_ref a2, ::PVOID a3)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_OFFSET))(a1, a2, a3);
		}

		::Mono::Unity::UnityTls_unitytls_x509verify_result VerifyCallback_1(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::PVOID a2)
		{
			return ((::Mono::Unity::UnityTls_unitytls_x509verify_result(*)(::PVOID, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_VERIFYCALLBACK_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void CertificateCallback(::PVOID a1, ::PVOID a2, ::PVOID a3, ::System::IntPtr a4, ::PVOID a5, ::System::IntPtr a6, ::PVOID a7, ::PVOID a8, ::PVOID a9)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void CertificateCallback_1(::PVOID a1, ::PVOID a2, ::System::IntPtr a3, ::PVOID a4, ::System::IntPtr a5, ::PVOID a6, ::PVOID a7, ::PVOID a8)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::IntPtr, ::PVOID, ::System::IntPtr, ::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLSCONTEXT_CERTIFICATECALLBACK_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
}
