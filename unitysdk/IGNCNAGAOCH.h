#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class LEGNKEBDEHL;
class MDIGEHANODA;

#define IGNCNAGAOCH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x101464B0)
#define IGNCNAGAOCH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x101464C0)
#define IGNCNAGAOCH__CTOR_OFFSET UNITYSDK_OFFSET(0x101463A0)

inline static constexpr unsigned int IGNCNAGAOCH_TypeDefinitionIndex = 82002;

class IGNCNAGAOCH : public ::HGOBBALJENJ
{
public:
	::LEGNKEBDEHL* DAAAEJDBNFI; // 0x30
	::MDIGEHANODA* CEJENBBHBBG; // 0x38

	::System::Void _ctor(::LEGNKEBDEHL* AAOCANGHBDG, ::System::Boolean PKINFEMMIHE)
	{
		return ((::System::Void(*)(::PVOID, ::LEGNKEBDEHL*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGNCNAGAOCH__CTOR_OFFSET))(this, AAOCANGHBDG, PKINFEMMIHE);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNCNAGAOCH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNCNAGAOCH_HFBPONNNLBA_OFFSET))(this);
	}
};
