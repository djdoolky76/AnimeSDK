#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_OEHPGGMKDIF_OJECBMAFDHH_OFFSET UNITYSDK_OFFSET(0x16097810)
#define IBHGDJGJLEI_OEHPGGMKDIF__CTOR_OFFSET UNITYSDK_OFFSET(0x16097780)

inline static constexpr unsigned int IBHGDJGJLEI_OEHPGGMKDIF_TypeDefinitionIndex = 55765;

class IBHGDJGJLEI_OEHPGGMKDIF : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OEHPGGMKDIF__CTOR_OFFSET))(this);
	}

	::System::Void OJECBMAFDHH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_OEHPGGMKDIF_OJECBMAFDHH_OFFSET))(this, GLAOEHCGCFO);
	}
};
