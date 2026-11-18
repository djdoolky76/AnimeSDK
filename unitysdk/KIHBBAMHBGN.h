#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/KIHBBAMHBGN_ENPGKFIGMLB.h"

class KKOCDIKKHAG;
class MFEEFEPGJIL;
class OPGBLKHLCIN;
namespace Nap::NapECS { class EcsWorld; }

#define KIHBBAMHBGN_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x16343950)
#define KIHBBAMHBGN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x163435C0)
#define KIHBBAMHBGN_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x16343B70)
#define KIHBBAMHBGN_JMEFAOMCCBO_OFFSET UNITYSDK_OFFSET(0x163439F0)
#define KIHBBAMHBGN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16343AD0)
#define KIHBBAMHBGN_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16343750)
#define KIHBBAMHBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x163438E0)

inline static constexpr unsigned int KIHBBAMHBGN_TypeDefinitionIndex = 53638;

class KIHBBAMHBGN : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIHBBAMHBGN__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KIHBBAMHBGN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHBBAMHBGN_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIHBBAMHBGN_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean JMEFAOMCCBO(::OPGBLKHLCIN* OMIPOBNOCJC, ::KIHBBAMHBGN_ENPGKFIGMLB& param_1)
	{
		return ((::System::Boolean(*)(::OPGBLKHLCIN*, ::KIHBBAMHBGN_ENPGKFIGMLB&))((::PBYTE)hIl2Cpp + KIHBBAMHBGN_JMEFAOMCCBO_OFFSET))(OMIPOBNOCJC, param_1);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KIHBBAMHBGN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JDDMFEELKDH(::MFEEFEPGJIL* AMILCCJFCBP, ::KKOCDIKKHAG* DLFOBFANLOF)
	{
		return ((::System::Void(*)(::MFEEFEPGJIL*, ::KKOCDIKKHAG*))((::PBYTE)hIl2Cpp + KIHBBAMHBGN_JDDMFEELKDH_OFFSET))(AMILCCJFCBP, DLFOBFANLOF);
	}
};
