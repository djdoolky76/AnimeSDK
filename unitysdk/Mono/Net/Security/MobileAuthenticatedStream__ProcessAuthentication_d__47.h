#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C5A520)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3C5A530)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream__ProcessAuthentication_d__47_TypeDefinitionIndex = 2438;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47>
	struct alignas(8) MobileAuthenticatedStream__ProcessAuthentication_d__47
	{
		::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate; // 0x10
		::System::String* targetHost; // 0x18
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x20
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x28
		::System::Object* __u__1; // 0x30
		::System::Byte _padding0[0x8];
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x40
		::System::Boolean clientCertRequired; // 0x58
		::System::Boolean serverMode; // 0x59
		::System::Boolean runSynchronously; // 0x5A
		::System::Byte _padding1[0x1];
		::System::Security::Authentication::SslProtocols enabledProtocols; // 0x5C
		::System::Int32 __1__state; // 0x60
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__PROCESSAUTHENTICATION_D__47_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
