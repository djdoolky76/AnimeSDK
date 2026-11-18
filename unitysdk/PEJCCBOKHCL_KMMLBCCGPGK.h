#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPLGICECOCO.h"

#define PEJCCBOKHCL_KMMLBCCGPGK_MDDHFHECKOL_OFFSET UNITYSDK_OFFSET(0x1949A380)
#define PEJCCBOKHCL_KMMLBCCGPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1949A370)

inline static constexpr unsigned int PEJCCBOKHCL_KMMLBCCGPGK_TypeDefinitionIndex = 72580;

class PEJCCBOKHCL_KMMLBCCGPGK : public ::System::Object
{
public:
	::System::Int32 GIAOKGFENJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KMMLBCCGPGK__CTOR_OFFSET))(this);
	}

	::System::Boolean MDDHFHECKOL(::JPLGICECOCO IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JPLGICECOCO))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_KMMLBCCGPGK_MDDHFHECKOL_OFFSET))(this, IPMMCGDMODG);
	}
};
