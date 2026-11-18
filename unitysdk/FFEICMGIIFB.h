#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define FFEICMGIIFB_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x11D04460)
#define FFEICMGIIFB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11D040F0)
#define FFEICMGIIFB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11D03F40)
#define FFEICMGIIFB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11D04510)
#define FFEICMGIIFB__CTOR_OFFSET UNITYSDK_OFFSET(0x11D042D0)

inline static constexpr unsigned int FFEICMGIIFB_TypeDefinitionIndex = 55219;

class FFEICMGIIFB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BIAAOMJOGAO; // 0x18
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEICMGIIFB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEICMGIIFB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FFEICMGIIFB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + FFEICMGIIFB_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEICMGIIFB_GDEOPIBNOIN_OFFSET))(this);
	}
};
