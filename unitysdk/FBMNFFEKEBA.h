#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FBMNFFEKEBA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17264580)
#define FBMNFFEKEBA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17264260)
#define FBMNFFEKEBA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17264A80)
#define FBMNFFEKEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x172647C0)

inline static constexpr unsigned int FBMNFFEKEBA_TypeDefinitionIndex = 39642;

class FBMNFFEKEBA : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* JKGCLPKEEDB; // 0x40
	::KCMIFNGABDC_1<::System::String*>* OJLLEEAILNB; // 0x48
	::CPABOPKIGAL* MMFNFINOFPN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMNFFEKEBA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMNFFEKEBA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBMNFFEKEBA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMNFFEKEBA_GDEOPIBNOIN_OFFSET))(this);
	}
};
