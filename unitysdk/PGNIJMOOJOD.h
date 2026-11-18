#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PGNIJMOOJOD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1C1D4640)
#define PGNIJMOOJOD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C1D45B0)
#define PGNIJMOOJOD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C1D4520)
#define PGNIJMOOJOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1D44A0)
#define PGNIJMOOJOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D4510)

inline static constexpr unsigned int PGNIJMOOJOD_TypeDefinitionIndex = 52427;

class PGNIJMOOJOD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15; // 0x0
	::System::UInt32 OIIPHMCAICB; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNIJMOOJOD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNIJMOOJOD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNIJMOOJOD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNIJMOOJOD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 OIIPHMCAICB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PGNIJMOOJOD_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, OIIPHMCAICB);
	}
};
