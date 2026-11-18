#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define LPJHHHCOLMO_HACAACPCAFJ_HEHELBMMMJI_OFFSET UNITYSDK_OFFSET(0x125A4470)
#define LPJHHHCOLMO_HACAACPCAFJ_OCPOEJFFPPM_OFFSET UNITYSDK_OFFSET(0x125A4480)
#define LPJHHHCOLMO_HACAACPCAFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x125A4460)

inline static constexpr unsigned int LPJHHHCOLMO_HACAACPCAFJ_TypeDefinitionIndex = 46644;

class LPJHHHCOLMO_HACAACPCAFJ : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* AFKOOINGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_HACAACPCAFJ__CTOR_OFFSET))(this);
	}

	::System::Void HEHELBMMMJI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_HACAACPCAFJ_HEHELBMMMJI_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void OCPOEJFFPPM(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_HACAACPCAFJ_OCPOEJFFPPM_OFFSET))(this, JMFEPDAHBED);
	}
};
