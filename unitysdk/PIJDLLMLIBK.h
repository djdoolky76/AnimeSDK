#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PIJDLLMLIBK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1555E1A0)
#define PIJDLLMLIBK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1555E110)
#define PIJDLLMLIBK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1555E090)
#define PIJDLLMLIBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1555E100)

inline static constexpr unsigned int PIJDLLMLIBK_TypeDefinitionIndex = 92452;

class PIJDLLMLIBK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x97; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJDLLMLIBK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDLLMLIBK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDLLMLIBK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDLLMLIBK_FIGPAOKNJLN_OFFSET))(this);
	}
};
