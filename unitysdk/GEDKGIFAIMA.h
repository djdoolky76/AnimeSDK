#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBFMDGAHHCE_PCKCNOALNCF.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define GEDKGIFAIMA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x116E6370)
#define GEDKGIFAIMA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x116E63C0)
#define GEDKGIFAIMA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x116E62E0)
#define GEDKGIFAIMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x116E6260)
#define GEDKGIFAIMA__CTOR_OFFSET UNITYSDK_OFFSET(0x116E62D0)

inline static constexpr unsigned int GEDKGIFAIMA_TypeDefinitionIndex = 60452;

class GEDKGIFAIMA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x4D; // 0x0
	::DBFMDGAHHCE_PCKCNOALNCF DPFIJNDCFBF; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEDKGIFAIMA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDKGIFAIMA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDKGIFAIMA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::DBFMDGAHHCE_PCKCNOALNCF GAMNKNJFNBN)
	{
		return ((::System::Void(*)(::PVOID, ::DBFMDGAHHCE_PCKCNOALNCF))((::PBYTE)hIl2Cpp + GEDKGIFAIMA_CNHBDOMKKDE_OFFSET))(this, GAMNKNJFNBN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDKGIFAIMA_FIGPAOKNJLN_OFFSET))(this);
	}
};
