#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1752E2D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1752F1E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1752F2D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1752F1F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1752F2E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET UNITYSDK_OFFSET(0x1752F440)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RandomNumberGenerator_TypeDefinitionIndex = 1038;

	class RandomNumberGenerator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* Create()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void GetBytes_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETBYTES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetNonZeroBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RANDOMNUMBERGENERATOR_GETNONZEROBYTES_OFFSET))(this, a1);
		}

	};
}
