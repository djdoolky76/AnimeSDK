#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class BDIGDABPLBK;
class CCGKLCKJFPH;
class HOFAIFGAHGJ;
class MDLKEKANMHL;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MHAPBDEEALD_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x156AD210)
#define MHAPBDEEALD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x156AC970)
#define MHAPBDEEALD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x156AC4C0)
#define MHAPBDEEALD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x156AD2C0)
#define MHAPBDEEALD_IIAPOPMJHHA_OFFSET UNITYSDK_OFFSET(0x156AC830)
#define MHAPBDEEALD_IPFGDOEEMOJ_OFFSET UNITYSDK_OFFSET(0x156AD350)
#define MHAPBDEEALD_KONOFBBAGIE_OFFSET UNITYSDK_OFFSET(0x156AD170)
#define MHAPBDEEALD__CTOR_OFFSET UNITYSDK_OFFSET(0x156ACEC0)

inline static constexpr unsigned int MHAPBDEEALD_TypeDefinitionIndex = 54897;

class MHAPBDEEALD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HGPAEGALPFE; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* FFEDOMBCGEP; // 0x30
	::KCMIFNGABDC_1<::System::String*>* PDBLBDGAFPD; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JLPBANKKDAM; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* JFDMCJCNLNM; // 0x48
	::MKBBPOFGLOF* DGFFHOLAFLN; // 0x50
	::MKBBPOFGLOF* PKCEMNJECEP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void IIAPOPMJHHA(::MDLKEKANMHL* MHPNGBGGMMN, ::BDIGDABPLBK*& OLAHLBBKEIL, ::CCGKLCKJFPH* EBALKHIEICC)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*, ::BDIGDABPLBK*&, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + MHAPBDEEALD_IIAPOPMJHHA_OFFSET))(this, MHPNGBGGMMN, OLAHLBBKEIL, EBALKHIEICC);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MHAPBDEEALD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void KONOFBBAGIE(::MDLKEKANMHL* MIALFKCCCPI, ::BDIGDABPLBK*& KMGKAIDEIBA, ::CCGKLCKJFPH* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*, ::BDIGDABPLBK*&, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + MHAPBDEEALD_KONOFBBAGIE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + MHAPBDEEALD_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void IPFGDOEEMOJ(::MDLKEKANMHL* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + MHAPBDEEALD_IPFGDOEEMOJ_OFFSET))(this, EIFONLCJOPG);
	}
};
