#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEELDIHPPPJ.h"

class CJIEIHEDMME;

#define FEJIEOHLGBK_LFFLCJLGNIM_OFFSET UNITYSDK_OFFSET(0xBB39F20)
#define FEJIEOHLGBK_NALOAEDEBCH_OFFSET UNITYSDK_OFFSET(0xBB3A1B0)
#define FEJIEOHLGBK__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3A1A0)

inline static constexpr unsigned int FEJIEOHLGBK_TypeDefinitionIndex = 55702;

class FEJIEOHLGBK : public ::IEELDIHPPPJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJIEOHLGBK__CTOR_OFFSET))(this);
	}

	::System::Void LFFLCJLGNIM(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FEJIEOHLGBK_LFFLCJLGNIM_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void NALOAEDEBCH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + FEJIEOHLGBK_NALOAEDEBCH_OFFSET))(this, MIALFKCCCPI);
	}
};
