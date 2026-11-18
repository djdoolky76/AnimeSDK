#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFIAMAJCAOA.h"
#include "unitysdk/System/Object.h"

class AEJGPNCJHBG_KNADFKDDHHH;
class PNIHGNDLMIN;

#define AEJGPNCJHBG_LAMGJLLNDLN_HOOBCJIKLMA_OFFSET UNITYSDK_OFFSET(0x134AD850)
#define AEJGPNCJHBG_LAMGJLLNDLN__CTOR_OFFSET UNITYSDK_OFFSET(0x134AD840)

inline static constexpr unsigned int AEJGPNCJHBG_LAMGJLLNDLN_TypeDefinitionIndex = 75482;

class AEJGPNCJHBG_LAMGJLLNDLN : public ::System::Object
{
public:
	::AEJGPNCJHBG_KNADFKDDHHH* FGBNBFHOKAA; // 0x10
	::HFIAMAJCAOA OIFAEAPNOHM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_LAMGJLLNDLN__CTOR_OFFSET))(this);
	}

	::System::Boolean HOOBCJIKLMA(::PNIHGNDLMIN* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_LAMGJLLNDLN_HOOBCJIKLMA_OFFSET))(this, LJBPECKCCEA);
	}
};
