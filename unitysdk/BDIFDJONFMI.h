#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BDIFDJONFMI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x126804B0)
#define BDIFDJONFMI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12680500)
#define BDIFDJONFMI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12680420)
#define BDIFDJONFMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x126803A0)
#define BDIFDJONFMI__CTOR_OFFSET UNITYSDK_OFFSET(0x12680410)

inline static constexpr unsigned int BDIFDJONFMI_TypeDefinitionIndex = 69157;

class BDIFDJONFMI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x79; // 0x0
	::System::Int32 HFPCJJLPEBD; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDIFDJONFMI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIFDJONFMI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIFDJONFMI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDIFDJONFMI_CNHBDOMKKDE_OFFSET))(this, KCNOHOOPNAH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIFDJONFMI_FIGPAOKNJLN_OFFSET))(this);
	}
};
