#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/CampType.h"

#define GABLDMFBAFD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x165E0B10)
#define GABLDMFBAFD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x165E0BA0)
#define GABLDMFBAFD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x165E0A80)
#define GABLDMFBAFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x165E0A00)
#define GABLDMFBAFD__CTOR_OFFSET UNITYSDK_OFFSET(0x165E0A70)

inline static constexpr unsigned int GABLDMFBAFD_TypeDefinitionIndex = 50026;

class GABLDMFBAFD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3B; // 0x0
	::MoleMole::Config::CampType ODGCLCJILCE; // 0x20
	::MoleMole::Config::CampType EJBIBNBIDOD; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GABLDMFBAFD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABLDMFBAFD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABLDMFBAFD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::MoleMole::Config::CampType KDEHMPGOCEP, ::MoleMole::Config::CampType PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + GABLDMFBAFD_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GABLDMFBAFD_FIGPAOKNJLN_OFFSET))(this);
	}
};
