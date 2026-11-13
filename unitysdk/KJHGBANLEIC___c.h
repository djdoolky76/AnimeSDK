#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"
class EGEJIOKOFOF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define KJHGBANLEIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19F16410)
#define KJHGBANLEIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19F16440)
#define KJHGBANLEIC___C__GET_FAILURECOUNT_B__47_0_OFFSET UNITYSDK_OFFSET(0x19F164B0)
#define KJHGBANLEIC___C__GET_FINISHCOUNT_B__49_0_OFFSET UNITYSDK_OFFSET(0x19F164D0)
#define KJHGBANLEIC___C__GET_SUCCESSCOUNT_B__45_0_OFFSET UNITYSDK_OFFSET(0x19F16490)
#define KJHGBANLEIC___C___CHECKIPV6STATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x19F16450)
#define KJHGBANLEIC___C___GETWEBRESPONSE_B__25_0_OFFSET UNITYSDK_OFFSET(0x19F16480)

inline static constexpr unsigned int KJHGBANLEIC___c_TypeDefinitionIndex = 60869;

	class KJHGBANLEIC___c : public ::System::Object
	{
	public:
		static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__25_0()
		{
			return (::System::Net::Security::RemoteCertificateValidationCallback**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C38);
		}

		static ::System::Func_2<::EGEJIOKOFOF*, ::System::Boolean>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::EGEJIOKOFOF*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C40);
		}

		static ::System::Func_2<::EGEJIOKOFOF*, ::System::Boolean>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::EGEJIOKOFOF*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C48);
		}

		static ::System::Func_2<::EGEJIOKOFOF*, ::System::Boolean>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::EGEJIOKOFOF*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C50);
		}

		static ::System::Func_2<::System::Net::IPEndPoint*, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Net::IPEndPoint*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJHGBANLEIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckIPV6State_b__13_0(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C___CHECKIPV6STATE_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean __GetWebResponse_b__25_0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C___GETWEBRESPONSE_B__25_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _get_SuccessCount_b__45_0(::EGEJIOKOFOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__GET_SUCCESSCOUNT_B__45_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FailureCount_b__47_0(::EGEJIOKOFOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__GET_FAILURECOUNT_B__47_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FinishCount_b__49_0(::EGEJIOKOFOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + KJHGBANLEIC___C__GET_FINISHCOUNT_B__49_0_OFFSET))(this, a1);
		}

	};
