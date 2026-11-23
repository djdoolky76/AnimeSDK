#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/KeyedHashAlgorithm.h"

namespace System::Security::Cryptography { class CryptoStream; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class TailStream; }
namespace System::Security::Cryptography { class TripleDES; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3D065B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHCORE_OFFSET UNITYSDK_OFFSET(0x3D06650)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x3D06810)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x3D069A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES__CTOR_OFFSET UNITYSDK_OFFSET(0x3D069C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MACTripleDES_TypeDefinitionIndex = 10855;

	class MACTripleDES : public ::System::Security::Cryptography::KeyedHashAlgorithm
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* m_encryptor; // 0x30
		::System::Security::Cryptography::CryptoStream* _cs; // 0x38
		::System::Security::Cryptography::TailStream* _ts; // 0x40
		::System::Int32 m_bytesPerBlock; // 0x48
		::System::Byte _padding0[0x4];
		::System::Security::Cryptography::TripleDES* des; // 0x50

		::Il2CppArray<::System::Byte>* HashFinal()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHFINAL_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES__CTOR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean FB4A1BD5C4242BE9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_DISPOSE_OFFSET))(this, FB4A1BD5C4242BE9);
		}

		::System::Void HashCore(::Il2CppArray<::System::Byte>* F0C4E1E3B7BC865D, ::System::Int32 A985F8C5DF08C68A, ::System::Int32 B1F2419A701C8F03)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_HASHCORE_OFFSET))(this, F0C4E1E3B7BC865D, A985F8C5DF08C68A, B1F2419A701C8F03);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MACTRIPLEDES_INITIALIZE_OFFSET))(this);
		}
	};
}
