#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MDAAOGCDBNM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14D63820)
#define MDAAOGCDBNM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14D636F0)
#define MDAAOGCDBNM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14D63780)
#define MDAAOGCDBNM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14D63600)
#define MDAAOGCDBNM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D63670)
#define MDAAOGCDBNM__CTOR_OFFSET UNITYSDK_OFFSET(0x14D636E0)

inline static constexpr unsigned int MDAAOGCDBNM_TypeDefinitionIndex = 53445;

class MDAAOGCDBNM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x20; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDAAOGCDBNM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAAOGCDBNM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAAOGCDBNM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAAOGCDBNM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAAOGCDBNM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDAAOGCDBNM_FIGPAOKNJLN_OFFSET))(this);
	}
};
