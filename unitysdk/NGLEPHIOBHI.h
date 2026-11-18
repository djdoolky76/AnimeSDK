#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NGLEPHIOBHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12C5E480)
#define NGLEPHIOBHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12C5E280)
#define NGLEPHIOBHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12C5E8B0)
#define NGLEPHIOBHI__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5E730)

inline static constexpr unsigned int NGLEPHIOBHI_TypeDefinitionIndex = 62512;

class NGLEPHIOBHI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* LDMKHBOIDMJ; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEPHIOBHI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEPHIOBHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NGLEPHIOBHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLEPHIOBHI_GDEOPIBNOIN_OFFSET))(this);
	}
};
