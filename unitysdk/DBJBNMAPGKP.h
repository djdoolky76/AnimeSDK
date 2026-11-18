#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DBJBNMAPGKP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19D51E40)
#define DBJBNMAPGKP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19D51DB0)
#define DBJBNMAPGKP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D51D30)
#define DBJBNMAPGKP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D51DA0)

inline static constexpr unsigned int DBJBNMAPGKP_TypeDefinitionIndex = 79416;

class DBJBNMAPGKP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x134; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBJBNMAPGKP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJBNMAPGKP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJBNMAPGKP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJBNMAPGKP_FIGPAOKNJLN_OFFSET))(this);
	}
};
