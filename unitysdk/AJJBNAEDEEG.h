#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;

#define AJJBNAEDEEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x143B0B70)
#define AJJBNAEDEEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x143B09C0)
#define AJJBNAEDEEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x143B11B0)
#define AJJBNAEDEEG__CTOR_OFFSET UNITYSDK_OFFSET(0x143B0FA0)

inline static constexpr unsigned int AJJBNAEDEEG_TypeDefinitionIndex = 75203;

class AJJBNAEDEEG : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* PPLENJOAIIE; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* FKABJCOOCOP; // 0x30
	::MKBBPOFGLOF* HLLOJKMNNFL; // 0x38
	::MKBBPOFGLOF* DEBCEEGEPGH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJBNAEDEEG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJBNAEDEEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AJJBNAEDEEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJBNAEDEEG_GDEOPIBNOIN_OFFSET))(this);
	}
};
