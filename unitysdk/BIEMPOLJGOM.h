#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJNJBJKHDCJ.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BIEMPOLJGOM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x115EAAB0)
#define BIEMPOLJGOM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x115EA980)
#define BIEMPOLJGOM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x115EA8F0)
#define BIEMPOLJGOM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x115EAA10)
#define BIEMPOLJGOM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x115EA800)
#define BIEMPOLJGOM__CCTOR_OFFSET UNITYSDK_OFFSET(0x115EA870)
#define BIEMPOLJGOM__CTOR_OFFSET UNITYSDK_OFFSET(0x115EA8E0)

inline static constexpr unsigned int BIEMPOLJGOM_TypeDefinitionIndex = 48601;

class BIEMPOLJGOM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10B; // 0x0
	::BJNJBJKHDCJ JJKOHHMEOFK; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIEMPOLJGOM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEMPOLJGOM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEMPOLJGOM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEMPOLJGOM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEMPOLJGOM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEMPOLJGOM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::BJNJBJKHDCJ JJKOHHMEOFK)
	{
		return ((::System::Void(*)(::PVOID, ::BJNJBJKHDCJ))((::PBYTE)hIl2Cpp + BIEMPOLJGOM_CNHBDOMKKDE_OFFSET))(this, JJKOHHMEOFK);
	}
};
