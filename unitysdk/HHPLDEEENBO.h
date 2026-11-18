#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class MDIGEHANODA;
class NLCBIAFHPFB;

#define HHPLDEEENBO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x16F39290)
#define HHPLDEEENBO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x16F392A0)
#define HHPLDEEENBO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F39180)

inline static constexpr unsigned int HHPLDEEENBO_TypeDefinitionIndex = 51754;

class HHPLDEEENBO : public ::HGOBBALJENJ
{
public:
	::NLCBIAFHPFB* DAAAEJDBNFI; // 0x30
	::MDIGEHANODA* CEJENBBHBBG; // 0x38

	::System::Void _ctor(::NLCBIAFHPFB* AAOCANGHBDG, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::NLCBIAFHPFB*, ::System::Boolean))((::PBYTE)hIl2Cpp + HHPLDEEENBO__CTOR_OFFSET))(this, AAOCANGHBDG, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPLDEEENBO_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHPLDEEENBO_HFBPONNNLBA_OFFSET))(this);
	}
};
