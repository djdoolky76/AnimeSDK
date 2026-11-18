#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPBDNENJMOL.h"

#define ADICFEAHDAG_BFBPCOIGJHC_OFFSET UNITYSDK_OFFSET(0x144BDB80)
#define ADICFEAHDAG_LHDBEFDKFLO_OFFSET UNITYSDK_OFFSET(0x144BDBD0)
#define ADICFEAHDAG_MOJPDLPICME_OFFSET UNITYSDK_OFFSET(0x144BD9C0)
#define ADICFEAHDAG_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x144BDC20)
#define ADICFEAHDAG_NNABCEPBCBJ_OFFSET UNITYSDK_OFFSET(0x144BDC30)
#define ADICFEAHDAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x144BD930)
#define ADICFEAHDAG__CTOR_OFFSET UNITYSDK_OFFSET(0x144BD9B0)

inline static constexpr unsigned int ADICFEAHDAG_TypeDefinitionIndex = 82481;

class ADICFEAHDAG : public ::MPBDNENJMOL
{
public:
	::System::Int32 _CFEIJPOHNCH_k__BackingField; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADICFEAHDAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADICFEAHDAG__CTOR_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Void MOJPDLPICME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICFEAHDAG_MOJPDLPICME_OFFSET))(this);
	}

	::System::Void BFBPCOIGJHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICFEAHDAG_BFBPCOIGJHC_OFFSET))(this);
	}

	::System::Void LHDBEFDKFLO(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADICFEAHDAG_LHDBEFDKFLO_OFFSET))(this, LEHABHCOMGH);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADICFEAHDAG_NFKFHJBEPGD_OFFSET))(this);
	}

	::System::Void NNABCEPBCBJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ADICFEAHDAG_NNABCEPBCBJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
