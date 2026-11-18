#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LANLDKLKDHP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A2E85E0)
#define LANLDKLKDHP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A2E8550)
#define LANLDKLKDHP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A2E84C0)
#define LANLDKLKDHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2E8440)
#define LANLDKLKDHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E84B0)

inline static constexpr unsigned int LANLDKLKDHP_TypeDefinitionIndex = 91908;

class LANLDKLKDHP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11E; // 0x0
	::System::Boolean CDALNEAKLKJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LANLDKLKDHP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANLDKLKDHP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANLDKLKDHP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LANLDKLKDHP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean NPFIONPDFED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LANLDKLKDHP_CNHBDOMKKDE_OFFSET))(this, NPFIONPDFED);
	}
};
