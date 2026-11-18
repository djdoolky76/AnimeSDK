#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCALMEHPGIK.h"
#include "unitysdk/JMLFHNIBMJO.h"

class EAKHJNIMJIL;

#define DIGJNPNGJIH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x15A47B00)
#define DIGJNPNGJIH_MBJFAHEBJDA_OFFSET UNITYSDK_OFFSET(0x15A47B10)
#define DIGJNPNGJIH__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47CA0)

inline static constexpr unsigned int DIGJNPNGJIH_TypeDefinitionIndex = 43200;

class DIGJNPNGJIH : public ::JMLFHNIBMJO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGJNPNGJIH__CTOR_OFFSET))(this);
	}

	::CCALMEHPGIK BKNKCFDBLGH()
	{
		return ((::CCALMEHPGIK(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGJNPNGJIH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Boolean MBJFAHEBJDA(::EAKHJNIMJIL* GCMKDONNBPM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::EAKHJNIMJIL*, ::System::Single))((::PBYTE)hIl2Cpp + DIGJNPNGJIH_MBJFAHEBJDA_OFFSET))(this, GCMKDONNBPM, PBCAAADNEPK);
	}
};
