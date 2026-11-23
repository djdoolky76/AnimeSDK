#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET UNITYSDK_OFFSET(0x3B34F60)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET UNITYSDK_OFFSET(0x3B34F70)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEXCHAR_OFFSET UNITYSDK_OFFSET(0x3B35150)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEX_OFFSET UNITYSDK_OFFSET(0x3B351E0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_GETPARAMETERSFROMCAPIPRIVATEKEYBLOB_OFFSET UNITYSDK_OFFSET(0x3B35460)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET UNITYSDK_OFFSET(0x3B35BD0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET UNITYSDK_OFFSET(0x3B35D00)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET UNITYSDK_OFFSET(0x3B35D00)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET UNITYSDK_OFFSET(0x3B35DB0)
#define MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConvert_TypeDefinitionIndex = 19350;

	class CryptoConvert : public ::System::Object
	{
	public:
		static ::System::String* ToHex(::Il2CppArray<::System::Byte>* AF4717A1A80FD60F)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOHEX_OFFSET))(AF4717A1A80FD60F);
		}

		static ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::Il2CppArray<::System::Byte>* BC7884E820C99D17, ::System::Int32 BE9B161B3F3C2937)
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_GETPARAMETERSFROMCAPIPRIVATEKEYBLOB_OFFSET))(BC7884E820C99D17, BE9B161B3F3C2937);
		}

		static ::System::UInt32 ToUInt32LE(::Il2CppArray<::System::Byte>* E83E519C5C42896F, ::System::Int32 BE9B161B3F3C2937)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOUINT32LE_OFFSET))(E83E519C5C42896F, BE9B161B3F3C2937);
		}

		static ::System::Int32 ToInt32LE(::Il2CppArray<::System::Byte>* E83E519C5C42896F, ::System::Int32 BE9B161B3F3C2937)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TOINT32LE_OFFSET))(E83E519C5C42896F, BE9B161B3F3C2937);
		}

		static ::Il2CppArray<::System::Byte>* Trim(::Il2CppArray<::System::Byte>* EDF8D5B13A3EE433)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_TRIM_OFFSET))(EDF8D5B13A3EE433);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Il2CppArray<::System::Byte>* BC7884E820C99D17, ::System::Int32 BE9B161B3F3C2937)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_OFFSET))(BC7884E820C99D17, BE9B161B3F3C2937);
		}

		static ::Il2CppArray<::System::Byte>* FromHex(::System::String* BF949FAD0C62350F)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEX_OFFSET))(BF949FAD0C62350F);
		}

		static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob_1(::Il2CppArray<::System::Byte>* BC7884E820C99D17)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMCAPIPRIVATEKEYBLOB_1_OFFSET))(BC7884E820C99D17);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT__CTOR_OFFSET))(this);
		}

		static ::System::Byte FromHexChar(::System::Char A97F5B807CC19082)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_CRYPTOCONVERT_FROMHEXCHAR_OFFSET))(A97F5B807CC19082);
		}
	};
}
