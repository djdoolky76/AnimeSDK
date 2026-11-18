#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class BDIGDABPLBK;
class CCGKLCKJFPH;
class FOJONDIPFFL;
class MDLKEKANMHL;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PKFPGAPLFLA_BFPKPFCNMJF_OFFSET UNITYSDK_OFFSET(0x11990850)
#define PKFPGAPLFLA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x119902F0)
#define PKFPGAPLFLA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1198FFA0)
#define PKFPGAPLFLA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11990D30)
#define PKFPGAPLFLA_IIAPOPMJHHA_OFFSET UNITYSDK_OFFSET(0x119901B0)
#define PKFPGAPLFLA_IPFGDOEEMOJ_OFFSET UNITYSDK_OFFSET(0x11990BB0)
#define PKFPGAPLFLA_KONOFBBAGIE_OFFSET UNITYSDK_OFFSET(0x11990B10)
#define PKFPGAPLFLA__CTOR_OFFSET UNITYSDK_OFFSET(0x11990940)

inline static constexpr unsigned int PKFPGAPLFLA_TypeDefinitionIndex = 80304;

class PKFPGAPLFLA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* MGAOBIGMIOP; // 0x28
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x30
	::KCMIFNGABDC_1<::System::String*>* CEJENBBHBBG; // 0x38
	::KCMIFNGABDC_1<::System::String*>* BKGFGJLEMDP; // 0x40
	::AAMKEDEDHPD_1<::FOJONDIPFFL*>* PPNKNKODLJP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFPGAPLFLA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void IIAPOPMJHHA(::MDLKEKANMHL* MHPNGBGGMMN, ::BDIGDABPLBK*& OLAHLBBKEIL, ::CCGKLCKJFPH* EBALKHIEICC)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*, ::BDIGDABPLBK*&, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_IIAPOPMJHHA_OFFSET))(this, MHPNGBGGMMN, OLAHLBBKEIL, EBALKHIEICC);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void KONOFBBAGIE(::MDLKEKANMHL* MIALFKCCCPI, ::BDIGDABPLBK*& KMGKAIDEIBA, ::CCGKLCKJFPH* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*, ::BDIGDABPLBK*&, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_KONOFBBAGIE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::System::Void IPFGDOEEMOJ(::MDLKEKANMHL* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_IPFGDOEEMOJ_OFFSET))(MHPNGBGGMMN);
	}

	static ::Cysharp::Threading::Tasks::UniTask BFPKPFCNMJF(::FOJONDIPFFL* FGADDIJOOBH, ::HOCDHMEPPEG NPFIONPDFED, ::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::FOJONDIPFFL*, ::HOCDHMEPPEG, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_BFPKPFCNMJF_OFFSET))(FGADDIJOOBH, NPFIONPDFED, OMMEALOOOOD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFPGAPLFLA_GDEOPIBNOIN_OFFSET))(this);
	}
};
