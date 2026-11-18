#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALGJPEBEBEG_BHCAOJNAJAC;
class DJAIIONPIPF;

#define ALGJPEBEBEG_KDHEMDIIPPO_MONMGAMBOGJ_OFFSET UNITYSDK_OFFSET(0x12D05740)
#define ALGJPEBEBEG_KDHEMDIIPPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12D05730)

inline static constexpr unsigned int ALGJPEBEBEG_KDHEMDIIPPO_TypeDefinitionIndex = 93145;

class ALGJPEBEBEG_KDHEMDIIPPO : public ::System::Object
{
public:
	::DJAIIONPIPF* DNOHELNGGLJ; // 0x10
	::ALGJPEBEBEG_BHCAOJNAJAC* CJEKDBFDGID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJPEBEBEG_KDHEMDIIPPO__CTOR_OFFSET))(this);
	}

	::System::Void MONMGAMBOGJ(::System::Boolean CGFLLPOCDJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALGJPEBEBEG_KDHEMDIIPPO_MONMGAMBOGJ_OFFSET))(this, CGFLLPOCDJM);
	}
};
