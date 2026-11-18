#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LEGJHCPBAHG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x184E3B80)
#define LEGJHCPBAHG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x184E3A50)
#define LEGJHCPBAHG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x184E39C0)
#define LEGJHCPBAHG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x184E3AE0)
#define LEGJHCPBAHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x184E38C0)
#define LEGJHCPBAHG__CCTOR_OFFSET UNITYSDK_OFFSET(0x184E3940)
#define LEGJHCPBAHG__CTOR_OFFSET UNITYSDK_OFFSET(0x184E39B0)

inline static constexpr unsigned int LEGJHCPBAHG_TypeDefinitionIndex = 72183;

class LEGJHCPBAHG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x41; // 0x0
	::System::Boolean KKIBKGLJKHD; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGJHCPBAHG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGJHCPBAHG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGJHCPBAHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGJHCPBAHG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGJHCPBAHG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGJHCPBAHG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean GELCBJDLBII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGJHCPBAHG_CNHBDOMKKDE_OFFSET))(this, GELCBJDLBII);
	}
};
