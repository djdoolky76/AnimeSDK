#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define AMOLMIJLFFA_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12D0ADF0)
#define AMOLMIJLFFA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12D0AE80)
#define AMOLMIJLFFA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12D0ACC0)
#define AMOLMIJLFFA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12D0AD50)
#define AMOLMIJLFFA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12D0ABB0)
#define AMOLMIJLFFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D0AC40)
#define AMOLMIJLFFA__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0ACB0)

inline static constexpr unsigned int AMOLMIJLFFA_TypeDefinitionIndex = 76856;

class AMOLMIJLFFA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x54; // 0x0
	::System::Int32 EBLOAJABIPG; // 0x20
	::System::Boolean FOPBILLGFLN; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMOLMIJLFFA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOLMIJLFFA__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOLMIJLFFA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOLMIJLFFA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOLMIJLFFA_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Boolean FBILHHBPEHD, ::System::Int32 KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + AMOLMIJLFFA_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, FBILHHBPEHD, KHGFAKJKDGG);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOLMIJLFFA_FIGPAOKNJLN_OFFSET))(this);
	}
};
