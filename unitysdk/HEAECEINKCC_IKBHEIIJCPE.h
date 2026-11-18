#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJHKEAFOAF.h"
#include "unitysdk/System/Object.h"

#define HEAECEINKCC_IKBHEIIJCPE_EJAMLMMDMMP_OFFSET UNITYSDK_OFFSET(0x14941C70)
#define HEAECEINKCC_IKBHEIIJCPE_ELJNCBFJIJM_OFFSET UNITYSDK_OFFSET(0x14941D40)
#define HEAECEINKCC_IKBHEIIJCPE__CTOR_OFFSET UNITYSDK_OFFSET(0x14941C60)

inline static constexpr unsigned int HEAECEINKCC_IKBHEIIJCPE_TypeDefinitionIndex = 64556;

class HEAECEINKCC_IKBHEIIJCPE : public ::System::Object
{
public:
	::LLJHKEAFOAF GNGJHIJKHAC; // 0x10
	::LLJHKEAFOAF OLHHLEECEHJ; // 0x20
	::System::Double CIIPCCLOHLH; // 0x30
	::System::Int32 JGDJIDCIIGE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_IKBHEIIJCPE__CTOR_OFFSET))(this);
	}

	::System::Void EJAMLMMDMMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_IKBHEIIJCPE_EJAMLMMDMMP_OFFSET))(this);
	}

	::System::Void ELJNCBFJIJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_IKBHEIIJCPE_ELJNCBFJIJM_OFFSET))(this);
	}
};
