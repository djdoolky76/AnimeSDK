#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

#define FAAE02C86EDE12BB_A893B466482502C2_OFFSET UNITYSDK_OFFSET(0x38A02E0)
#define FAAE02C86EDE12BB__CTOR_OFFSET UNITYSDK_OFFSET(0x389FFD0)

inline static constexpr unsigned int FAAE02C86EDE12BB_TypeDefinitionIndex = 20942;

class FAAE02C86EDE12BB : public ::System::Security::Cryptography::SymmetricAlgorithm
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAE02C86EDE12BB__CTOR_OFFSET))(this);
	}

	static ::Il2CppArray<::System::Byte>* A893B466482502C2(::Il2CppArray<::System::Byte>* AF9A63638B456161)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FAAE02C86EDE12BB_A893B466482502C2_OFFSET))(AF9A63638B456161);
	}
};
