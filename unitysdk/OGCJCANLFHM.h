#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEGFGKIMDC.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define OGCJCANLFHM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xF18DD90)
#define OGCJCANLFHM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF18DDF0)
#define OGCJCANLFHM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF18DC60)
#define OGCJCANLFHM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xF18DCF0)
#define OGCJCANLFHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xF18DB50)
#define OGCJCANLFHM__CCTOR_OFFSET UNITYSDK_OFFSET(0xF18DBE0)
#define OGCJCANLFHM__CTOR_OFFSET UNITYSDK_OFFSET(0xF18DC50)

inline static constexpr unsigned int OGCJCANLFHM_TypeDefinitionIndex = 50943;

class OGCJCANLFHM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x102; // 0x0
	::EDEGFGKIMDC HMMAHHECBCA; // 0x20
	::System::UInt32 OJLDGECCPKK; // 0x24
	::EDEGFGKIMDC EAAJMNAOLAE; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGCJCANLFHM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCJCANLFHM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCJCANLFHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCJCANLFHM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCJCANLFHM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EDEGFGKIMDC OJBJPFBIMPJ, ::EDEGFGKIMDC FDDFDLEINFM, ::System::UInt32 CCCBKOMMACP)
	{
		return ((::System::Void(*)(::PVOID, ::EDEGFGKIMDC, ::EDEGFGKIMDC, ::System::UInt32))((::PBYTE)hIl2Cpp + OGCJCANLFHM_CNHBDOMKKDE_OFFSET))(this, OJBJPFBIMPJ, FDDFDLEINFM, CCCBKOMMACP);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCJCANLFHM_FIGPAOKNJLN_OFFSET))(this);
	}
};
