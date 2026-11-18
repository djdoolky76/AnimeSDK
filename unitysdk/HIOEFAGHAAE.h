#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define HIOEFAGHAAE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11025950)
#define HIOEFAGHAAE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11025750)
#define HIOEFAGHAAE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11025D30)
#define HIOEFAGHAAE__CTOR_OFFSET UNITYSDK_OFFSET(0x11025BB0)

inline static constexpr unsigned int HIOEFAGHAAE_TypeDefinitionIndex = 54919;

class HIOEFAGHAAE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* LJDLFAAOIAM; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Single>* JPIHKNPJKPH; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOEFAGHAAE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOEFAGHAAE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HIOEFAGHAAE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOEFAGHAAE_GDEOPIBNOIN_OFFSET))(this);
	}
};
