#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define GOMPINCIGJF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18167060)
#define GOMPINCIGJF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18166FD0)
#define GOMPINCIGJF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18166F40)
#define GOMPINCIGJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x18166EC0)
#define GOMPINCIGJF__CTOR_OFFSET UNITYSDK_OFFSET(0x18166F30)

inline static constexpr unsigned int GOMPINCIGJF_TypeDefinitionIndex = 91959;

class GOMPINCIGJF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x140; // 0x0
	::System::Int32 BNOBOKJOEEC; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOMPINCIGJF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMPINCIGJF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMPINCIGJF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMPINCIGJF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 BNOBOKJOEEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOMPINCIGJF_CNHBDOMKKDE_OFFSET))(this, BNOBOKJOEEC);
	}
};
