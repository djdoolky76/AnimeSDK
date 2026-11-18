#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DEDDPKGLKHI_MMBOJCNCDHH.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GHHOABBIDFI_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x18141E00)
#define GHHOABBIDFI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18141D90)
#define GHHOABBIDFI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18141B80)
#define GHHOABBIDFI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x181425D0)
#define GHHOABBIDFI_ODAGAGLBIKA_OFFSET UNITYSDK_OFFSET(0x18142460)
#define GHHOABBIDFI__CTOR_OFFSET UNITYSDK_OFFSET(0x181422C0)

inline static constexpr unsigned int GHHOABBIDFI_TypeDefinitionIndex = 66073;

class GHHOABBIDFI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* AGDNAOABNHH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FKELFNALFJJ; // 0x30
	::KCMIFNGABDC_1<::System::Single>* KLJFCJAJMAE; // 0x38
	::KCMIFNGABDC_1<::System::Single>* EMPCCKMHONN; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHOABBIDFI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHOABBIDFI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHHOABBIDFI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ODAGAGLBIKA(::LGCNEDCMPKM& BKBGPKNGNMF, ::DEDDPKGLKHI_MMBOJCNCDHH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::DEDDPKGLKHI_MMBOJCNCDHH&))((::PBYTE)hIl2Cpp + GHHOABBIDFI_ODAGAGLBIKA_OFFSET))(this, BKBGPKNGNMF, KOIBHLHLMFC);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHHOABBIDFI_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHOABBIDFI_GDEOPIBNOIN_OFFSET))(this);
	}
};
