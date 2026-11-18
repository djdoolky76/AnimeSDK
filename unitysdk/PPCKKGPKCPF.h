#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PPCKKGPKCPF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A8072E0)
#define PPCKKGPKCPF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A807250)
#define PPCKKGPKCPF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A8071C0)
#define PPCKKGPKCPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A807140)
#define PPCKKGPKCPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8071B0)

inline static constexpr unsigned int PPCKKGPKCPF_TypeDefinitionIndex = 74277;

class PPCKKGPKCPF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11D; // 0x0
	::System::UInt32 KMLPFPOCOEO; // 0x20
	::System::UInt32 MGNMJMACKLO; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPCKKGPKCPF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCKKGPKCPF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCKKGPKCPF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCKKGPKCPF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 AOCOIDIMLIH, ::System::UInt32 CLACNEMIOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PPCKKGPKCPF_CNHBDOMKKDE_OFFSET))(this, AOCOIDIMLIH, CLACNEMIOBA);
	}
};
