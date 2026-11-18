#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OBLPCLMMLND_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x10056D70)
#define OBLPCLMMLND_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x100569C0)
#define OBLPCLMMLND_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10056810)
#define OBLPCLMMLND_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10056E20)
#define OBLPCLMMLND__CTOR_OFFSET UNITYSDK_OFFSET(0x10056C30)

inline static constexpr unsigned int OBLPCLMMLND_TypeDefinitionIndex = 63060;

class OBLPCLMMLND : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MOGFIIJOBMD; // 0x18
	::MKBBPOFGLOF* MDBJDMPDGND; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* GCPGPCNFAGL; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLPCLMMLND__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLPCLMMLND_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OBLPCLMMLND_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + OBLPCLMMLND_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLPCLMMLND_GDEOPIBNOIN_OFFSET))(this);
	}
};
