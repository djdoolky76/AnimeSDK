#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JPJCAGLBHGH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18A2B210)
#define JPJCAGLBHGH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18A2B180)
#define JPJCAGLBHGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A2B100)
#define JPJCAGLBHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2B170)

inline static constexpr unsigned int JPJCAGLBHGH_TypeDefinitionIndex = 68917;

class JPJCAGLBHGH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15B; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPJCAGLBHGH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJCAGLBHGH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJCAGLBHGH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJCAGLBHGH_FIGPAOKNJLN_OFFSET))(this);
	}
};
