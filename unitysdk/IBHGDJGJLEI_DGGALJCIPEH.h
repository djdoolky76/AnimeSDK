#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_DGGALJCIPEH_IHEFMFPKEKC_OFFSET UNITYSDK_OFFSET(0x16F57A00)
#define IBHGDJGJLEI_DGGALJCIPEH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F579F0)

inline static constexpr unsigned int IBHGDJGJLEI_DGGALJCIPEH_TypeDefinitionIndex = 55774;

class IBHGDJGJLEI_DGGALJCIPEH : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DGGALJCIPEH__CTOR_OFFSET))(this);
	}

	::System::Void IHEFMFPKEKC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_DGGALJCIPEH_IHEFMFPKEKC_OFFSET))(this, GLAOEHCGCFO);
	}
};
