#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

class KPFMNFNKMLG;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define KPFMNFNKMLG_NLKDPJGFECM_EFMGKMGEDCA_OFFSET UNITYSDK_OFFSET(0x15175A20)
#define KPFMNFNKMLG_NLKDPJGFECM_EMHJMOCBJHC_OFFSET UNITYSDK_OFFSET(0x15175C20)
#define KPFMNFNKMLG_NLKDPJGFECM_GBIDALDJDKG_OFFSET UNITYSDK_OFFSET(0x15175B40)
#define KPFMNFNKMLG_NLKDPJGFECM_JNPACGEDGIL_OFFSET UNITYSDK_OFFSET(0x15175AA0)
#define KPFMNFNKMLG_NLKDPJGFECM_LDKJFOKMGLF_OFFSET UNITYSDK_OFFSET(0x15175BF0)
#define KPFMNFNKMLG_NLKDPJGFECM__CTOR_OFFSET UNITYSDK_OFFSET(0x15175780)

inline static constexpr unsigned int KPFMNFNKMLG_NLKDPJGFECM_TypeDefinitionIndex = 51340;

class KPFMNFNKMLG_NLKDPJGFECM : public ::System::Object
{
public:
	::HOCDHMEPPEG HDMLPGMLFOI; // 0x10
	::HOCDHMEPPEG PFLKIHOAJNM; // 0x40
	::HOCDHMEPPEG PHKLNOCKJCB; // 0x70
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* MHBJNGBICKD; // 0xA0
	::HOCDHMEPPEG CEHMGNCBJCF; // 0xA8
	::System::Boolean JPJHAJKJOHN; // 0xD8

	::System::Void _ctor(::LGCNEDCMPKM& BKBGPKNGNMF, ::KPFMNFNKMLG* AMNIHACKELI, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* KIAGKPDIDDH)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::KPFMNFNKMLG*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM__CTOR_OFFSET))(this, BKBGPKNGNMF, AMNIHACKELI, KIAGKPDIDDH);
	}

	::System::Void EFMGKMGEDCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM_EFMGKMGEDCA_OFFSET))(this);
	}

	::System::Void JNPACGEDGIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM_JNPACGEDGIL_OFFSET))(this);
	}

	::System::Void GBIDALDJDKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM_GBIDALDJDKG_OFFSET))(this);
	}

	::System::Void LDKJFOKMGLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM_LDKJFOKMGLF_OFFSET))(this);
	}

	::System::Void EMHJMOCBJHC(::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPFMNFNKMLG_NLKDPJGFECM_EMHJMOCBJHC_OFFSET))(this, DOFCLPCLHOJ);
	}
};
