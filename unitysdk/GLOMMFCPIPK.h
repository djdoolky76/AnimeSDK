#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GLOMMFCPIPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DE5F70)
#define GLOMMFCPIPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DE5D70)
#define GLOMMFCPIPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DE63A0)
#define GLOMMFCPIPK__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE6220)

inline static constexpr unsigned int GLOMMFCPIPK_TypeDefinitionIndex = 43127;

class GLOMMFCPIPK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* LDMKHBOIDMJ; // 0x28
	::KCMIFNGABDC_1<::System::String*>* NGMPAIHFBMJ; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOMMFCPIPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOMMFCPIPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GLOMMFCPIPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOMMFCPIPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
