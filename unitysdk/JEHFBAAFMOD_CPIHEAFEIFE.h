#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEHFBAAFMOD;

#define JEHFBAAFMOD_CPIHEAFEIFE_JCIBJADOCKM_OFFSET UNITYSDK_OFFSET(0x187328E0)
#define JEHFBAAFMOD_CPIHEAFEIFE_MMCLAGPMEFL_OFFSET UNITYSDK_OFFSET(0x187327E0)
#define JEHFBAAFMOD_CPIHEAFEIFE_NHCBNKEAJME_OFFSET UNITYSDK_OFFSET(0x18732850)
#define JEHFBAAFMOD_CPIHEAFEIFE_OKKFDELKLKJ_OFFSET UNITYSDK_OFFSET(0x18732950)
#define JEHFBAAFMOD_CPIHEAFEIFE__CTOR_OFFSET UNITYSDK_OFFSET(0x187327D0)

inline static constexpr unsigned int JEHFBAAFMOD_CPIHEAFEIFE_TypeDefinitionIndex = 45786;

class JEHFBAAFMOD_CPIHEAFEIFE : public ::System::Object
{
public:
	::JEHFBAAFMOD* KLHPEBKNIFB; // 0x10
	::System::Boolean DNMMHFFMEDK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFBAAFMOD_CPIHEAFEIFE__CTOR_OFFSET))(this);
	}

	::System::Void MMCLAGPMEFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFBAAFMOD_CPIHEAFEIFE_MMCLAGPMEFL_OFFSET))(this);
	}

	::System::Void NHCBNKEAJME(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEHFBAAFMOD_CPIHEAFEIFE_NHCBNKEAJME_OFFSET))(this, CAAFEGLOALC);
	}

	::System::Void JCIBJADOCKM(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEHFBAAFMOD_CPIHEAFEIFE_JCIBJADOCKM_OFFSET))(this, CAAFEGLOALC);
	}

	::System::Void OKKFDELKLKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHFBAAFMOD_CPIHEAFEIFE_OKKFDELKLKJ_OFFSET))(this);
	}
};
