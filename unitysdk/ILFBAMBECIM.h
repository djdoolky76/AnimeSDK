#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANECFJNBJOL.h"
#include "unitysdk/MNBLIKPHDEA.h"
#include "unitysdk/Share/GridDir.h"

#define ILFBAMBECIM__CTOR_OFFSET UNITYSDK_OFFSET(0x198813D0)

inline static constexpr unsigned int ILFBAMBECIM_TypeDefinitionIndex = 75543;

class ILFBAMBECIM : public ::MNBLIKPHDEA
{
public:
	::Share::GridDir EFEJBBFGKDH; // 0x10
	::ANECFJNBJOL JMINOGAOFIL; // 0x14
	::System::Boolean MGCGDMLOHNG; // 0x24
	::System::Boolean FGAIAOHGNFJ; // 0x25

	::System::Void _ctor(::Share::GridDir DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + ILFBAMBECIM__CTOR_OFFSET))(this, DAAEHEHLLLD);
	}
};
