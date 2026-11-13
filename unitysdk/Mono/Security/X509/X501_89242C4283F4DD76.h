#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Security { class ASN1_6C67A52C6BBD45E0; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X501_89242C4283F4DD76_APPENDENTRY_OFFSET UNITYSDK_OFFSET(0x1EB3DDE0)
#define MONO_SECURITY_X509_X501_89242C4283F4DD76_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F3F0)
#define MONO_SECURITY_X509_X501_89242C4283F4DD76_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EB3F0B0)
#define MONO_SECURITY_X509_X501_89242C4283F4DD76_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB3DBB0)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X501_89242C4283F4DD76_TypeDefinitionIndex = 2266;

	class X501_89242C4283F4DD76 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_surname()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAB0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_domainComponent()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAB8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAC0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_dnQualifier()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAC8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_userid()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAD0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_countryName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAD8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_title()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAE0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_givenName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAE8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_streetAddress()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAF0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_stateOrProvinceName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EAF8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_localityName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EB00);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_organizationName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EB08);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EB10);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_organizationalUnitName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EB18);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_initial()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0x2EB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_89242C4283F4DD76_CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1_6C67A52C6BBD45E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_89242C4283F4DD76_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1_6C67A52C6BBD45E0*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_89242C4283F4DD76_TOSTRING_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AppendEntry(::System::Text::StringBuilder* a1, ::Mono::Security::ASN1_6C67A52C6BBD45E0* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1_6C67A52C6BBD45E0*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_89242C4283F4DD76_APPENDENTRY_OFFSET))(a1, a2, a3);
		}

	};
}
