#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DBNHGMHOGFE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x149923D0)
#define DBNHGMHOGFE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14992340)
#define DBNHGMHOGFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x149922C0)
#define DBNHGMHOGFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14992330)

inline static constexpr unsigned int DBNHGMHOGFE_TypeDefinitionIndex = 46166;

class DBNHGMHOGFE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2B; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBNHGMHOGFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNHGMHOGFE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNHGMHOGFE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNHGMHOGFE_FIGPAOKNJLN_OFFSET))(this);
	}
};
