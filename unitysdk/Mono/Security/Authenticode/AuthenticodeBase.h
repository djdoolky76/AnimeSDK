#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class FileStream; }
namespace System::Security::Cryptography { class HashAlgorithm; }

#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1FEF26E0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETHASH_OFFSET UNITYSDK_OFFSET(0x1FEF2AB0)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETSECURITYENTRY_OFFSET UNITYSDK_OFFSET(0x1FEF2980)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_COFFSYMBOLTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1FEF2600)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_PEOFFSET_OFFSET UNITYSDK_OFFSET(0x1FEF2510)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_SECURITYOFFSET_OFFSET UNITYSDK_OFFSET(0x1FEF2620)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_HASHFILE_OFFSET UNITYSDK_OFFSET(0x1FEF3040)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_OPEN_OFFSET UNITYSDK_OFFSET(0x1FEF2640)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_PROCESSFIRSTBLOCK_OFFSET UNITYSDK_OFFSET(0x1FEF2710)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_READFIRSTBLOCK_OFFSET UNITYSDK_OFFSET(0x1FEF2530)
#define MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEF24D0)

namespace Mono::Security::Authenticode
{
	inline static constexpr unsigned int AuthenticodeBase_TypeDefinitionIndex = 2474;

	class AuthenticodeBase : public ::System::Object
	{
	public:
		// static const ::System::String* spcIndirectDataContext; // 0x0
		::Il2CppArray<::System::Byte>* fileblock; // 0x10
		::System::IO::FileStream* fs; // 0x18
		::System::Int32 dirSecurityOffset; // 0x20
		::System::Int32 dirSecuritySize; // 0x24
		::System::Int32 peOffset; // 0x28
		::System::Int32 blockLength; // 0x2C
		::System::Int32 coffSymbolTableOffset; // 0x30
		::System::Int32 blockNo; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PEOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_PEOFFSET_OFFSET))(this);
		}

		::System::Int32 get_CoffSymbolTableOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_COFFSYMBOLTABLEOFFSET_OFFSET))(this);
		}

		::System::Int32 get_SecurityOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GET_SECURITYOFFSET_OFFSET))(this);
		}

		::System::Void Open(::System::String* filename)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_OPEN_OFFSET))(this, filename);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_CLOSE_OFFSET))(this);
		}

		::System::Void ReadFirstBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_READFIRSTBLOCK_OFFSET))(this);
		}

		::System::Int32 ProcessFirstBlock()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_PROCESSFIRSTBLOCK_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetSecurityEntry()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETSECURITYENTRY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetHash(::System::Security::Cryptography::HashAlgorithm* hash)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Security::Cryptography::HashAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_GETHASH_OFFSET))(this, hash);
		}

		::Il2CppArray<::System::Byte>* HashFile(::System::String* fileName, ::System::String* hashName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_AUTHENTICODE_AUTHENTICODEBASE_HASHFILE_OFFSET))(this, fileName, hashName);
		}
	};
}
