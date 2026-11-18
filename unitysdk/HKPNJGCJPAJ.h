#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HKPNJGCJPAJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15BDA050)
#define HKPNJGCJPAJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15BD9F70)
#define HKPNJGCJPAJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15BDA1D0)
#define HKPNJGCJPAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDA0E0)

inline static constexpr unsigned int HKPNJGCJPAJ_TypeDefinitionIndex = 51834;

class HKPNJGCJPAJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* MBMHFFEDEOL; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* MLNKCNJEOMI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNJGCJPAJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNJGCJPAJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKPNJGCJPAJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKPNJGCJPAJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
