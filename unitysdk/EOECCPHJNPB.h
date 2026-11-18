#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EOECCPHJNPB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xF9E52B0)
#define EOECCPHJNPB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF9E5240)
#define EOECCPHJNPB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9E5160)
#define EOECCPHJNPB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9E5510)
#define EOECCPHJNPB__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E5420)

inline static constexpr unsigned int EOECCPHJNPB_TypeDefinitionIndex = 42970;

class EOECCPHJNPB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* JGHDGKFEEEE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOECCPHJNPB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOECCPHJNPB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EOECCPHJNPB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOECCPHJNPB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EOECCPHJNPB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
