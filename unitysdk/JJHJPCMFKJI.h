#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JJHJPCMFKJI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15582410)
#define JJHJPCMFKJI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15582380)
#define JJHJPCMFKJI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x155822F0)
#define JJHJPCMFKJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15582270)
#define JJHJPCMFKJI__CTOR_OFFSET UNITYSDK_OFFSET(0x155822E0)

inline static constexpr unsigned int JJHJPCMFKJI_TypeDefinitionIndex = 43821;

class JJHJPCMFKJI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14; // 0x0
	::System::UInt32 OIIPHMCAICB; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJHJPCMFKJI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJPCMFKJI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJPCMFKJI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJPCMFKJI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 OIIPHMCAICB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JJHJPCMFKJI_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, OIIPHMCAICB);
	}
};
