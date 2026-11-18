#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_EJMDDKFEIGM_ECNAIGIHPDA_OFFSET UNITYSDK_OFFSET(0x194B2B70)
#define PLCNOAKLOIH_EJMDDKFEIGM_LIJHMJKBKNC_OFFSET UNITYSDK_OFFSET(0x194B2B80)
#define PLCNOAKLOIH_EJMDDKFEIGM__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2B60)

inline static constexpr unsigned int PLCNOAKLOIH_EJMDDKFEIGM_TypeDefinitionIndex = 89238;

class PLCNOAKLOIH_EJMDDKFEIGM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_EJMDDKFEIGM__CTOR_OFFSET))(this);
	}

	::System::Void ECNAIGIHPDA(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_EJMDDKFEIGM_ECNAIGIHPDA_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void LIJHMJKBKNC(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_EJMDDKFEIGM_LIJHMJKBKNC_OFFSET))(this, GLAOEHCGCFO);
	}
};
