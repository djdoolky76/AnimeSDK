#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BKECIPEGMKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18572240)
#define BKECIPEGMKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18571F70)
#define BKECIPEGMKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18572980)
#define BKECIPEGMKI__CTOR_OFFSET UNITYSDK_OFFSET(0x18572760)

inline static constexpr unsigned int BKECIPEGMKI_TypeDefinitionIndex = 65775;

class BKECIPEGMKI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* KFLGMJMDNCN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* MLNKCNJEOMI; // 0x30
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* JKNBCNNGHCC; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40
	::AAMKEDEDHPD_1<::System::Single>* HKBKCBKJPOM; // 0x48
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x50
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKECIPEGMKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKECIPEGMKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BKECIPEGMKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKECIPEGMKI_GDEOPIBNOIN_OFFSET))(this);
	}
};
