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

#define HHJCDHCJHMB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1494D870)
#define HHJCDHCJHMB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1494D800)
#define HHJCDHCJHMB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1494D5A0)
#define HHJCDHCJHMB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1494DD10)
#define HHJCDHCJHMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1494DB50)

inline static constexpr unsigned int HHJCDHCJHMB_TypeDefinitionIndex = 84358;

class HHJCDHCJHMB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x18
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* LDMKHBOIDMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJCDHCJHMB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJCDHCJHMB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHJCDHCJHMB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHJCDHCJHMB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHJCDHCJHMB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
