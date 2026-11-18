#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ELevelNodeState.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class EHGPNGPADCB;
namespace System { class String; }

#define EPABBKALJPO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11CC7AA0)
#define EPABBKALJPO_FNBIDMJEKDH_OFFSET UNITYSDK_OFFSET(0x11CC7820)
#define EPABBKALJPO_GJAAPCMJIGF_OFFSET UNITYSDK_OFFSET(0x11CC7940)
#define EPABBKALJPO_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x11CC79C0)
#define EPABBKALJPO_ILHBMCMGJFN_OFFSET UNITYSDK_OFFSET(0x11CC7A60)
#define EPABBKALJPO_JCEADMHLOIJ_OFFSET UNITYSDK_OFFSET(0x11CC77E0)
#define EPABBKALJPO_LEPPNGILAKM_OFFSET UNITYSDK_OFFSET(0x11CC7AE0)
#define EPABBKALJPO_MMFLLDJHILA_OFFSET UNITYSDK_OFFSET(0x11CC7A10)
#define EPABBKALJPO_OOPDJBJIAAE_OFFSET UNITYSDK_OFFSET(0x11CC7810)
#define EPABBKALJPO_OPKADBCOKFG_OFFSET UNITYSDK_OFFSET(0x11CC7800)
#define EPABBKALJPO_PEKEAIMJBLB_OFFSET UNITYSDK_OFFSET(0x11CC77F0)
#define EPABBKALJPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11CC7860)
#define EPABBKALJPO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x11CC79B0)
#define EPABBKALJPO__CTOR_OFFSET UNITYSDK_OFFSET(0x11CC78D0)

inline static constexpr unsigned int EPABBKALJPO_TypeDefinitionIndex = 46936;

class EPABBKALJPO : public ::System::Object
{
public:
	::EHGPNGPADCB* OBHHOPHMPLI; // 0x10
	::System::Boolean _BOKNMOCMDGC_k__BackingField; // 0x18
	::System::Boolean _DHLCKPICGCB_k__BackingField; // 0x19
	::Share::ELevelNodeState OCOJFKMOKMK; // 0x1A
	::System::Boolean _KCPINIGMHPI_k__BackingField; // 0x1C

	::System::Void _ctor(::EHGPNGPADCB* EHJLNOADMFL)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + EPABBKALJPO__CTOR_OFFSET))(this, EHJLNOADMFL);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO__CTOR_1_OFFSET))(this);
	}

	::System::Boolean JCEADMHLOIJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_JCEADMHLOIJ_OFFSET))(this);
	}

	::System::Boolean PEKEAIMJBLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_PEKEAIMJBLB_OFFSET))(this);
	}

	::System::Boolean OPKADBCOKFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_OPKADBCOKFG_OFFSET))(this);
	}

	::System::Void OOPDJBJIAAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPABBKALJPO_OOPDJBJIAAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean FNBIDMJEKDH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_FNBIDMJEKDH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_TOSTRING_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + EPABBKALJPO_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void MMFLLDJHILA(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + EPABBKALJPO_MMFLLDJHILA_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void ILHBMCMGJFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_ILHBMCMGJFN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void GJAAPCMJIGF(::EHGPNGPADCB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + EPABBKALJPO_GJAAPCMJIGF_OFFSET))(this, EGEGIMGMJHN);
	}

	::EHGPNGPADCB* LEPPNGILAKM()
	{
		return ((::EHGPNGPADCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPABBKALJPO_LEPPNGILAKM_OFFSET))(this);
	}
};
