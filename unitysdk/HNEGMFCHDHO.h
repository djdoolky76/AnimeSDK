#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCALMEHPGIK.h"
#include "unitysdk/JMLFHNIBMJO.h"

class EAKHJNIMJIL;

#define HNEGMFCHDHO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x140C1AA0)
#define HNEGMFCHDHO_GLODLPGABGG_OFFSET UNITYSDK_OFFSET(0x140C2530)
#define HNEGMFCHDHO_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x140C1AE0)
#define HNEGMFCHDHO__CTOR_OFFSET UNITYSDK_OFFSET(0x140C1AB0)

inline static constexpr unsigned int HNEGMFCHDHO_TypeDefinitionIndex = 68306;

class HNEGMFCHDHO : public ::JMLFHNIBMJO
{
public:
	::System::Boolean CFODHHMOGKE; // 0x10
	::System::Boolean APGEPGMECOI; // 0x11
	::System::Byte _padding0[0x2];
	::System::Single JGOOMLEDNFI; // 0x14
	::System::Single IPMPEEOAFMP; // 0x18
	::System::Single GLEBMIOBENK; // 0x1C
	::System::Single APBKDGLEHFB; // 0x20
	::System::Single JCNDJBOEDAO; // 0x24

	::System::Void _ctor(::System::Single DKOCBAIALJD, ::System::Single FOCGLPGBCHM, ::System::Single LOLPBBFCGKP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HNEGMFCHDHO__CTOR_OFFSET))(this, DKOCBAIALJD, FOCGLPGBCHM, LOLPBBFCGKP);
	}

	::CCALMEHPGIK BKNKCFDBLGH()
	{
		return ((::CCALMEHPGIK(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEGMFCHDHO_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + HNEGMFCHDHO_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}

	::System::Void GLODLPGABGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEGMFCHDHO_GLODLPGABGG_OFFSET))(this);
	}
};
