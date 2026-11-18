#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CEAIFILNHGI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18DC7A90)
#define CEAIFILNHGI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18DC7A00)
#define CEAIFILNHGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x18DC7980)
#define CEAIFILNHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC79F0)

inline static constexpr unsigned int CEAIFILNHGI_TypeDefinitionIndex = 68242;

class CEAIFILNHGI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAIFILNHGI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIFILNHGI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIFILNHGI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIFILNHGI_FIGPAOKNJLN_OFFSET))(this);
	}
};
