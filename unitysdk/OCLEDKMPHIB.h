#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OCLEDKMPHIB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xF175D30)
#define OCLEDKMPHIB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF175CC0)
#define OCLEDKMPHIB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF175A60)
#define OCLEDKMPHIB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF1761E0)
#define OCLEDKMPHIB__CTOR_OFFSET UNITYSDK_OFFSET(0xF176020)

inline static constexpr unsigned int OCLEDKMPHIB_TypeDefinitionIndex = 93018;

class OCLEDKMPHIB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x38
	::KCMIFNGABDC_1<::System::Single>* LDMKHBOIDMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLEDKMPHIB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLEDKMPHIB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OCLEDKMPHIB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLEDKMPHIB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OCLEDKMPHIB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
