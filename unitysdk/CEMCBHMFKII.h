#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/OPIJCPAOCGM.h"

#define CEMCBHMFKII_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x199FDB20)
#define CEMCBHMFKII_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x199FDB80)
#define CEMCBHMFKII_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x199FDA90)
#define CEMCBHMFKII__CCTOR_OFFSET UNITYSDK_OFFSET(0x199FDA10)
#define CEMCBHMFKII__CTOR_OFFSET UNITYSDK_OFFSET(0x199FDA80)

inline static constexpr unsigned int CEMCBHMFKII_TypeDefinitionIndex = 78213;

class CEMCBHMFKII : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x117; // 0x0
	::MoleMole::Config::CampType OLNAFBAENGH; // 0x20
	::OPIJCPAOCGM GMPCEIEBNJB; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEMCBHMFKII__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMCBHMFKII__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMCBHMFKII_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::OPIJCPAOCGM OIJJADCMKIK, ::MoleMole::Config::CampType OLNAFBAENGH)
	{
		return ((::System::Void(*)(::PVOID, ::OPIJCPAOCGM, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CEMCBHMFKII_CNHBDOMKKDE_OFFSET))(this, OIJJADCMKIK, OLNAFBAENGH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEMCBHMFKII_FIGPAOKNJLN_OFFSET))(this);
	}
};
