#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKNNIKCLGMD;
class GFKLNNJHIOL;
class KOOEOIGFICM;

#define EFCCPGCGLIE_BHCPMAOFPLK_OFFSET UNITYSDK_OFFSET(0x1722D770)
#define EFCCPGCGLIE_FMFBKEJEBOO_OFFSET UNITYSDK_OFFSET(0x1722D750)
#define EFCCPGCGLIE_ONCEDAHBDGL_OFFSET UNITYSDK_OFFSET(0x1722D740)
#define EFCCPGCGLIE_PLOOHABKNED_OFFSET UNITYSDK_OFFSET(0x1722D760)
#define EFCCPGCGLIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1722D6F0)

inline static constexpr unsigned int EFCCPGCGLIE_TypeDefinitionIndex = 62818;

class EFCCPGCGLIE : public ::System::Object
{
public:
	::AKNNIKCLGMD* _DPFENOMAIHH_k__BackingField; // 0x10
	::GFKLNNJHIOL* _EGIOHHGBCBG_k__BackingField; // 0x18
	::System::Boolean _KNEGEPNBPCC_k__BackingField; // 0x20
	::System::Boolean MLCEDFPJODK; // 0x21

	::System::Void _ctor(::GFKLNNJHIOL* DFMKILICPFB, ::KOOEOIGFICM* LGCJCGIHNAP)
	{
		return ((::System::Void(*)(::PVOID, ::GFKLNNJHIOL*, ::KOOEOIGFICM*))((::PBYTE)hIl2Cpp + EFCCPGCGLIE__CTOR_OFFSET))(this, DFMKILICPFB, LGCJCGIHNAP);
	}

	::System::Boolean ONCEDAHBDGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCCPGCGLIE_ONCEDAHBDGL_OFFSET))(this);
	}

	::AKNNIKCLGMD* FMFBKEJEBOO()
	{
		return ((::AKNNIKCLGMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCCPGCGLIE_FMFBKEJEBOO_OFFSET))(this);
	}

	::System::Void PLOOHABKNED(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFCCPGCGLIE_PLOOHABKNED_OFFSET))(this, EGEGIMGMJHN);
	}

	::GFKLNNJHIOL* BHCPMAOFPLK()
	{
		return ((::GFKLNNJHIOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCCPGCGLIE_BHCPMAOFPLK_OFFSET))(this);
	}
};
