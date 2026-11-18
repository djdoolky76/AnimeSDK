#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JDOLCBBOINH.h"

#define IBEBNCBDNMC_PKKKKPNFOHK_FOPAOCNIMIE_OFFSET UNITYSDK_OFFSET(0x15BF2CD0)
#define IBEBNCBDNMC_PKKKKPNFOHK__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF2CC0)

inline static constexpr unsigned int IBEBNCBDNMC_PKKKKPNFOHK_TypeDefinitionIndex = 45415;

class IBEBNCBDNMC_PKKKKPNFOHK : public ::System::Object
{
public:
	::System::Int32 JHIGPMJNKGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_PKKKKPNFOHK__CTOR_OFFSET))(this);
	}

	::System::Boolean FOPAOCNIMIE(::JDOLCBBOINH GNHEHOMMHPB)
	{
		return ((::System::Boolean(*)(::PVOID, ::JDOLCBBOINH))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_PKKKKPNFOHK_FOPAOCNIMIE_OFFSET))(this, GNHEHOMMHPB);
	}
};
