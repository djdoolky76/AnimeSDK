#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PAGJDCLGGCN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15F9BC40)
#define PAGJDCLGGCN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15F9BBB0)
#define PAGJDCLGGCN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F9BB30)
#define PAGJDCLGGCN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9BBA0)

inline static constexpr unsigned int PAGJDCLGGCN_TypeDefinitionIndex = 48424;

class PAGJDCLGGCN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC6; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGJDCLGGCN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJDCLGGCN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJDCLGGCN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGJDCLGGCN_FIGPAOKNJLN_OFFSET))(this);
	}
};
