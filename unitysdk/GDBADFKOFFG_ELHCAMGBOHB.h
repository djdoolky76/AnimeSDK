#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GDBADFKOFFG_IBHMKKCLBJO;

#define GDBADFKOFFG_ELHCAMGBOHB_EKBCCDBFIMJ_OFFSET UNITYSDK_OFFSET(0x189F3680)
#define GDBADFKOFFG_ELHCAMGBOHB__CTOR_OFFSET UNITYSDK_OFFSET(0x189F3670)

inline static constexpr unsigned int GDBADFKOFFG_ELHCAMGBOHB_TypeDefinitionIndex = 74135;

class GDBADFKOFFG_ELHCAMGBOHB : public ::System::Object
{
public:
	::GDBADFKOFFG_IBHMKKCLBJO* FGBNBFHOKAA; // 0x10
	::System::UInt32 LACJPGJJLCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_ELHCAMGBOHB__CTOR_OFFSET))(this);
	}

	::System::Void EKBCCDBFIMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_ELHCAMGBOHB_EKBCCDBFIMJ_OFFSET))(this);
	}
};
