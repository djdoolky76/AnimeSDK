#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_1_OFFSET UNITYSDK_OFFSET(0x3BF6FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x3BF53A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODELONGNUMBER_OFFSET UNITYSDK_OFFSET(0x3BF7020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODEOID_OFFSET UNITYSDK_OFFSET(0x3BF71C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_GET_ALLOWONLYFIPSALGORITHMS_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET UNITYSDK_OFFSET(0x3BF7650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BF7D10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConfig_TypeDefinitionIndex = 11355;

	class CryptoConfig : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CryptoConfig_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>** StaticGet_algorithms()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CryptoConfig_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_AllowOnlyFipsAlgorithms()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_GET_ALLOWONLYFIPSALGORITHMS_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* EncodeLongNumber(::System::Int64 BB8C609F76620E45)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODELONGNUMBER_OFFSET))(BB8C609F76620E45);
		}

		static ::System::String* MapNameToOID(::System::String* F79B4D487F303AB2)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET))(F79B4D487F303AB2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Object* CreateFromName(::System::String* F79B4D487F303AB2, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
		{
			return ((::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET))(F79B4D487F303AB2, F0D3F87128A7C4CA);
		}

		static ::Il2CppArray<::System::Byte>* EncodeOID(::System::String* BB83557721B5F386)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODEOID_OFFSET))(BB83557721B5F386);
		}

		static ::System::Object* CreateFromName_1(::System::String* F79B4D487F303AB2)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_1_OFFSET))(F79B4D487F303AB2);
		}
	};
}
