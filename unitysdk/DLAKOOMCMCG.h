#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DLAKOOMCMCG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFDC3AE0)
#define DLAKOOMCMCG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFDC3B30)
#define DLAKOOMCMCG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFDC39B0)
#define DLAKOOMCMCG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFDC3A40)
#define DLAKOOMCMCG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFDC38B0)
#define DLAKOOMCMCG__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC3930)
#define DLAKOOMCMCG__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC39A0)

inline static constexpr unsigned int DLAKOOMCMCG_TypeDefinitionIndex = 89770;

class DLAKOOMCMCG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x63; // 0x0
	::System::Boolean CDIPBMMDICL; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLAKOOMCMCG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAKOOMCMCG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAKOOMCMCG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAKOOMCMCG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAKOOMCMCG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLAKOOMCMCG_CNHBDOMKKDE_OFFSET))(this, HPINBCPMHJE);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLAKOOMCMCG_FIGPAOKNJLN_OFFSET))(this);
	}
};
