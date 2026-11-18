#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define GBABLMPEHLL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x179C7E60)
#define GBABLMPEHLL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x179C7EB0)
#define GBABLMPEHLL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x179C7D30)
#define GBABLMPEHLL_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x179C7DC0)
#define GBABLMPEHLL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x179C7C20)
#define GBABLMPEHLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x179C7CB0)
#define GBABLMPEHLL__CTOR_OFFSET UNITYSDK_OFFSET(0x179C7D20)

inline static constexpr unsigned int GBABLMPEHLL_TypeDefinitionIndex = 51446;

class GBABLMPEHLL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2C; // 0x0
	::System::UInt32 HJLNBOIHOHO; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBABLMPEHLL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBABLMPEHLL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBABLMPEHLL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBABLMPEHLL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBABLMPEHLL_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 ENHBDNIPJCD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBABLMPEHLL_CNHBDOMKKDE_OFFSET))(this, ENHBDNIPJCD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBABLMPEHLL_FIGPAOKNJLN_OFFSET))(this);
	}
};
