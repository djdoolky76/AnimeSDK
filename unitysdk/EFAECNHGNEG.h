#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EFAECNHGNEG_AMMNBINFGDD_OFFSET UNITYSDK_OFFSET(0x154A39F0)
#define EFAECNHGNEG_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x154A3CB0)
#define EFAECNHGNEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x154A3840)
#define EFAECNHGNEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x154A3600)
#define EFAECNHGNEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x154A3C20)
#define EFAECNHGNEG_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x154A3740)
#define EFAECNHGNEG__CCTOR_OFFSET UNITYSDK_OFFSET(0x154A3C00)
#define EFAECNHGNEG__CTOR_OFFSET UNITYSDK_OFFSET(0x154A3AB0)

inline static constexpr unsigned int EFAECNHGNEG_TypeDefinitionIndex = 83996;

class EFAECNHGNEG : public ::BKCJAIFHNKF
{
public:
	static ::System::Int32* StaticGet_PHMIDIMJCCM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EFAECNHGNEG_TypeDefinitionIndex)->GetStaticField(0x13730);
	}
	::AAMKEDEDHPD_1<::System::Int32>* FILAMFLMBHK; // 0x18
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* OPNFMCBPBLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFAECNHGNEG__CCTOR_OFFSET))();
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EFAECNHGNEG_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + EFAECNHGNEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* AMMNBINFGDD(::LGCNEDCMPKM BKBGPKNGNMF, ::System::Int32 DABCKBIAKHA)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::System::Int32))((::PBYTE)hIl2Cpp + EFAECNHGNEG_AMMNBINFGDD_OFFSET))(this, BKBGPKNGNMF, DABCKBIAKHA);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAECNHGNEG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ(::LGCNEDCMPKM BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + EFAECNHGNEG_BGJPLEHEDKJ_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}
};
