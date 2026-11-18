#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define MIPNCILBINN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16C8DCD0)
#define MIPNCILBINN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16C8DC40)
#define MIPNCILBINN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16C8E060)
#define MIPNCILBINN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8DF10)

inline static constexpr unsigned int MIPNCILBINN_TypeDefinitionIndex = 47420;

class MIPNCILBINN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPNCILBINN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPNCILBINN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MIPNCILBINN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPNCILBINN_GDEOPIBNOIN_OFFSET))(this);
	}
};
