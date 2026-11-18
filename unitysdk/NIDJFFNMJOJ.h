#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NIDJFFNMJOJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xE19ECD0)
#define NIDJFFNMJOJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE19EC60)
#define NIDJFFNMJOJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE19EAB0)
#define NIDJFFNMJOJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE19F080)
#define NIDJFFNMJOJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE19EF40)

inline static constexpr unsigned int NIDJFFNMJOJ_TypeDefinitionIndex = 76919;

class NIDJFFNMJOJ : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* MHADPPEMGDG; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJFFNMJOJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJFFNMJOJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NIDJFFNMJOJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDJFFNMJOJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NIDJFFNMJOJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
