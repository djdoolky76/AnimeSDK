#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class EGEFOILLDKB;

#define HBMJJIMIBAO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14932250)
#define HBMJJIMIBAO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x149321C0)
#define HBMJJIMIBAO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14932090)
#define HBMJJIMIBAO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14932120)
#define HBMJJIMIBAO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14931F80)
#define HBMJJIMIBAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14932010)
#define HBMJJIMIBAO__CTOR_OFFSET UNITYSDK_OFFSET(0x14932080)

inline static constexpr unsigned int HBMJJIMIBAO_TypeDefinitionIndex = 74274;

class HBMJJIMIBAO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x88; // 0x0
	::EGEFOILLDKB* EFDKDEBIBKN; // 0x20
	::System::Double CEKHAMMNFDH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBMJJIMIBAO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJJIMIBAO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJJIMIBAO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJJIMIBAO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJJIMIBAO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMJJIMIBAO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EGEFOILLDKB* IJKIMCMPBCF, ::System::Double HHBFOEEOHFE)
	{
		return ((::System::Void(*)(::PVOID, ::EGEFOILLDKB*, ::System::Double))((::PBYTE)hIl2Cpp + HBMJJIMIBAO_CNHBDOMKKDE_OFFSET))(this, IJKIMCMPBCF, HHBFOEEOHFE);
	}
};
