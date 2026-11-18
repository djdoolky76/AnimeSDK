#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class AHAICPLGBAH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EEHJOPEJOCD_DLEDFCFPKAB_OFFSET UNITYSDK_OFFSET(0x16136BB0)
#define EEHJOPEJOCD_GKEEJLGFOIB_OFFSET UNITYSDK_OFFSET(0x16136040)
#define EEHJOPEJOCD_IDAPPNLOABP_OFFSET UNITYSDK_OFFSET(0x16136000)
#define EEHJOPEJOCD_JLHMBIDLJBP_OFFSET UNITYSDK_OFFSET(0x161369B0)
#define EEHJOPEJOCD_LDPNDCNAGKJ_OFFSET UNITYSDK_OFFSET(0x161369A0)
#define EEHJOPEJOCD_LNFNFCEEJFO_OFFSET UNITYSDK_OFFSET(0x16136AF0)
#define EEHJOPEJOCD_NAOBPCNNAII_OFFSET UNITYSDK_OFFSET(0x161367D0)
#define EEHJOPEJOCD_NGPBEGNCNGF_1_OFFSET UNITYSDK_OFFSET(0x16136290)
#define EEHJOPEJOCD_NGPBEGNCNGF_OFFSET UNITYSDK_OFFSET(0x161361C0)
#define EEHJOPEJOCD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16136410)
#define EEHJOPEJOCD_OCPHMADHAHC_OFFSET UNITYSDK_OFFSET(0x16136C20)
#define EEHJOPEJOCD_ODHILGCBEKN_OFFSET UNITYSDK_OFFSET(0x16136B70)
#define EEHJOPEJOCD__CTOR_OFFSET UNITYSDK_OFFSET(0x16135EB0)

inline static constexpr unsigned int EEHJOPEJOCD_TypeDefinitionIndex = 80521;

class EEHJOPEJOCD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::KGOEPEBCOOB, ::AHAICPLGBAH*>* MHKPDGHBCEG; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* NLENBIPMPAF; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* IALLCFCOGPO; // 0x20
	::System::Collections::Generic::Dictionary_2<::KGOEPEBCOOB, ::AHAICPLGBAH*>* MDONHEEGECA; // 0x28
	::System::Boolean _LLAEOJFPIIO_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJOPEJOCD__CTOR_OFFSET))(this);
	}

	::System::Void IDAPPNLOABP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_IDAPPNLOABP_OFFSET))(this);
	}

	::System::Boolean GKEEJLGFOIB(::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_GKEEJLGFOIB_OFFSET))(this, LJMPPBEMEPP);
	}

	::KGOEPEBCOOB NGPBEGNCNGF(::System::Int32 HGNBIOANEAL)
	{
		return ((::KGOEPEBCOOB(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_NGPBEGNCNGF_OFFSET))(this, HGNBIOANEAL);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean NAOBPCNNAII(::KGOEPEBCOOB BOBIPEJFFBP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KGOEPEBCOOB))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_NAOBPCNNAII_OFFSET))(this, BOBIPEJFFBP);
	}

	::System::Void LDPNDCNAGKJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_LDPNDCNAGKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::KGOEPEBCOOB JLHMBIDLJBP(::AHAICPLGBAH* EPIDDDEJJDE)
	{
		return ((::KGOEPEBCOOB(*)(::PVOID, ::AHAICPLGBAH*))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_JLHMBIDLJBP_OFFSET))(this, EPIDDDEJJDE);
	}

	::System::Void LNFNFCEEJFO(::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_LNFNFCEEJFO_OFFSET))(this, PHHDHIBOCKA);
	}

	::KGOEPEBCOOB NGPBEGNCNGF_1(::AHAICPLGBAH* EPIDDDEJJDE)
	{
		return ((::KGOEPEBCOOB(*)(::PVOID, ::AHAICPLGBAH*))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_NGPBEGNCNGF_1_OFFSET))(this, EPIDDDEJJDE);
	}

	::System::Void ODHILGCBEKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_ODHILGCBEKN_OFFSET))(this);
	}

	::System::Void DLEDFCFPKAB(::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_DLEDFCFPKAB_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean OCPHMADHAHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHJOPEJOCD_OCPHMADHAHC_OFFSET))(this);
	}
};
