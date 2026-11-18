#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define CNLIPFFFGDA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12046090)
#define CNLIPFFFGDA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12045E90)
#define CNLIPFFFGDA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x120464D0)
#define CNLIPFFFGDA__CTOR_OFFSET UNITYSDK_OFFSET(0x12046300)

inline static constexpr unsigned int CNLIPFFFGDA_TypeDefinitionIndex = 89532;

class CNLIPFFFGDA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* MMCPDNELKAM; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* IMAFLHFEFFN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLIPFFFGDA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLIPFFFGDA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CNLIPFFFGDA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLIPFFFGDA_GDEOPIBNOIN_OFFSET))(this);
	}
};
