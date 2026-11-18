#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class BDIGDABPLBK;
class CCGKLCKJFPH;
class CPABOPKIGAL;
class MDLKEKANMHL;
template <typename T> class KCMIFNGABDC_1;

#define LPAIHMADFKE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15903970)
#define LPAIHMADFKE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x159036C0)
#define LPAIHMADFKE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15904210)
#define LPAIHMADFKE_IIAPOPMJHHA_OFFSET UNITYSDK_OFFSET(0x15903870)
#define LPAIHMADFKE_IPFGDOEEMOJ_OFFSET UNITYSDK_OFFSET(0x159042C0)
#define LPAIHMADFKE_KONOFBBAGIE_OFFSET UNITYSDK_OFFSET(0x15904220)
#define LPAIHMADFKE__CTOR_OFFSET UNITYSDK_OFFSET(0x15904080)

inline static constexpr unsigned int LPAIHMADFKE_TypeDefinitionIndex = 79496;

class LPAIHMADFKE : public ::MHMFINLCNFN
{
public:
	static ::Foundation::ViewObject::ViewObjectHandle* StaticGet_ANDDFHGMBOF()
	{
		return (::Foundation::ViewObject::ViewObjectHandle*)Il2CppClass::FromTypeDefinitionIndex(LPAIHMADFKE_TypeDefinitionIndex)->GetStaticField(0x38540);
	}
	static ::System::Int32* StaticGet_KOMCHMAIGIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LPAIHMADFKE_TypeDefinitionIndex)->GetStaticField(0xCB30);
	}
	::CPABOPKIGAL* DGLPCINAMAC; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OEDNJFJIEPP; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* KIEOINAKACH; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* KIKKBEMJIHA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAIHMADFKE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAIHMADFKE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void IIAPOPMJHHA(::MDLKEKANMHL* MHPNGBGGMMN, ::BDIGDABPLBK*& OLAHLBBKEIL, ::CCGKLCKJFPH* EBALKHIEICC)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*, ::BDIGDABPLBK*&, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + LPAIHMADFKE_IIAPOPMJHHA_OFFSET))(this, MHPNGBGGMMN, OLAHLBBKEIL, EBALKHIEICC);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LPAIHMADFKE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPAIHMADFKE_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void KONOFBBAGIE(::MDLKEKANMHL* MIALFKCCCPI, ::BDIGDABPLBK*& KMGKAIDEIBA, ::CCGKLCKJFPH* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*, ::BDIGDABPLBK*&, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + LPAIHMADFKE_KONOFBBAGIE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void IPFGDOEEMOJ(::MDLKEKANMHL* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::MDLKEKANMHL*))((::PBYTE)hIl2Cpp + LPAIHMADFKE_IPFGDOEEMOJ_OFFSET))(this, MHPNGBGGMMN);
	}
};
