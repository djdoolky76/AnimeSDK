#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Security { class ASN1_6C67A52C6BBD45E0; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D2C30)
#define MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_DECODE_OFFSET UNITYSDK_OFFSET(0x1D1D3050)
#define MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D1D3060)
#define MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D1D31A0)
#define MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D1D3960)
#define MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1D1D3230)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509Extension_B704B12AF883B8E0_TypeDefinitionIndex = 2270;

	class X509Extension_B704B12AF883B8E0 : public ::System::Object
	{
	public:
		::System::String* extnOid; // 0x10
		::Mono::Security::ASN1_6C67A52C6BBD45E0* extnValue; // 0x18
		::System::Boolean extnCritical; // 0x20
		::System::Void _ctor(::Mono::Security::ASN1_6C67A52C6BBD45E0* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_6C67A52C6BBD45E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_CTOR_OFFSET))(this, a1);
		}

		::System::Void Decode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_DECODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteLine(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_WRITELINE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509EXTENSION_B704B12AF883B8E0_TOSTRING_OFFSET))(this);
		}

	};
}
