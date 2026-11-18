#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define JLPDFONJFMM_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x18A25EF0)
#define JLPDFONJFMM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18A25EA0)
#define JLPDFONJFMM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18A25E10)
#define JLPDFONJFMM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18A26130)
#define JLPDFONJFMM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A26090)

inline static constexpr unsigned int JLPDFONJFMM_TypeDefinitionIndex = 43901;

class JLPDFONJFMM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* CFJOAAJOMEM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPDFONJFMM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPDFONJFMM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JLPDFONJFMM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JLPDFONJFMM_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPDFONJFMM_GDEOPIBNOIN_OFFSET))(this);
	}
};
