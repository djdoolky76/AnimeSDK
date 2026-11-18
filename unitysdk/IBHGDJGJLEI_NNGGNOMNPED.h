#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_NNGGNOMNPED_HIGICLAACBD_OFFSET UNITYSDK_OFFSET(0x16A90CB0)
#define IBHGDJGJLEI_NNGGNOMNPED__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90CA0)

inline static constexpr unsigned int IBHGDJGJLEI_NNGGNOMNPED_TypeDefinitionIndex = 55788;

class IBHGDJGJLEI_NNGGNOMNPED : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_NNGGNOMNPED__CTOR_OFFSET))(this);
	}

	::System::Void HIGICLAACBD(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_NNGGNOMNPED_HIGICLAACBD_OFFSET))(this, GLAOEHCGCFO);
	}
};
