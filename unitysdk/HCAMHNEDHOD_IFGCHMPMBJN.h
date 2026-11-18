#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCAMHNEDHOD;
class NLAFBCGOIIA;

#define HCAMHNEDHOD_IFGCHMPMBJN_PJOODGBPFGG_OFFSET UNITYSDK_OFFSET(0x15D96FA0)
#define HCAMHNEDHOD_IFGCHMPMBJN__CTOR_OFFSET UNITYSDK_OFFSET(0x15D96A00)

inline static constexpr unsigned int HCAMHNEDHOD_IFGCHMPMBJN_TypeDefinitionIndex = 61440;

class HCAMHNEDHOD_IFGCHMPMBJN : public ::System::Object
{
public:
	::NLAFBCGOIIA* NEJJNEOKIGI; // 0x10
	::HCAMHNEDHOD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAMHNEDHOD_IFGCHMPMBJN__CTOR_OFFSET))(this);
	}

	::System::Void PJOODGBPFGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAMHNEDHOD_IFGCHMPMBJN_PJOODGBPFGG_OFFSET))(this);
	}
};
