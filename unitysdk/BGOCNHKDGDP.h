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

#define BGOCNHKDGDP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x115049C0)
#define BGOCNHKDGDP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11504950)
#define BGOCNHKDGDP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x115046F0)
#define BGOCNHKDGDP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11504E60)
#define BGOCNHKDGDP__CTOR_OFFSET UNITYSDK_OFFSET(0x11504CA0)

inline static constexpr unsigned int BGOCNHKDGDP_TypeDefinitionIndex = 56128;

class BGOCNHKDGDP : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* LDMKHBOIDMJ; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOCNHKDGDP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOCNHKDGDP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BGOCNHKDGDP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGOCNHKDGDP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BGOCNHKDGDP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
