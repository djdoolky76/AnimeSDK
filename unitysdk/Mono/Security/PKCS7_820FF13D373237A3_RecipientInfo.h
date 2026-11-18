#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace System { class String; }

#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x1FFCEA10)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1FFCE810)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_OID_OFFSET UNITYSDK_OFFSET(0x1FFCE800)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_SERIAL_OFFSET UNITYSDK_OFFSET(0x1FFCEA20)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1FFCE910)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1FFCEB20)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFCE600)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFCE5F0)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_820FF13D373237A3_RecipientInfo_TypeDefinitionIndex = 2278;

	class PKCS7_820FF13D373237A3_RecipientInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _serial; // 0x10
		::System::String* _oid; // 0x18
		::System::String* _issuer; // 0x20
		::Il2CppArray<::System::Byte>* _key; // 0x28
		::Il2CppArray<::System::Byte>* _ski; // 0x30
		::System::Int32 _version; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Security::ASN1_B704B12AF883B8E0* data)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO__CTOR_1_OFFSET))(this, data);
		}

		::System::String* get_Oid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_OID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_KEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SubjectKeyIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::System::String* get_Issuer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_ISSUER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Serial()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_SERIAL_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_RECIPIENTINFO_GET_VERSION_OFFSET))(this);
		}
	};
}
