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

#define BGDCAFBGGCH_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x143DB520)
#define BGDCAFBGGCH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x143DAA40)
#define BGDCAFBGGCH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x143DA840)
#define BGDCAFBGGCH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x143DB5D0)
#define BGDCAFBGGCH__CTOR_OFFSET UNITYSDK_OFFSET(0x143DB350)

inline static constexpr unsigned int BGDCAFBGGCH_TypeDefinitionIndex = 69920;

class BGDCAFBGGCH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* PPOFKBOEDCM; // 0x18
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* BJICGJBCHNB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDCAFBGGCH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_GDEOPIBNOIN_OFFSET))(this);
	}
};
