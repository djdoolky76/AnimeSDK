#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOFFNLFMDHN_DPDEFIDINNL;
class OAEFGCLEHHO;

#define KOFFNLFMDHN_MHCCNLGEBKA_OBDDKOBEGLE_OFFSET UNITYSDK_OFFSET(0x1791A580)
#define KOFFNLFMDHN_MHCCNLGEBKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A570)

inline static constexpr unsigned int KOFFNLFMDHN_MHCCNLGEBKA_TypeDefinitionIndex = 60120;

class KOFFNLFMDHN_MHCCNLGEBKA : public ::System::Object
{
public:
	::KOFFNLFMDHN_DPDEFIDINNL* FGBNBFHOKAA; // 0x10
	::System::Int32 HLANKLENHPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_MHCCNLGEBKA__CTOR_OFFSET))(this);
	}

	::System::Void OBDDKOBEGLE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KOFFNLFMDHN_MHCCNLGEBKA_OBDDKOBEGLE_OFFSET))(this, GLAOEHCGCFO);
	}
};
