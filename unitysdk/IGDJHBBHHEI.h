#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define IGDJHBBHHEI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xEBCC850)
#define IGDJHBBHHEI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xEBCC7C0)
#define IGDJHBBHHEI__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBCC740)
#define IGDJHBBHHEI__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC7B0)

inline static constexpr unsigned int IGDJHBBHHEI_TypeDefinitionIndex = 47088;

class IGDJHBBHHEI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14C; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDJHBBHHEI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJHBBHHEI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJHBBHHEI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJHBBHHEI_FIGPAOKNJLN_OFFSET))(this);
	}
};
