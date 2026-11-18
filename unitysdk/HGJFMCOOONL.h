#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class MDIGEHANODA;
class PBJKEMDGJFN;

#define HGJFMCOOONL_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x16CEF650)
#define HGJFMCOOONL_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x16CEF660)
#define HGJFMCOOONL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEF540)

inline static constexpr unsigned int HGJFMCOOONL_TypeDefinitionIndex = 45339;

class HGJFMCOOONL : public ::HGOBBALJENJ
{
public:
	::MDIGEHANODA* CEJENBBHBBG; // 0x30
	::PBJKEMDGJFN* DAAAEJDBNFI; // 0x38

	::System::Void _ctor(::PBJKEMDGJFN* AAOCANGHBDG, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::PBJKEMDGJFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGJFMCOOONL__CTOR_OFFSET))(this, AAOCANGHBDG, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJFMCOOONL_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJFMCOOONL_HFBPONNNLBA_OFFSET))(this);
	}
};
