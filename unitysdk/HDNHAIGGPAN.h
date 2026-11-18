#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HDNHAIGGPAN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1100C040)
#define HDNHAIGGPAN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1100BFB0)
#define HDNHAIGGPAN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1100BF20)
#define HDNHAIGGPAN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1100C090)
#define HDNHAIGGPAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1100BE20)
#define HDNHAIGGPAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1100BEA0)
#define HDNHAIGGPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1100BF10)

inline static constexpr unsigned int HDNHAIGGPAN_TypeDefinitionIndex = 60884;

class HDNHAIGGPAN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x64; // 0x0
	::System::Boolean JGOBJBHIMLH; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDNHAIGGPAN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNHAIGGPAN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNHAIGGPAN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNHAIGGPAN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNHAIGGPAN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean JLGCMPJMDLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDNHAIGGPAN_CNHBDOMKKDE_OFFSET))(this, JLGCMPJMDLO);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNHAIGGPAN_OHFHFOHMBJH_OFFSET))(this);
	}
};
