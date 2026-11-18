#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJHKAOBCFNK;
class GPPMPHICDEA_LOOBKOAAMEK;

#define GPPMPHICDEA_HACPFPCFNLI_JJLKOOKGPIB_OFFSET UNITYSDK_OFFSET(0x16F1A860)
#define GPPMPHICDEA_HACPFPCFNLI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1A850)

inline static constexpr unsigned int GPPMPHICDEA_HACPFPCFNLI_TypeDefinitionIndex = 42625;

class GPPMPHICDEA_HACPFPCFNLI : public ::System::Object
{
public:
	::GPPMPHICDEA_LOOBKOAAMEK* FGBNBFHOKAA; // 0x10
	::EJHKAOBCFNK* GDBNBMINFBG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HACPFPCFNLI__CTOR_OFFSET))(this);
	}

	::System::Void JJLKOOKGPIB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HACPFPCFNLI_JJLKOOKGPIB_OFFSET))(this);
	}
};
