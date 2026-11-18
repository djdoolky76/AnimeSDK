#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDLNLNBJIJJ;
class PDDKHKKCENB;

#define GDLNLNBJIJJ_HECPMDEBHMK_MCOJMOMJBEL_OFFSET UNITYSDK_OFFSET(0x15F14D90)
#define GDLNLNBJIJJ_HECPMDEBHMK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F134C0)

inline static constexpr unsigned int GDLNLNBJIJJ_HECPMDEBHMK_TypeDefinitionIndex = 72898;

class GDLNLNBJIJJ_HECPMDEBHMK : public ::System::Object
{
public:
	::GDLNLNBJIJJ* KLHPEBKNIFB; // 0x10
	::System::Single JKNJECPCCAC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLNLNBJIJJ_HECPMDEBHMK__CTOR_OFFSET))(this);
	}

	::System::Void MCOJMOMJBEL(::PDDKHKKCENB* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PDDKHKKCENB*))((::PBYTE)hIl2Cpp + GDLNLNBJIJJ_HECPMDEBHMK_MCOJMOMJBEL_OFFSET))(this, HBNBIBADGNH);
	}
};
