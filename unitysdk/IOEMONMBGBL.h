#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define IOEMONMBGBL_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x1658E500)
#define IOEMONMBGBL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1658DEF0)
#define IOEMONMBGBL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1658DD40)
#define IOEMONMBGBL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1658E470)
#define IOEMONMBGBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1658E330)

inline static constexpr unsigned int IOEMONMBGBL_TypeDefinitionIndex = 93095;

class IOEMONMBGBL : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x28
	::KCMIFNGABDC_1<::System::Single>* GPOGCGLDIHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEMONMBGBL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEMONMBGBL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IOEMONMBGBL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOEMONMBGBL_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + IOEMONMBGBL_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}
};
