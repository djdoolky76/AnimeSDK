#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIODFGELPEN;
class DOCGJEMGDLH;

#define AGEOIGDFCGM_ECNIOFPJLMJ_OFFSET UNITYSDK_OFFSET(0x16FE5880)
#define AGEOIGDFCGM_IKDBALDJBAI_OFFSET UNITYSDK_OFFSET(0x16FE5700)
#define AGEOIGDFCGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE55F0)

inline static constexpr unsigned int AGEOIGDFCGM_TypeDefinitionIndex = 68212;

class AGEOIGDFCGM : public ::System::Object
{
public:
	::BIODFGELPEN* GGBICJJADDF; // 0x10
	::DOCGJEMGDLH* BPFCAMCAMJD; // 0x18
	::System::Int32 HAABDEAADGI; // 0x20

	::System::Void _ctor(::BIODFGELPEN* MMGNFFMOOAI)
	{
		return ((::System::Void(*)(::PVOID, ::BIODFGELPEN*))((::PBYTE)hIl2Cpp + AGEOIGDFCGM__CTOR_OFFSET))(this, MMGNFFMOOAI);
	}

	::System::Void ECNIOFPJLMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOIGDFCGM_ECNIOFPJLMJ_OFFSET))(this);
	}

	::System::Void IKDBALDJBAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOIGDFCGM_IKDBALDJBAI_OFFSET))(this);
	}
};
