#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

#define PILAFKOGDJM_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1197FA40)
#define PILAFKOGDJM_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1197FA70)
#define PILAFKOGDJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1197FA50)

inline static constexpr unsigned int PILAFKOGDJM_TypeDefinitionIndex = 80829;

class PILAFKOGDJM : public ::HGOBBALJENJ
{
public:
	::System::Int32 LPKDKHEGFJF; // 0x30

	::System::Void _ctor(::System::Int32 CHGBLKOALPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PILAFKOGDJM__CTOR_OFFSET))(this, CHGBLKOALPA);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILAFKOGDJM_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILAFKOGDJM_HFBPONNNLBA_OFFSET))(this);
	}
};
