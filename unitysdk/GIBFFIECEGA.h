#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class PCFMJDNECHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define GIBFFIECEGA_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x14CE9520)
#define GIBFFIECEGA_CMFEDPGFHCN_OFFSET UNITYSDK_OFFSET(0x14CE9FE0)
#define GIBFFIECEGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14CE94B0)
#define GIBFFIECEGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14CE92B0)
#define GIBFFIECEGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14CE9A40)
#define GIBFFIECEGA_GPFCAOBKPOH_OFFSET UNITYSDK_OFFSET(0x14CE9AD0)
#define GIBFFIECEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE98C0)

inline static constexpr unsigned int GIBFFIECEGA_TypeDefinitionIndex = 71794;

class GIBFFIECEGA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* ABHACBINODB; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* PEPAPCDFMKO; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBFFIECEGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBFFIECEGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GIBFFIECEGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIBFFIECEGA_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void GPFCAOBKPOH(::System::String* IDOPOGOMOBE, ::PCFMJDNECHN* LDNCGMNHANO, ::MoleMole::EntityHandle DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::PCFMJDNECHN*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GIBFFIECEGA_GPFCAOBKPOH_OFFSET))(this, IDOPOGOMOBE, LDNCGMNHANO, DJHFOGHIFEJ);
	}

	::System::Void CMFEDPGFHCN(::System::String* IDOPOGOMOBE, ::PCFMJDNECHN* LDNCGMNHANO, ::MoleMole::EntityHandle DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::PCFMJDNECHN*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GIBFFIECEGA_CMFEDPGFHCN_OFFSET))(this, IDOPOGOMOBE, LDNCGMNHANO, DJHFOGHIFEJ);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GIBFFIECEGA_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
