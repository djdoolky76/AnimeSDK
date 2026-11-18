#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HLLOIJJAIKC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x19E2F8A0)
#define HLLOIJJAIKC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19E2F8F0)
#define HLLOIJJAIKC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19E2F810)
#define HLLOIJJAIKC_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x19E2F980)
#define HLLOIJJAIKC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19E2F750)
#define HLLOIJJAIKC__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E2F790)
#define HLLOIJJAIKC__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2F800)

inline static constexpr unsigned int HLLOIJJAIKC_TypeDefinitionIndex = 54851;

class HLLOIJJAIKC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x8B; // 0x0
	::System::Boolean HPINBCPMHJE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLLOIJJAIKC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOIJJAIKC__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOIJJAIKC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOIJJAIKC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLLOIJJAIKC_CNHBDOMKKDE_OFFSET))(this, HPINBCPMHJE);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOIJJAIKC_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOIJJAIKC_OHFHFOHMBJH_OFFSET))(this);
	}
};
