#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/NDPKCBLNKJB.h"
#include "unitysdk/OPPJOAOMDGJ_GINKIPHAMIM.h"

#define OPPJOAOMDGJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A7D56A0)
#define OPPJOAOMDGJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A7D56F0)
#define OPPJOAOMDGJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A7D5610)
#define OPPJOAOMDGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7D5590)
#define OPPJOAOMDGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D5600)

inline static constexpr unsigned int OPPJOAOMDGJ_TypeDefinitionIndex = 66315;

class OPPJOAOMDGJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD8; // 0x0
	::NDPKCBLNKJB OHPPPEANOFK; // 0x20
	::OPPJOAOMDGJ_GINKIPHAMIM BPINANLEDPD; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPPJOAOMDGJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPJOAOMDGJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPJOAOMDGJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NDPKCBLNKJB FJLDEKDHJGC, ::OPPJOAOMDGJ_GINKIPHAMIM BPINANLEDPD)
	{
		return ((::System::Void(*)(::PVOID, ::NDPKCBLNKJB, ::OPPJOAOMDGJ_GINKIPHAMIM))((::PBYTE)hIl2Cpp + OPPJOAOMDGJ_BBOMJDBNHIC_OFFSET))(this, FJLDEKDHJGC, BPINANLEDPD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPJOAOMDGJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
