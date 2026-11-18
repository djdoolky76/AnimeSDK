#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

#define BLNDFFNLNCO_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x18DA7C20)
#define BLNDFFNLNCO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA7BC0)

inline static constexpr unsigned int BLNDFFNLNCO_TypeDefinitionIndex = 41607;

class BLNDFFNLNCO : public ::GIPCMLEONLI
{
public:
	::System::Single NAIDADGNEDI; // 0x40
	::System::Single LMIODDEBANM; // 0x44

	::System::Void _ctor(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNDFFNLNCO__CTOR_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNDFFNLNCO_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}
};
