#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class PKCS1MaskGenerationMethod; }
namespace System::Security::Cryptography { class RNGCryptoServiceProvider; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET UNITYSDK_OFFSET(0x3CE3180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x3CE31E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_1_OFFSET UNITYSDK_OFFSET(0x3CE36B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET UNITYSDK_OFFSET(0x3CE36E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET UNITYSDK_OFFSET(0x3CE3880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET UNITYSDK_OFFSET(0x3CE3960)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x3CE3330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x3CE3380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x3CE33D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x3CE3540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET UNITYSDK_OFFSET(0x3CE3AE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x3CE3BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET UNITYSDK_OFFSET(0x3CE4140)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET UNITYSDK_OFFSET(0x1678550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x3CE3CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x3CE3D50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET UNITYSDK_OFFSET(0x3CE3FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET UNITYSDK_OFFSET(0x3CE40C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x16A4160)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 10637;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RNGCryptoServiceProvider** StaticGet__rng()
		{
			return (::System::Security::Cryptography::RNGCryptoServiceProvider**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void QuadWordToBigEndian(::Il2CppArray<::System::Byte>* A6B5840567522F01, ::Il2CppArray<::System::UInt64>* BB8C609F76620E45, ::System::Int32 F92B63DEB63D2101)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET))(A6B5840567522F01, BB8C609F76620E45, F92B63DEB63D2101);
		}

		static ::System::Boolean DoesRsaKeyOverride(::System::Security::Cryptography::RSA* A6873E16D8B3F7D3, ::System::String* FC1D29B360A1527E, ::Il2CppArray<::System::Type*>* A3CCAFE1A342B27D)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET))(A6873E16D8B3F7D3, FC1D29B360A1527E, A3CCAFE1A342B27D);
		}

		static ::System::String* DiscardWhiteSpaces(::System::String* FB1D6547F3F5F0EF, ::System::Int32 B0A56A8B8381106F, ::System::Int32 E0526D776D4634F5)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET))(FB1D6547F3F5F0EF, B0A56A8B8381106F, E0526D776D4634F5);
		}

		static ::System::Boolean _ProduceLegacyHmacValues()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET))();
		}

		static ::System::Void DWORDToLittleEndian(::Il2CppArray<::System::Byte>* A6B5840567522F01, ::Il2CppArray<::System::UInt32>* BB8C609F76620E45, ::System::Int32 F92B63DEB63D2101)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET))(A6B5840567522F01, BB8C609F76620E45, F92B63DEB63D2101);
		}

		static ::Il2CppArray<::System::Byte>* FixupKeyParity(::Il2CppArray<::System::Byte>* A5C299C395D3E1B2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET))(A5C299C395D3E1B2);
		}

		static ::Il2CppArray<::System::Byte>* RsaOaepEncrypt(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* BA847E394ECD2179, ::System::Security::Cryptography::RandomNumberGenerator* E3CA290995975D9C, ::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, BA847E394ECD2179, E3CA290995975D9C, F220A2D27F7C6B6C);
		}

		static ::System::Void DWORDToBigEndian(::Il2CppArray<::System::Byte>* A6B5840567522F01, ::Il2CppArray<::System::UInt32>* BB8C609F76620E45, ::System::Int32 F92B63DEB63D2101)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET))(A6B5840567522F01, BB8C609F76620E45, F92B63DEB63D2101);
		}

		static ::System::Void DWORDFromLittleEndian(::PVOID BB8C609F76620E45, ::System::Int32 F92B63DEB63D2101, ::PVOID A6B5840567522F01)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET))(BB8C609F76620E45, F92B63DEB63D2101, A6B5840567522F01);
		}

		static ::System::Void DWORDFromBigEndian(::PVOID BB8C609F76620E45, ::System::Int32 F92B63DEB63D2101, ::PVOID A6B5840567522F01)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET))(BB8C609F76620E45, F92B63DEB63D2101, A6B5840567522F01);
		}

		static ::Il2CppArray<::System::Byte>* ConvertIntToByteArray(::System::Int32 EEB36D8CCBB662F7)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET))(EEB36D8CCBB662F7);
		}

		static ::System::Boolean DoesRsaKeyOverrideSlowPath(::System::Type* BBCFEC7DB309E927, ::System::String* FC1D29B360A1527E, ::Il2CppArray<::System::Type*>* A3CCAFE1A342B27D)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET))(BBCFEC7DB309E927, FC1D29B360A1527E, A3CCAFE1A342B27D);
		}

		static ::System::Int32 ConvertByteArrayToInt(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET))(AF4717A1A80FD60F);
		}

		static ::System::Boolean HasAlgorithm(::System::Int32 AFF23BD8663F12FC, ::System::Int32 FA16943FB6D9A82A)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET))(AFF23BD8663F12FC, FA16943FB6D9A82A);
		}

		static ::Il2CppArray<::System::Byte>* GenerateRandom(::System::Int32 E8D5C504FEE1DCC0)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET))(E8D5C504FEE1DCC0);
		}

		static ::System::Void QuadWordFromBigEndian(::PVOID BB8C609F76620E45, ::System::Int32 F92B63DEB63D2101, ::PVOID A6B5840567522F01)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET))(BB8C609F76620E45, F92B63DEB63D2101, A6B5840567522F01);
		}

		static ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator()
		{
			return ((::System::Security::Cryptography::RNGCryptoServiceProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET))();
		}

		static ::System::String* DiscardWhiteSpaces_1(::System::String* FB1D6547F3F5F0EF)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_1_OFFSET))(FB1D6547F3F5F0EF);
		}

		static ::Il2CppArray<::System::Byte>* RsaOaepDecrypt(::System::Security::Cryptography::RSA* FC17E705F01EA4DC, ::System::Security::Cryptography::HashAlgorithm* ED6B739E3493B1E8, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* BA847E394ECD2179, ::Il2CppArray<::System::Byte>* E8EC58F95CB6DEDE)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET))(FC17E705F01EA4DC, ED6B739E3493B1E8, BA847E394ECD2179, E8EC58F95CB6DEDE);
		}
	};
}
