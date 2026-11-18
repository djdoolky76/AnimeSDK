#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/NCDDJJMHGPK.h"

class EGEFOILLDKB;

#define OFAEFKJCDIJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xF17F760)
#define OFAEFKJCDIJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF17F6D0)
#define OFAEFKJCDIJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF17F640)
#define OFAEFKJCDIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xF17F5C0)
#define OFAEFKJCDIJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF17F630)

inline static constexpr unsigned int OFAEFKJCDIJ_TypeDefinitionIndex = 87219;

class OFAEFKJCDIJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x87; // 0x0
	::EGEFOILLDKB* IJKIMCMPBCF; // 0x20
	::System::Single BPEGDPLGFPO; // 0x28
	::NCDDJJMHGPK GNGDEGLDLII; // 0x2C
	::System::Single KGGJCGPMAIH; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFAEFKJCDIJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAEFKJCDIJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAEFKJCDIJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAEFKJCDIJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EGEFOILLDKB* IJKIMCMPBCF, ::System::Single KGGJCGPMAIH, ::System::Single BPEGDPLGFPO, ::NCDDJJMHGPK GNGDEGLDLII)
	{
		return ((::System::Void(*)(::PVOID, ::EGEFOILLDKB*, ::System::Single, ::System::Single, ::NCDDJJMHGPK))((::PBYTE)hIl2Cpp + OFAEFKJCDIJ_CNHBDOMKKDE_OFFSET))(this, IJKIMCMPBCF, KGGJCGPMAIH, BPEGDPLGFPO, GNGDEGLDLII);
	}
};
