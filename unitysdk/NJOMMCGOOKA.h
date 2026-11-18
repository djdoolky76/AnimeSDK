#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define NJOMMCGOOKA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16B83790)
#define NJOMMCGOOKA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16B83700)
#define NJOMMCGOOKA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B83680)
#define NJOMMCGOOKA__CTOR_OFFSET UNITYSDK_OFFSET(0x16B836F0)

inline static constexpr unsigned int NJOMMCGOOKA_TypeDefinitionIndex = 54134;

class NJOMMCGOOKA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x22; // 0x0
	::System::UInt32 LJIBLLDJLJG; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJOMMCGOOKA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMMCGOOKA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMMCGOOKA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJOMMCGOOKA_FIGPAOKNJLN_OFFSET))(this);
	}
};
