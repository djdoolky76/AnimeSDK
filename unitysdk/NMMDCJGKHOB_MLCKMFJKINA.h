#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_MLCKMFJKINA_EOPJICMMCPF_OFFSET UNITYSDK_OFFSET(0x115AB990)
#define NMMDCJGKHOB_MLCKMFJKINA_LNKNBLBFACG_OFFSET UNITYSDK_OFFSET(0x115AB980)
#define NMMDCJGKHOB_MLCKMFJKINA__CTOR_OFFSET UNITYSDK_OFFSET(0x115AB970)

inline static constexpr unsigned int NMMDCJGKHOB_MLCKMFJKINA_TypeDefinitionIndex = 54828;

class NMMDCJGKHOB_MLCKMFJKINA : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MLCKMFJKINA__CTOR_OFFSET))(this);
	}

	::System::Void LNKNBLBFACG(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MLCKMFJKINA_LNKNBLBFACG_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EOPJICMMCPF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MLCKMFJKINA_EOPJICMMCPF_OFFSET))(this, GLAOEHCGCFO);
	}
};
