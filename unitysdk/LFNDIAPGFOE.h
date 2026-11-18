#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJJEGAIJAMK.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define LFNDIAPGFOE_BHLHIADHGDA_OFFSET UNITYSDK_OFFSET(0x1524AF70)
#define LFNDIAPGFOE_CGNGEGEABJG_OFFSET UNITYSDK_OFFSET(0x1524AFA0)
#define LFNDIAPGFOE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1524AE50)
#define LFNDIAPGFOE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1524AEE0)
#define LFNDIAPGFOE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1524ADC0)
#define LFNDIAPGFOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1524AD40)
#define LFNDIAPGFOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1524ADB0)

inline static constexpr unsigned int LFNDIAPGFOE_TypeDefinitionIndex = 62479;

class LFNDIAPGFOE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x92; // 0x0
	::UnityEngine::RaycastHit _PHIPGBAMCKF_k__BackingField; // 0x20
	::AJJEGAIJAMK IIMANDCDLPB; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNDIAPGFOE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNDIAPGFOE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNDIAPGFOE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::UnityEngine::RaycastHit OFLHPPDJLNL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LFNDIAPGFOE_CNHBDOMKKDE_OFFSET))(this, OFLHPPDJLNL);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNDIAPGFOE_FIGPAOKNJLN_OFFSET))(this);
	}

	::UnityEngine::RaycastHit BHLHIADHGDA()
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNDIAPGFOE_BHLHIADHGDA_OFFSET))(this);
	}

	::System::Void CGNGEGEABJG(::UnityEngine::RaycastHit EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LFNDIAPGFOE_CGNGEGEABJG_OFFSET))(this, EGEGIMGMJHN);
	}
};
