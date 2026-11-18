#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PNAHMMOBGLM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13725E90)
#define PNAHMMOBGLM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13725ED0)
#define PNAHMMOBGLM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13725E00)
#define PNAHMMOBGLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13725D80)
#define PNAHMMOBGLM__CTOR_OFFSET UNITYSDK_OFFSET(0x13725DF0)

inline static constexpr unsigned int PNAHMMOBGLM_TypeDefinitionIndex = 83650;

class PNAHMMOBGLM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x78; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNAHMMOBGLM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAHMMOBGLM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAHMMOBGLM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAHMMOBGLM_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNAHMMOBGLM_FIGPAOKNJLN_OFFSET))(this);
	}
};
