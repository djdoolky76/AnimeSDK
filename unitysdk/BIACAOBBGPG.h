#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BIACAOBBGPG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10DFDF80)
#define BIACAOBBGPG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10DFDE40)
#define BIACAOBBGPG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10DFE220)
#define BIACAOBBGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFE120)

inline static constexpr unsigned int BIACAOBBGPG_TypeDefinitionIndex = 69846;

class BIACAOBBGPG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* HANHEBHHGMA; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIACAOBBGPG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIACAOBBGPG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BIACAOBBGPG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIACAOBBGPG_GDEOPIBNOIN_OFFSET))(this);
	}
};
