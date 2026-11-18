#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define FIMLPONPPPG_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x165AEB80)
#define FIMLPONPPPG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16190250)
#define FIMLPONPPPG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16190050)
#define FIMLPONPPPG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x165AEC30)
#define FIMLPONPPPG__CTOR_OFFSET UNITYSDK_OFFSET(0x165AE9B0)

inline static constexpr unsigned int FIMLPONPPPG_TypeDefinitionIndex = 44280;

class FIMLPONPPPG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JKAFMOMNFJC; // 0x30
	::KCMIFNGABDC_1<::System::Single>* FMCKHPABGJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPONPPPG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPONPPPG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FIMLPONPPPG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + FIMLPONPPPG_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMLPONPPPG_GDEOPIBNOIN_OFFSET))(this);
	}
};
