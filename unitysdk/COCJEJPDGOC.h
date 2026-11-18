#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define COCJEJPDGOC_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x147AFD80)
#define COCJEJPDGOC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x147AFCF0)
#define COCJEJPDGOC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x147AFC60)
#define COCJEJPDGOC_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x147AFDD0)
#define COCJEJPDGOC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x147AFB60)
#define COCJEJPDGOC__CCTOR_OFFSET UNITYSDK_OFFSET(0x147AFBE0)
#define COCJEJPDGOC__CTOR_OFFSET UNITYSDK_OFFSET(0x147AFC50)

inline static constexpr unsigned int COCJEJPDGOC_TypeDefinitionIndex = 83197;

class COCJEJPDGOC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x62; // 0x0
	::System::Boolean LPFPMHEFKGO; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCJEJPDGOC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJEJPDGOC__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJEJPDGOC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJEJPDGOC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJEJPDGOC_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean AHEAEIMIJJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COCJEJPDGOC_CNHBDOMKKDE_OFFSET))(this, AHEAEIMIJJK);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJEJPDGOC_OHFHFOHMBJH_OFFSET))(this);
	}
};
