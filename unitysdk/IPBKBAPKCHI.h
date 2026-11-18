#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define IPBKBAPKCHI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1943F840)
#define IPBKBAPKCHI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1943F7B0)
#define IPBKBAPKCHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1943F730)
#define IPBKBAPKCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1943F7A0)

inline static constexpr unsigned int IPBKBAPKCHI_TypeDefinitionIndex = 74443;

class IPBKBAPKCHI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x131; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPBKBAPKCHI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKBAPKCHI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKBAPKCHI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKBAPKCHI_FIGPAOKNJLN_OFFSET))(this);
	}
};
