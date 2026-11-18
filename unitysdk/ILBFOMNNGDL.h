#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ILBFOMNNGDL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16584150)
#define ILBFOMNNGDL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x165840C0)
#define ILBFOMNNGDL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16584030)
#define ILBFOMNNGDL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16583FB0)
#define ILBFOMNNGDL__CTOR_OFFSET UNITYSDK_OFFSET(0x16584020)

inline static constexpr unsigned int ILBFOMNNGDL_TypeDefinitionIndex = 81277;

class ILBFOMNNGDL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF9; // 0x0
	::System::UInt32 BKCPCICCOBM; // 0x20
	::System::UInt32 NPHJHGKNOOB; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILBFOMNNGDL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBFOMNNGDL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBFOMNNGDL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILBFOMNNGDL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 BKCPCICCOBM, ::System::UInt32 NPHJHGKNOOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILBFOMNNGDL_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, BKCPCICCOBM, NPHJHGKNOOB);
	}
};
