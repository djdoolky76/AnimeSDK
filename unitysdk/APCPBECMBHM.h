#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define APCPBECMBHM_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xF77F530)
#define APCPBECMBHM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF77F4C0)
#define APCPBECMBHM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF77F2C0)
#define APCPBECMBHM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF77FAC0)
#define APCPBECMBHM__CTOR_OFFSET UNITYSDK_OFFSET(0xF77F940)

inline static constexpr unsigned int APCPBECMBHM_TypeDefinitionIndex = 47990;

class APCPBECMBHM : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::String*>* CHFJGKMBBHJ; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* MBDHHLFFEKG; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCPBECMBHM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCPBECMBHM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + APCPBECMBHM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + APCPBECMBHM_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCPBECMBHM_GDEOPIBNOIN_OFFSET))(this);
	}
};
