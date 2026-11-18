#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CDLPMFPBDBA;
namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define HFEGFEAKGCA_BJHILDCGDGD_OFFSET UNITYSDK_OFFSET(0x17A441D0)
#define HFEGFEAKGCA_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x17A440C0)
#define HFEGFEAKGCA_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x17A44140)
#define HFEGFEAKGCA_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x17A441F0)
#define HFEGFEAKGCA_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x17A440B0)
#define HFEGFEAKGCA_LNHLCEJBOIN_OFFSET UNITYSDK_OFFSET(0x17A440A0)
#define HFEGFEAKGCA_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x17A44180)
#define HFEGFEAKGCA_NLGHFLLBGMB_OFFSET UNITYSDK_OFFSET(0x17A441E0)
#define HFEGFEAKGCA_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x17A44100)
#define HFEGFEAKGCA_PANAINEBINN_OFFSET UNITYSDK_OFFSET(0x17A441C0)
#define HFEGFEAKGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x17A44090)

inline static constexpr unsigned int HFEGFEAKGCA_TypeDefinitionIndex = 69596;

class HFEGFEAKGCA : public ::System::Object
{
public:
	::CDLPMFPBDBA* _GLMMDGFKHIC_k__BackingField; // 0x10
	::MoleMole::GalGame::GalPlayableNodeBase* _DGGBKMAKAJI_k__BackingField; // 0x18

	::System::Void _ctor(::CDLPMFPBDBA* PMNLAHHMNFM, ::MoleMole::GalGame::GalPlayableNodeBase* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::CDLPMFPBDBA*, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HFEGFEAKGCA__CTOR_OFFSET))(this, PMNLAHHMNFM, DFMKILICPFB);
	}

	::System::Single LNHLCEJBOIN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_LNHLCEJBOIN_OFFSET))(this);
	}

	::System::Single HMPFPCCBKMJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_HMPFPCCBKMJ_OFFSET))(this);
	}

	::System::Void DCJMFMAHBLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_DCJMFMAHBLD_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void PANAINEBINN(::MoleMole::GalGame::GalPlayableNodeBase* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_PANAINEBINN_OFFSET))(this, EGEGIMGMJHN);
	}

	::CDLPMFPBDBA* BJHILDCGDGD()
	{
		return ((::CDLPMFPBDBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_BJHILDCGDGD_OFFSET))(this);
	}

	::System::Void NLGHFLLBGMB(::CDLPMFPBDBA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CDLPMFPBDBA*))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_NLGHFLLBGMB_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::GalGame::GalPlayableNodeBase* GACPDCEMJOA()
	{
		return ((::MoleMole::GalGame::GalPlayableNodeBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGFEAKGCA_GACPDCEMJOA_OFFSET))(this);
	}
};
