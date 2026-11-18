#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HFEDADCCIOL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17A44000)
#define HFEDADCCIOL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17A43F70)
#define HFEDADCCIOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A43EF0)
#define HFEDADCCIOL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A43F60)

inline static constexpr unsigned int HFEDADCCIOL_TypeDefinitionIndex = 53795;

class HFEDADCCIOL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFEDADCCIOL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEDADCCIOL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEDADCCIOL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEDADCCIOL_FIGPAOKNJLN_OFFSET))(this);
	}
};
