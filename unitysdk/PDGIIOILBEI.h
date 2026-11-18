#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PDGIIOILBEI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17314FC0)
#define PDGIIOILBEI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17314F30)
#define PDGIIOILBEI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17314EA0)
#define PDGIIOILBEI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17315020)
#define PDGIIOILBEI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17314DB0)
#define PDGIIOILBEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x17314E20)
#define PDGIIOILBEI__CTOR_OFFSET UNITYSDK_OFFSET(0x17314E90)

inline static constexpr unsigned int PDGIIOILBEI_TypeDefinitionIndex = 63339;

class PDGIIOILBEI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x4A; // 0x0
	::System::UInt32 FJHKFEJAKMD; // 0x20
	::System::UInt32 PLHBNHMIAEF; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDGIIOILBEI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIIOILBEI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIIOILBEI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIIOILBEI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIIOILBEI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PDGIIOILBEI_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGIIOILBEI_OHFHFOHMBJH_OFFSET))(this);
	}
};
