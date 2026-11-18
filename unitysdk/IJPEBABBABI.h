#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define IJPEBABBABI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1657CAA0)
#define IJPEBABBABI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1657C960)
#define IJPEBABBABI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1657CD10)
#define IJPEBABBABI__CTOR_OFFSET UNITYSDK_OFFSET(0x1657CC10)

inline static constexpr unsigned int IJPEBABBABI_TypeDefinitionIndex = 92315;

class IJPEBABBABI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KNBNCOFHABK; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEBABBABI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEBABBABI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IJPEBABBABI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJPEBABBABI_GDEOPIBNOIN_OFFSET))(this);
	}
};
