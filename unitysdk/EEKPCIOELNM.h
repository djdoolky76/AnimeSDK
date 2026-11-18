#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class HFOJLFDHICK;
class MDIGEHANODA;

#define EEKPCIOELNM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0xF9C0B70)
#define EEKPCIOELNM_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0xF9C0B80)
#define EEKPCIOELNM__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C0A70)

inline static constexpr unsigned int EEKPCIOELNM_TypeDefinitionIndex = 86424;

class EEKPCIOELNM : public ::HGOBBALJENJ
{
public:
	::HFOJLFDHICK* DAAAEJDBNFI; // 0x30
	::MDIGEHANODA* CEJENBBHBBG; // 0x38

	::System::Void _ctor(::HFOJLFDHICK* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::HFOJLFDHICK*))((::PBYTE)hIl2Cpp + EEKPCIOELNM__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKPCIOELNM_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKPCIOELNM_HFBPONNNLBA_OFFSET))(this);
	}
};
