#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEKHMAPHEJH.h"

#define LIFMGHPLLPK_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x11F14770)
#define LIFMGHPLLPK_OKKNACFMDOA_OFFSET UNITYSDK_OFFSET(0x11F14C00)
#define LIFMGHPLLPK__CTOR_OFFSET UNITYSDK_OFFSET(0x11F14760)

inline static constexpr unsigned int LIFMGHPLLPK_TypeDefinitionIndex = 47101;

class LIFMGHPLLPK : public ::OEKHMAPHEJH
{
public:
	::System::Int32 DKIJFGOJIBC; // 0x20

	::System::Void _ctor(::System::Int32 AMENMGOBNON, ::System::Int32 JDJDJGBLBJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LIFMGHPLLPK__CTOR_OFFSET))(this, AMENMGOBNON, JDJDJGBLBJL);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGHPLLPK_DLJEAGFGEBN_OFFSET))(this);
	}

	::System::Void OKKNACFMDOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIFMGHPLLPK_OKKNACFMDOA_OFFSET))(this);
	}
};
