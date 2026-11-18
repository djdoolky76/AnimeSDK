#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBBALJENJ.h"

class POIDMOHOALM;

#define EKANKLOEOID_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x14171A10)
#define EKANKLOEOID_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14171A40)
#define EKANKLOEOID__CTOR_OFFSET UNITYSDK_OFFSET(0x14171A20)

inline static constexpr unsigned int EKANKLOEOID_TypeDefinitionIndex = 79254;

class EKANKLOEOID : public ::HGOBBALJENJ
{
public:
	::POIDMOHOALM* JMBABJJMDFA; // 0x30

	::System::Void _ctor(::POIDMOHOALM* JMBABJJMDFA, ::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::POIDMOHOALM*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKANKLOEOID__CTOR_OFFSET))(this, JMBABJJMDFA, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKANKLOEOID_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKANKLOEOID_HFBPONNNLBA_OFFSET))(this);
	}
};
