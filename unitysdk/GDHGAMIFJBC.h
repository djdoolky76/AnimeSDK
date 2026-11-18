#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class AJNEAMAGNAN;
class MDIGEHANODA;

#define GDHGAMIFJBC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x165EB800)
#define GDHGAMIFJBC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x165EB810)
#define GDHGAMIFJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x165EB700)

inline static constexpr unsigned int GDHGAMIFJBC_TypeDefinitionIndex = 51297;

class GDHGAMIFJBC : public ::HGOBBALJENJ
{
public:
	::AJNEAMAGNAN* DAAAEJDBNFI; // 0x30
	::MDIGEHANODA* CEJENBBHBBG; // 0x38

	::System::Void _ctor(::AJNEAMAGNAN* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AJNEAMAGNAN*))((::PBYTE)hIl2Cpp + GDHGAMIFJBC__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHGAMIFJBC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHGAMIFJBC_HFBPONNNLBA_OFFSET))(this);
	}
};
