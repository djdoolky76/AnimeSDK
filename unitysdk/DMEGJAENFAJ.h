#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class AAKHODJILNP;
class MDIGEHANODA;

#define DMEGJAENFAJ_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x132A2860)
#define DMEGJAENFAJ_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x132A2870)
#define DMEGJAENFAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x132A2750)

inline static constexpr unsigned int DMEGJAENFAJ_TypeDefinitionIndex = 47702;

class DMEGJAENFAJ : public ::HGOBBALJENJ
{
public:
	::AAKHODJILNP* DAAAEJDBNFI; // 0x30
	::MDIGEHANODA* CEJENBBHBBG; // 0x38

	::System::Void _ctor(::AAKHODJILNP* AAOCANGHBDG, ::System::Boolean PKINFEMMIHE)
	{
		return ((::System::Void(*)(::PVOID, ::AAKHODJILNP*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMEGJAENFAJ__CTOR_OFFSET))(this, AAOCANGHBDG, PKINFEMMIHE);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEGJAENFAJ_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEGJAENFAJ_HFBPONNNLBA_OFFSET))(this);
	}
};
