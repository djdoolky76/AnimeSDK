#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_CONNCJCBMNE;
class PNJDGHBEMLK;

#define FBAMLABJMKF_KJKMPMAEMNG_BBCGAMHBPLD_OFFSET UNITYSDK_OFFSET(0xF9EEF80)
#define FBAMLABJMKF_KJKMPMAEMNG__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EEF70)

inline static constexpr unsigned int FBAMLABJMKF_KJKMPMAEMNG_TypeDefinitionIndex = 78150;

class FBAMLABJMKF_KJKMPMAEMNG : public ::System::Object
{
public:
	::PNJDGHBEMLK* CDKCJAKODPN; // 0x10
	::FBAMLABJMKF_CONNCJCBMNE* EEMOEMFLABI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_KJKMPMAEMNG__CTOR_OFFSET))(this);
	}

	::System::Void BBCGAMHBPLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_KJKMPMAEMNG_BBCGAMHBPLD_OFFSET))(this);
	}
};
