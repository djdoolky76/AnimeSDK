#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BBJHPJGBDLG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13610D80)
#define BBJHPJGBDLG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13610CF0)
#define BBJHPJGBDLG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13610C60)
#define BBJHPJGBDLG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13610BE0)
#define BBJHPJGBDLG__CTOR_OFFSET UNITYSDK_OFFSET(0x13610C50)

inline static constexpr unsigned int BBJHPJGBDLG_TypeDefinitionIndex = 70466;

class BBJHPJGBDLG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x151; // 0x0
	::System::Int32 GNHEHOMMHPB; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBJHPJGBDLG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHPJGBDLG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHPJGBDLG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJHPJGBDLG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 GNHEHOMMHPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + BBJHPJGBDLG_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, GNHEHOMMHPB);
	}
};
