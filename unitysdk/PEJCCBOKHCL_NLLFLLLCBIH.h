#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class String; }

#define PEJCCBOKHCL_NLLFLLLCBIH_DGHALPJAEKP_OFFSET UNITYSDK_OFFSET(0x1A7EDBC0)
#define PEJCCBOKHCL_NLLFLLLCBIH_MKNJEBLHILE_OFFSET UNITYSDK_OFFSET(0x1A7EDDF0)
#define PEJCCBOKHCL_NLLFLLLCBIH_PFGFAPAOBFB_OFFSET UNITYSDK_OFFSET(0x1A7EDBB0)
#define PEJCCBOKHCL_NLLFLLLCBIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EDBA0)

inline static constexpr unsigned int PEJCCBOKHCL_NLLFLLLCBIH_TypeDefinitionIndex = 72585;

class PEJCCBOKHCL_NLLFLLLCBIH : public ::System::Object
{
public:
	::System::String* HFONKKCIEBH; // 0x10
	::MoleMole::EntityHandle HPADNAEINPK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NLLFLLLCBIH__CTOR_OFFSET))(this);
	}

	::System::Void PFGFAPAOBFB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NLLFLLLCBIH_PFGFAPAOBFB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MKNJEBLHILE(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NLLFLLLCBIH_MKNJEBLHILE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void DGHALPJAEKP(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NLLFLLLCBIH_DGHALPJAEKP_OFFSET))(this, GLAOEHCGCFO);
	}
};
