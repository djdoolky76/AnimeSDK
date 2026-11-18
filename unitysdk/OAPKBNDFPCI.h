#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OAPKBNDFPCI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFD5AFC0)
#define OAPKBNDFPCI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFD5AD60)
#define OAPKBNDFPCI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFD5B7F0)
#define OAPKBNDFPCI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD5B630)

inline static constexpr unsigned int OAPKBNDFPCI_TypeDefinitionIndex = 74192;

class OAPKBNDFPCI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* MNLEAPLFGIB; // 0x20
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* NHKNILFDKGG; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* LFDPDKIDPAK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPKBNDFPCI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPKBNDFPCI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OAPKBNDFPCI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPKBNDFPCI_GDEOPIBNOIN_OFFSET))(this);
	}
};
