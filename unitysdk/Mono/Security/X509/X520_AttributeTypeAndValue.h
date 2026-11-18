#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace System { class String; }

#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETASN1_1_OFFSET UNITYSDK_OFFSET(0x1E9C00F0)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETASN1_OFFSET UNITYSDK_OFFSET(0x1E9C0100)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1E9C0760)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E9C0740)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1E9C00E0)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E9C0020)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_SELECTBESTENCODING_OFFSET UNITYSDK_OFFSET(0x1E9C0640)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E9C0030)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9C0010)
#define MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0000)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X520_AttributeTypeAndValue_TypeDefinitionIndex = 2308;

	class X520_AttributeTypeAndValue : public ::System::Object
	{
	public:
		::System::String* attrValue; // 0x10
		::System::String* oid; // 0x18
		::System::Int32 upperBound; // 0x20
		::System::Byte encoding; // 0x24

		::System::Void _ctor(::System::String* oid, ::System::Int32 upperBound)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE__CTOR_OFFSET))(this, oid, upperBound);
		}

		::System::Void _ctor_1(::System::String* oid, ::System::Int32 upperBound, ::System::Byte encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE__CTOR_1_OFFSET))(this, oid, upperBound, encoding);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_SET_VALUE_OFFSET))(this, value);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* get_ASN1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* GetASN1(::System::Byte encoding)
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETASN1_OFFSET))(this, encoding);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* GetASN1_1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETASN1_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes(::System::Byte encoding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETBYTES_OFFSET))(this, encoding);
		}

		::Il2CppArray<::System::Byte>* GetBytes_1()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_GETBYTES_1_OFFSET))(this);
		}

		::System::Byte SelectBestEncoding()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X520_ATTRIBUTETYPEANDVALUE_SELECTBESTENCODING_OFFSET))(this);
		}
	};
}
