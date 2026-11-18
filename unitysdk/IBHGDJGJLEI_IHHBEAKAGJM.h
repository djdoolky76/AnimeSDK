#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IBHGDJGJLEI_IHHBEAKAGJM_IPOCPLLBLHF_OFFSET UNITYSDK_OFFSET(0x1A3944E0)
#define IBHGDJGJLEI_IHHBEAKAGJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3944D0)

inline static constexpr unsigned int IBHGDJGJLEI_IHHBEAKAGJM_TypeDefinitionIndex = 55783;

class IBHGDJGJLEI_IHHBEAKAGJM : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EDNJGMKPFHG; // 0x10
	::System::Boolean CLHNJHFOHFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IHHBEAKAGJM__CTOR_OFFSET))(this);
	}

	::System::Void IPOCPLLBLHF(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBHGDJGJLEI_IHHBEAKAGJM_IPOCPLLBLHF_OFFSET))(this, GLAOEHCGCFO);
	}
};
