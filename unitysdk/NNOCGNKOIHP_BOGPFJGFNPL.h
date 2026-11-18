#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MMCKPLNGLAK;
class NNOCGNKOIHP;

#define NNOCGNKOIHP_BOGPFJGFNPL_GHJPOGEJGNA_OFFSET UNITYSDK_OFFSET(0xFD10960)
#define NNOCGNKOIHP_BOGPFJGFNPL_JJDFPKDPFGM_OFFSET UNITYSDK_OFFSET(0xFD104F0)
#define NNOCGNKOIHP_BOGPFJGFNPL__CTOR_OFFSET UNITYSDK_OFFSET(0xFD104E0)

inline static constexpr unsigned int NNOCGNKOIHP_BOGPFJGFNPL_TypeDefinitionIndex = 79148;

class NNOCGNKOIHP_BOGPFJGFNPL : public ::System::Object
{
public:
	::MMCKPLNGLAK* DFMKILICPFB; // 0x10
	::NNOCGNKOIHP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOCGNKOIHP_BOGPFJGFNPL__CTOR_OFFSET))(this);
	}

	::System::Void JJDFPKDPFGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOCGNKOIHP_BOGPFJGFNPL_JJDFPKDPFGM_OFFSET))(this);
	}

	::System::Void GHJPOGEJGNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOCGNKOIHP_BOGPFJGFNPL_GHJPOGEJGNA_OFFSET))(this);
	}
};
