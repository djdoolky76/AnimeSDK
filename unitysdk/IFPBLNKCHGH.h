#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define IFPBLNKCHGH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A462960)
#define IFPBLNKCHGH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A4627B0)
#define IFPBLNKCHGH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A462FD0)
#define IFPBLNKCHGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A462E70)

inline static constexpr unsigned int IFPBLNKCHGH_TypeDefinitionIndex = 39777;

class IFPBLNKCHGH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::String*>* KDDPFONACHD; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* MALFOLLJKOL; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* FNLGDLHAEGD; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* BDIHONPBEGB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPBLNKCHGH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPBLNKCHGH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IFPBLNKCHGH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPBLNKCHGH_GDEOPIBNOIN_OFFSET))(this);
	}
};
