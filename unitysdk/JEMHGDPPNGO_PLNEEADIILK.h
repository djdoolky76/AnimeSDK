#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEMHGDPPNGO;

#define JEMHGDPPNGO_PLNEEADIILK_DKIGGMKGEKN_OFFSET UNITYSDK_OFFSET(0x1980F000)
#define JEMHGDPPNGO_PLNEEADIILK__CTOR_OFFSET UNITYSDK_OFFSET(0x1980EFF0)

inline static constexpr unsigned int JEMHGDPPNGO_PLNEEADIILK_TypeDefinitionIndex = 91875;

class JEMHGDPPNGO_PLNEEADIILK : public ::System::Object
{
public:
	::JEMHGDPPNGO* KLHPEBKNIFB; // 0x10
	::System::Int32 EODPIGHEGGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMHGDPPNGO_PLNEEADIILK__CTOR_OFFSET))(this);
	}

	::System::Void DKIGGMKGEKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMHGDPPNGO_PLNEEADIILK_DKIGGMKGEKN_OFFSET))(this);
	}
};
