#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/OOKDFNFBADN.h"

#define ECJDHJOEMEH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x148C7DA0)
#define ECJDHJOEMEH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x148C7E00)
#define ECJDHJOEMEH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x148C7C70)
#define ECJDHJOEMEH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x148C7D00)
#define ECJDHJOEMEH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x148C7B60)
#define ECJDHJOEMEH__CCTOR_OFFSET UNITYSDK_OFFSET(0x148C7BF0)
#define ECJDHJOEMEH__CTOR_OFFSET UNITYSDK_OFFSET(0x148C7C60)

inline static constexpr unsigned int ECJDHJOEMEH_TypeDefinitionIndex = 86416;

class ECJDHJOEMEH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x149; // 0x0
	::OOKDFNFBADN EENPJFLINHK; // 0x20
	::System::Boolean MEMCJPNPLBC; // 0x24
	::System::Boolean ALJLFOCDHHI; // 0x25

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECJDHJOEMEH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJDHJOEMEH__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJDHJOEMEH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJDHJOEMEH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJDHJOEMEH_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean CCGMFJMNBJJ, ::System::Boolean DNLLEPBJCBM, ::OOKDFNFBADN CHAFJLDOBHM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::OOKDFNFBADN))((::PBYTE)hIl2Cpp + ECJDHJOEMEH_CNHBDOMKKDE_OFFSET))(this, CCGMFJMNBJJ, DNLLEPBJCBM, CHAFJLDOBHM);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJDHJOEMEH_FIGPAOKNJLN_OFFSET))(this);
	}
};
