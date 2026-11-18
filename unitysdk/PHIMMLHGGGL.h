#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PHIMMLHGGGL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x194A1DF0)
#define PHIMMLHGGGL_EPDJNANCLIO_OFFSET UNITYSDK_OFFSET(0x194A1E70)
#define PHIMMLHGGGL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x194A1E80)
#define PHIMMLHGGGL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x194A1D60)
#define PHIMMLHGGGL_LDIGJBCKGLD_OFFSET UNITYSDK_OFFSET(0x194A1E50)
#define PHIMMLHGGGL_LLBBCOBJLLM_OFFSET UNITYSDK_OFFSET(0x194A1F10)
#define PHIMMLHGGGL_OAHLLLBGHPA_OFFSET UNITYSDK_OFFSET(0x194A1E60)
#define PHIMMLHGGGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A1CE0)
#define PHIMMLHGGGL__CTOR_OFFSET UNITYSDK_OFFSET(0x194A1D50)

inline static constexpr unsigned int PHIMMLHGGGL_TypeDefinitionIndex = 54510;

class PHIMMLHGGGL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x83; // 0x0
	::System::Int32 _OJBNGFLBMPA_k__BackingField; // 0x20
	::System::Int32 _JMPGICKHAOH_k__BackingField; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHIMMLHGGGL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMMLHGGGL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 EJKHEBIEKDE, ::System::Int32 MFIONBMNPCC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_CNHBDOMKKDE_OFFSET))(this, EJKHEBIEKDE, MFIONBMNPCC);
	}

	::System::Void LDIGJBCKGLD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_LDIGJBCKGLD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OAHLLLBGHPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_OAHLLLBGHPA_OFFSET))(this);
	}

	::System::Int32 EPDJNANCLIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_EPDJNANCLIO_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void LLBBCOBJLLM(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHIMMLHGGGL_LLBBCOBJLLM_OFFSET))(this, EGEGIMGMJHN);
	}
};
