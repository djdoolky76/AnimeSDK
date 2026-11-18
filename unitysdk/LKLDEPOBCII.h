#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCLCFDGKHFO.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LKLDEPOBCII_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15E06B10)
#define LKLDEPOBCII_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15E06B70)
#define LKLDEPOBCII_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15E06A80)
#define LKLDEPOBCII__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E06A00)
#define LKLDEPOBCII__CTOR_OFFSET UNITYSDK_OFFSET(0x15E06A70)

inline static constexpr unsigned int LKLDEPOBCII_TypeDefinitionIndex = 71190;

class LKLDEPOBCII : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x135; // 0x0
	::DCLCFDGKHFO CEFNJLBMPNG; // 0x20
	::System::Int32 OLGLFFNLIHO; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKLDEPOBCII__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLDEPOBCII__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLDEPOBCII_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::DCLCFDGKHFO JCJDKCLCKKH, ::System::Int32 BBJFMPCCOOA)
	{
		return ((::System::Void(*)(::PVOID, ::DCLCFDGKHFO, ::System::Int32))((::PBYTE)hIl2Cpp + LKLDEPOBCII_CNHBDOMKKDE_OFFSET))(this, JCJDKCLCKKH, BBJFMPCCOOA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLDEPOBCII_FIGPAOKNJLN_OFFSET))(this);
	}
};
