#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FOJONDIPFFL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define ABMHFMNGPMI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1420CF90)
#define ABMHFMNGPMI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1420CEB0)
#define ABMHFMNGPMI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1420D2E0)
#define ABMHFMNGPMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1420D1F0)

inline static constexpr unsigned int ABMHFMNGPMI_TypeDefinitionIndex = 85845;

class ABMHFMNGPMI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* NHMJMJKEBEK; // 0x28
	::KCMIFNGABDC_1<::FOJONDIPFFL*>* PPNKNKODLJP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMHFMNGPMI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMHFMNGPMI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ABMHFMNGPMI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMHFMNGPMI_GDEOPIBNOIN_OFFSET))(this);
	}
};
