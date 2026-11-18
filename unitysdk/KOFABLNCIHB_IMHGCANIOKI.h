#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class KOFABLNCIHB;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define KOFABLNCIHB_IMHGCANIOKI_EFMGKMGEDCA_OFFSET UNITYSDK_OFFSET(0x129ACAD0)
#define KOFABLNCIHB_IMHGCANIOKI_EMHJMOCBJHC_OFFSET UNITYSDK_OFFSET(0x129AC840)
#define KOFABLNCIHB_IMHGCANIOKI_GBIDALDJDKG_OFFSET UNITYSDK_OFFSET(0x129AC7A0)
#define KOFABLNCIHB_IMHGCANIOKI_JNPACGEDGIL_OFFSET UNITYSDK_OFFSET(0x129ACB50)
#define KOFABLNCIHB_IMHGCANIOKI_LDKJFOKMGLF_OFFSET UNITYSDK_OFFSET(0x129ACBF0)
#define KOFABLNCIHB_IMHGCANIOKI__CTOR_OFFSET UNITYSDK_OFFSET(0x129AC510)

inline static constexpr unsigned int KOFABLNCIHB_IMHGCANIOKI_TypeDefinitionIndex = 74190;

class KOFABLNCIHB_IMHGCANIOKI : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* MHBJNGBICKD; // 0x10
	::HOCDHMEPPEG HDMLPGMLFOI; // 0x18
	::HOCDHMEPPEG PHKLNOCKJCB; // 0x48
	::HOCDHMEPPEG CEHMGNCBJCF; // 0x78
	::HOCDHMEPPEG PFLKIHOAJNM; // 0xA8
	::System::Boolean JPJHAJKJOHN; // 0xD8

	::System::Void _ctor(::LGCNEDCMPKM& BKBGPKNGNMF, ::KOFABLNCIHB* AMNIHACKELI, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* KIAGKPDIDDH)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::KOFABLNCIHB*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI__CTOR_OFFSET))(this, BKBGPKNGNMF, AMNIHACKELI, KIAGKPDIDDH);
	}

	::System::Void GBIDALDJDKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI_GBIDALDJDKG_OFFSET))(this);
	}

	::System::Void EMHJMOCBJHC(::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI_EMHJMOCBJHC_OFFSET))(this, DOFCLPCLHOJ);
	}

	::System::Void EFMGKMGEDCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI_EFMGKMGEDCA_OFFSET))(this);
	}

	::System::Void JNPACGEDGIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI_JNPACGEDGIL_OFFSET))(this);
	}

	::System::Void LDKJFOKMGLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFABLNCIHB_IMHGCANIOKI_LDKJFOKMGLF_OFFSET))(this);
	}
};
