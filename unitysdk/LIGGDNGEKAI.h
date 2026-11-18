#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LIGGDNGEKAI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A60C720)
#define LIGGDNGEKAI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A60C7B0)
#define LIGGDNGEKAI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A60C690)
#define LIGGDNGEKAI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60C610)
#define LIGGDNGEKAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60C680)

inline static constexpr unsigned int LIGGDNGEKAI_TypeDefinitionIndex = 61560;

class LIGGDNGEKAI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x98; // 0x0
	::System::UInt32 BHPBPJCDHHG; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGGDNGEKAI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGGDNGEKAI__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGGDNGEKAI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 BHPBPJCDHHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIGGDNGEKAI_CNHBDOMKKDE_OFFSET))(this, BHPBPJCDHHG);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGGDNGEKAI_FIGPAOKNJLN_OFFSET))(this);
	}
};
