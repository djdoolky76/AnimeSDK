#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KPACKGEBECC_BEPAIBEIBLH.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define AMLJLBOOEKB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1422EC20)
#define AMLJLBOOEKB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1422EB90)
#define AMLJLBOOEKB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1422EA60)
#define AMLJLBOOEKB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1422EAF0)
#define AMLJLBOOEKB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1422E8E0)
#define AMLJLBOOEKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1422E9E0)
#define AMLJLBOOEKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1422EA50)

inline static constexpr unsigned int AMLJLBOOEKB_TypeDefinitionIndex = 60490;

class AMLJLBOOEKB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xAE; // 0x0
	::MoleMole::EntityHandle CPLFOFKKGGO; // 0x20
	::MoleMole::EntityHandle ONEKONFDKAL; // 0x30
	::System::Boolean FCMILEKDOBM; // 0x40
	::System::Byte _padding0[0x3];
	::KPACKGEBECC_BEPAIBEIBLH LFLDFEHFFJO; // 0x44

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMLJLBOOEKB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLJLBOOEKB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLJLBOOEKB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLJLBOOEKB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLJLBOOEKB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLJLBOOEKB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::EntityHandle GDLOCGDAJGL, ::MoleMole::EntityHandle KECKGDFIALJ, ::KPACKGEBECC_BEPAIBEIBLH HAKMIOIGCOH, ::System::Boolean BNGPOOCBDAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::KPACKGEBECC_BEPAIBEIBLH, ::System::Boolean))((::PBYTE)hIl2Cpp + AMLJLBOOEKB_CNHBDOMKKDE_OFFSET))(this, GDLOCGDAJGL, KECKGDFIALJ, HAKMIOIGCOH, BNGPOOCBDAM);
	}
};
