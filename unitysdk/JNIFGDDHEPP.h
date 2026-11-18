#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JNIFGDDHEPP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14FC4F90)
#define JNIFGDDHEPP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14FC4F00)
#define JNIFGDDHEPP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14FC5220)
#define JNIFGDDHEPP__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC5180)

inline static constexpr unsigned int JNIFGDDHEPP_TypeDefinitionIndex = 68352;

class JNIFGDDHEPP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIFGDDHEPP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIFGDDHEPP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JNIFGDDHEPP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIFGDDHEPP_GDEOPIBNOIN_OFFSET))(this);
	}
};
