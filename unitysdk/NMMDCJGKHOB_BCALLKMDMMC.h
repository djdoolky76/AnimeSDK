#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_BCALLKMDMMC_IIDKAIJFJOL_OFFSET UNITYSDK_OFFSET(0x105CD4A0)
#define NMMDCJGKHOB_BCALLKMDMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x105CD490)

inline static constexpr unsigned int NMMDCJGKHOB_BCALLKMDMMC_TypeDefinitionIndex = 54810;

class NMMDCJGKHOB_BCALLKMDMMC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_BCALLKMDMMC__CTOR_OFFSET))(this);
	}

	::System::Void IIDKAIJFJOL(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_BCALLKMDMMC_IIDKAIJFJOL_OFFSET))(this, GLAOEHCGCFO);
	}
};
