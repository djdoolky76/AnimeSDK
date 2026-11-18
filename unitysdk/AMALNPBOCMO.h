#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AMALNPBOCMO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11BC3160)
#define AMALNPBOCMO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11BC2F60)
#define AMALNPBOCMO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11BC3760)
#define AMALNPBOCMO__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC35E0)

inline static constexpr unsigned int AMALNPBOCMO_TypeDefinitionIndex = 64272;

class AMALNPBOCMO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FGCGCEFGGIA; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HPEFMJFCIHN; // 0x28
	::KCMIFNGABDC_1<::System::Single>* FOFKFDMAKKJ; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMALNPBOCMO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMALNPBOCMO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AMALNPBOCMO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMALNPBOCMO_GDEOPIBNOIN_OFFSET))(this);
	}
};
