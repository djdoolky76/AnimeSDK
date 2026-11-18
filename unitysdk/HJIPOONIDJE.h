#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class GIFMKLGAIDN;

#define HJIPOONIDJE_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x10117DB0)
#define HJIPOONIDJE_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x10117DC0)
#define HJIPOONIDJE__CTOR_OFFSET UNITYSDK_OFFSET(0x10117D90)

inline static constexpr unsigned int HJIPOONIDJE_TypeDefinitionIndex = 59757;

class HJIPOONIDJE : public ::HGOBBALJENJ
{
public:
	::GIFMKLGAIDN* DAAAEJDBNFI; // 0x30

	::System::Void _ctor(::GIFMKLGAIDN* AAOCANGHBDG, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::GIFMKLGAIDN*, ::System::Boolean))((::PBYTE)hIl2Cpp + HJIPOONIDJE__CTOR_OFFSET))(this, AAOCANGHBDG, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIPOONIDJE_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJIPOONIDJE_HFBPONNNLBA_OFFSET))(this);
	}
};
