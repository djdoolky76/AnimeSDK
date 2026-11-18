#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IBHGDJGJLEI_HHMCPBEEHDG_ACNFCILHIAG_OFFSET UNITYSDK_OFFSET(0xF835A20)
#define IBHGDJGJLEI_HHMCPBEEHDG_NFMFAIPCLMB_OFFSET UNITYSDK_OFFSET(0xF835A10)
#define IBHGDJGJLEI_HHMCPBEEHDG__CTOR_OFFSET UNITYSDK_OFFSET(0xF835A00)

inline static constexpr unsigned int IBHGDJGJLEI_HHMCPBEEHDG_TypeDefinitionIndex = 55751;

class IBHGDJGJLEI_HHMCPBEEHDG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HHMCPBEEHDG__CTOR_OFFSET))(this);
	}

	::System::Void NFMFAIPCLMB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HHMCPBEEHDG_NFMFAIPCLMB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void ACNFCILHIAG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_HHMCPBEEHDG_ACNFCILHIAG_OFFSET))(this, GLAOEHCGCFO);
	}
};
