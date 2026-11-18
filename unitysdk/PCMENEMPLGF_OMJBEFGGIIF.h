#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF_AEDOGKKIDJK;

#define PCMENEMPLGF_OMJBEFGGIIF_DAJFGOLMNIO_OFFSET UNITYSDK_OFFSET(0x14B90FA0)
#define PCMENEMPLGF_OMJBEFGGIIF__CTOR_OFFSET UNITYSDK_OFFSET(0x14B90430)

inline static constexpr unsigned int PCMENEMPLGF_OMJBEFGGIIF_TypeDefinitionIndex = 62844;

class PCMENEMPLGF_OMJBEFGGIIF : public ::System::Object
{
public:
	::PCMENEMPLGF_AEDOGKKIDJK* FGBNBFHOKAA; // 0x10
	::System::Int32 OJGEOPNFFPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OMJBEFGGIIF__CTOR_OFFSET))(this);
	}

	::System::Void DAJFGOLMNIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OMJBEFGGIIF_DAJFGOLMNIO_OFFSET))(this);
	}
};
