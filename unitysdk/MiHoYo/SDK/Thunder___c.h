#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define MIHOYO_SDK_THUNDER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0559F0)
#define MIHOYO_SDK_THUNDER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB055A20)
#define MIHOYO_SDK_THUNDER___C__NOTIFY_B__35_0_OFFSET UNITYSDK_OFFSET(0xB055A40)
#define MIHOYO_SDK_THUNDER___C___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0xB055A30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Thunder___c_TypeDefinitionIndex = 46298;

	class Thunder___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x34520);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x34528);
		}

		static ::System::Net::Security::RemoteCertificateValidationCallback** StaticGet___9__17_0()
		{
			return (::System::Net::Security::RemoteCertificateValidationCallback**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x34530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__17_0(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C___CTOR_B__17_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _Notify_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THUNDER___C__NOTIFY_B__35_0_OFFSET))(this);
		}

	};
}
