#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MOKOFODGAAP;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define MOKOFODGAAP_AFJEAHILGBH_EFMGKMGEDCA_OFFSET UNITYSDK_OFFSET(0x11F68520)
#define MOKOFODGAAP_AFJEAHILGBH_EMHJMOCBJHC_OFFSET UNITYSDK_OFFSET(0x11F686C0)
#define MOKOFODGAAP_AFJEAHILGBH_GBIDALDJDKG_OFFSET UNITYSDK_OFFSET(0x11F685A0)
#define MOKOFODGAAP_AFJEAHILGBH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F68280)

inline static constexpr unsigned int MOKOFODGAAP_AFJEAHILGBH_TypeDefinitionIndex = 41425;

class MOKOFODGAAP_AFJEAHILGBH : public ::System::Object
{
public:
	::HOCDHMEPPEG PFLKIHOAJNM; // 0x10
	::HOCDHMEPPEG HEJGJFHJDMI; // 0x40
	::HOCDHMEPPEG CEHMGNCBJCF; // 0x70
	::HOCDHMEPPEG PHKLNOCKJCB; // 0xA0
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* MHBJNGBICKD; // 0xD0
	::System::Boolean JPJHAJKJOHN; // 0xD8

	::System::Void _ctor(::LGCNEDCMPKM& BKBGPKNGNMF, ::MOKOFODGAAP* AMNIHACKELI, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* KIAGKPDIDDH)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::MOKOFODGAAP*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + MOKOFODGAAP_AFJEAHILGBH__CTOR_OFFSET))(this, BKBGPKNGNMF, AMNIHACKELI, KIAGKPDIDDH);
	}

	::System::Void EFMGKMGEDCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOFODGAAP_AFJEAHILGBH_EFMGKMGEDCA_OFFSET))(this);
	}

	::System::Void GBIDALDJDKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOFODGAAP_AFJEAHILGBH_GBIDALDJDKG_OFFSET))(this);
	}

	::System::Void EMHJMOCBJHC(::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOKOFODGAAP_AFJEAHILGBH_EMHJMOCBJHC_OFFSET))(this, DOFCLPCLHOJ);
	}
};
