#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class MHEJAFPPKAN;

#define KPIFMHIJDGH_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x15234C30)
#define KPIFMHIJDGH_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x15234C40)
#define KPIFMHIJDGH__CTOR_OFFSET UNITYSDK_OFFSET(0x15234C10)

inline static constexpr unsigned int KPIFMHIJDGH_TypeDefinitionIndex = 78971;

class KPIFMHIJDGH : public ::HGOBBALJENJ
{
public:
	::MHEJAFPPKAN* DAAAEJDBNFI; // 0x30

	::System::Void _ctor(::MHEJAFPPKAN* AAOCANGHBDG, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::MHEJAFPPKAN*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPIFMHIJDGH__CTOR_OFFSET))(this, AAOCANGHBDG, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIFMHIJDGH_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIFMHIJDGH_HFBPONNNLBA_OFFSET))(this);
	}
};
