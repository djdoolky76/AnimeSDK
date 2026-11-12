#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Security { class ASN1; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET UNITYSDK_OFFSET(0x1D21A360)
#define MONO_SECURITY_X509_X501_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D21B970)
#define MONO_SECURITY_X509_X501_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D21B630)
#define MONO_SECURITY_X509_X501_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D21A130)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X501_TypeDefinitionIndex = 57;

	class X501 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_domainComponent()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC670);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_organizationName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC678);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_dnQualifier()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC680);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_organizationalUnitName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC688);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_countryName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC690);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_initial()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC698);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_email()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6A0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_surname()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6A8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_givenName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6B0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_stateOrProvinceName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6B8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_commonName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6C0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_localityName()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6C8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_userid()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6D0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_streetAddress()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6D8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_title()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("Mono.Security.X509", "X501")->GetStaticField(0xC6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::Mono::Security::ASN1* a1)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_OFFSET))(a1);
		}

		static ::System::String* ToString_1(::Mono::Security::ASN1* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::Mono::Security::ASN1*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_TOSTRING_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AppendEntry(::System::Text::StringBuilder* a1, ::Mono::Security::ASN1* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X501_APPENDENTRY_OFFSET))(a1, a2, a3);
		}

	};
}
