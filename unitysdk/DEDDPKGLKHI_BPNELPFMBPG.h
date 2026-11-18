#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEDDPKGLKHI_BPNELPFMBPG_AJAOKIMGHJG_OFFSET UNITYSDK_OFFSET(0x19D59D80)
#define DEDDPKGLKHI_BPNELPFMBPG__CTOR_OFFSET UNITYSDK_OFFSET(0x19D59D70)

inline static constexpr unsigned int DEDDPKGLKHI_BPNELPFMBPG_TypeDefinitionIndex = 78352;

class DEDDPKGLKHI_BPNELPFMBPG : public ::System::Object
{
public:
	::System::Int32 BABIHDEGHAB; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x14
	::System::Int32 LFLKOEJGDNP; // 0x18
	::System::Int32 NMIOIIENCLD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_BPNELPFMBPG__CTOR_OFFSET))(this);
	}

	::System::Void AJAOKIMGHJG(::DEDDPKGLKHI_BPNELPFMBPG* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::DEDDPKGLKHI_BPNELPFMBPG*))((::PBYTE)hIl2Cpp + DEDDPKGLKHI_BPNELPFMBPG_AJAOKIMGHJG_OFFSET))(this, LIBPKNHDIGP);
	}
};
