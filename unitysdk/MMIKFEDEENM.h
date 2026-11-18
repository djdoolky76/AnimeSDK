#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEELDIHPPPJ.h"

class CJIEIHEDMME;

#define MMIKFEDEENM_LFFLCJLGNIM_OFFSET UNITYSDK_OFFSET(0x13025E90)
#define MMIKFEDEENM_NALOAEDEBCH_OFFSET UNITYSDK_OFFSET(0x13026120)
#define MMIKFEDEENM__CTOR_OFFSET UNITYSDK_OFFSET(0x13026110)

inline static constexpr unsigned int MMIKFEDEENM_TypeDefinitionIndex = 80034;

class MMIKFEDEENM : public ::IEELDIHPPPJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIKFEDEENM__CTOR_OFFSET))(this);
	}

	::System::Void LFFLCJLGNIM(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MMIKFEDEENM_LFFLCJLGNIM_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void NALOAEDEBCH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MMIKFEDEENM_NALOAEDEBCH_OFFSET))(this, MIALFKCCCPI);
	}
};
