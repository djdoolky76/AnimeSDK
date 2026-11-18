#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JOLGHODKAKD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17B591F0)
#define JOLGHODKAKD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17B58F30)
#define JOLGHODKAKD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17B597B0)
#define JOLGHODKAKD__CTOR_OFFSET UNITYSDK_OFFSET(0x17B595B0)

inline static constexpr unsigned int JOLGHODKAKD_TypeDefinitionIndex = 43984;

class JOLGHODKAKD : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* DCMCBFOBJMD; // 0x20
	::KCMIFNGABDC_1<::System::String*>* JJEKFMNOGEE; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* NCOCNPDNFLL; // 0x30
	::KCMIFNGABDC_1<::System::String*>* ABMCDKLBDGE; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JBNEIAECMPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGHODKAKD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGHODKAKD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JOLGHODKAKD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGHODKAKD_GDEOPIBNOIN_OFFSET))(this);
	}
};
