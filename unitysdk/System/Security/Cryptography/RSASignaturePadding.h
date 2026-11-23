#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RSASignaturePaddingMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BA0590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BA0530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BA0640)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_PKCS1_OFFSET UNITYSDK_OFFSET(0x3BA0790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x3BA07E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x3BA0800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BA0650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BA06B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F26BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA0760)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSASignaturePadding_TypeDefinitionIndex = 11123;

	class RSASignaturePadding : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RSASignaturePadding** StaticGet_s_pkcs1()
		{
			return (::System::Security::Cryptography::RSASignaturePadding**)Il2CppClass::FromTypeDefinitionIndex(RSASignaturePadding_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Security::Cryptography::RSASignaturePadding** StaticGet_s_pss()
		{
			return (::System::Security::Cryptography::RSASignaturePadding**)Il2CppClass::FromTypeDefinitionIndex(RSASignaturePadding_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::Security::Cryptography::RSASignaturePaddingMode _mode; // 0x10

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Security::Cryptography::RSASignaturePadding* A11D4EC92205DAEE, ::System::Security::Cryptography::RSASignaturePadding* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSASignaturePadding*, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_EQUALITY_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}

		static ::System::Security::Cryptography::RSASignaturePadding* get_Pkcs1()
		{
			return ((::System::Security::Cryptography::RSASignaturePadding*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_GET_PKCS1_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING__CCTOR_OFFSET))();
		}

		::System::Boolean Equals_1(::System::Security::Cryptography::RSASignaturePadding* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::RSASignaturePaddingMode A84D57260767D5BD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSASignaturePaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING__CTOR_1_OFFSET))(this, A84D57260767D5BD);
		}

		static ::System::Boolean op_Inequality(::System::Security::Cryptography::RSASignaturePadding* A11D4EC92205DAEE, ::System::Security::Cryptography::RSASignaturePadding* F38046B0C91E49B1)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSASignaturePadding*, ::System::Security::Cryptography::RSASignaturePadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSASIGNATUREPADDING_OP_INEQUALITY_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}
	};
}
