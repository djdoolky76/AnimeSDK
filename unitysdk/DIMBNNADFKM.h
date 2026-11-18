#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DIMBNNADFKM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x148AAE00)
#define DIMBNNADFKM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x148AAD70)
#define DIMBNNADFKM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x148AAC40)
#define DIMBNNADFKM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x148AACD0)
#define DIMBNNADFKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x148AAB50)
#define DIMBNNADFKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x148AABC0)
#define DIMBNNADFKM__CTOR_OFFSET UNITYSDK_OFFSET(0x148AAC30)

inline static constexpr unsigned int DIMBNNADFKM_TypeDefinitionIndex = 55700;

class DIMBNNADFKM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x6A; // 0x0
	::System::UInt32 FJHKFEJAKMD; // 0x20
	::System::UInt32 PLHBNHMIAEF; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIMBNNADFKM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMBNNADFKM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMBNNADFKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMBNNADFKM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMBNNADFKM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMBNNADFKM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DEMODKOEEJL, ::System::UInt32 HBCMGOLIOPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DIMBNNADFKM_CNHBDOMKKDE_OFFSET))(this, DEMODKOEEJL, HBCMGOLIOPB);
	}
};
