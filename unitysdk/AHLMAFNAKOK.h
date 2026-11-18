#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PJIAEJICFAA;

#define AHLMAFNAKOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x727520)
#define AHLMAFNAKOK__CTOR_OFFSET UNITYSDK_OFFSET(0x727500)

inline static constexpr unsigned int AHLMAFNAKOK_TypeDefinitionIndex = 75499;

struct alignas(8) AHLMAFNAKOK
{
	::PJIAEJICFAA* MNCACPLNJKO; // 0x10
	::System::Boolean ANDIDJNLNCG; // 0x18

	::System::Void _ctor(::PJIAEJICFAA* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::PJIAEJICFAA*))((::PBYTE)hIl2Cpp + AHLMAFNAKOK__CTOR_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLMAFNAKOK_DISPOSE_OFFSET))(this);
	}
};
