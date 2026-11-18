#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JECBIOPKHFK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x160DB4F0)
#define JECBIOPKHFK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x160DB3C0)
#define JECBIOPKHFK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x160DB330)
#define JECBIOPKHFK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x160DB450)
#define JECBIOPKHFK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x160DB240)
#define JECBIOPKHFK__CCTOR_OFFSET UNITYSDK_OFFSET(0x160DB2B0)
#define JECBIOPKHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x160DB320)

inline static constexpr unsigned int JECBIOPKHFK_TypeDefinitionIndex = 72446;

class JECBIOPKHFK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9B; // 0x0
	::System::UInt32 FJHKFEJAKMD; // 0x20
	::System::UInt32 PLHBNHMIAEF; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JECBIOPKHFK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECBIOPKHFK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECBIOPKHFK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECBIOPKHFK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECBIOPKHFK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JECBIOPKHFK_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JECBIOPKHFK_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB);
	}
};
