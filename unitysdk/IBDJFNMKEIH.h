#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IBDJFNMKEIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E9AB20)
#define IBDJFNMKEIH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E9A9E0)
#define IBDJFNMKEIH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E9AD00)
#define IBDJFNMKEIH__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9AC00)

inline static constexpr unsigned int IBDJFNMKEIH_TypeDefinitionIndex = 49272;

class IBDJFNMKEIH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OFBFGHCJHNM; // 0x18
	::CPABOPKIGAL* HMNPNEALHEH; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDJFNMKEIH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDJFNMKEIH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IBDJFNMKEIH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDJFNMKEIH_GDEOPIBNOIN_OFFSET))(this);
	}
};
