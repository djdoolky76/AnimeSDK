#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define KMMHKCKKBKF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18642130)
#define KMMHKCKKBKF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18641F80)
#define KMMHKCKKBKF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18642480)
#define KMMHKCKKBKF__CTOR_OFFSET UNITYSDK_OFFSET(0x18642340)

inline static constexpr unsigned int KMMHKCKKBKF_TypeDefinitionIndex = 86844;

class KMMHKCKKBKF : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* MLGMEDMPECK; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* OCDELICPIDP; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMHKCKKBKF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMHKCKKBKF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KMMHKCKKBKF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMHKCKKBKF_GDEOPIBNOIN_OFFSET))(this);
	}
};
