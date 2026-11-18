#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGMNLBKPDNB.h"
#include "unitysdk/NCCKMEOKAJK.h"

class JFGBAIBCFKB;

#define JPDFPJBNMIJ_GGCJAIJMMHJ_OFFSET UNITYSDK_OFFSET(0x17B5CEA0)
#define JPDFPJBNMIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5CE90)

inline static constexpr unsigned int JPDFPJBNMIJ_TypeDefinitionIndex = 52196;

class JPDFPJBNMIJ : public ::FGMNLBKPDNB
{
public:
	::JFGBAIBCFKB* CBBEJBGIAKA; // 0x10

	::System::Void _ctor(::JFGBAIBCFKB* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::JFGBAIBCFKB*))((::PBYTE)hIl2Cpp + JPDFPJBNMIJ__CTOR_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void GGCJAIJMMHJ(::NCCKMEOKAJK& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::NCCKMEOKAJK&))((::PBYTE)hIl2Cpp + JPDFPJBNMIJ_GGCJAIJMMHJ_OFFSET))(this, HBMGHPEPBNC);
	}
};
