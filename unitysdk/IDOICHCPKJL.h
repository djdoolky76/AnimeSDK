#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define IDOICHCPKJL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF8396E0)
#define IDOICHCPKJL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF839650)
#define IDOICHCPKJL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF8397E0)
#define IDOICHCPKJL__CTOR_OFFSET UNITYSDK_OFFSET(0xF839740)

inline static constexpr unsigned int IDOICHCPKJL_TypeDefinitionIndex = 54114;

class IDOICHCPKJL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* GCBJEOAEIBC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOICHCPKJL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOICHCPKJL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IDOICHCPKJL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDOICHCPKJL_GDEOPIBNOIN_OFFSET))(this);
	}
};
