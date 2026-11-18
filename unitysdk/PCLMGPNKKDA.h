#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PCLMGPNKKDA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15FFEAD0)
#define PCLMGPNKKDA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15FFE870)
#define PCLMGPNKKDA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15FFF870)
#define PCLMGPNKKDA_OLOCNKDEAME_OFFSET UNITYSDK_OFFSET(0x15FFF1A0)
#define PCLMGPNKKDA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFF6A0)

inline static constexpr unsigned int PCLMGPNKKDA_TypeDefinitionIndex = 66881;

class PCLMGPNKKDA : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OOJKLDHDFHL; // 0x18
	::KCMIFNGABDC_1<::System::String*>* CDAJBBJCABG; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* ADHEKHEAKHB; // 0x28
	::AAMKEDEDHPD_1<::System::String*>* MKIHPPMBFPJ; // 0x30
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* EGIFNGNJFNI; // 0x38
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLMGPNKKDA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLMGPNKKDA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCLMGPNKKDA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean OLOCNKDEAME(::LGCNEDCMPKM& BKBGPKNGNMF, ::UnityEngine::Transform*& GKBJOPJKCLB)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + PCLMGPNKKDA_OLOCNKDEAME_OFFSET))(this, BKBGPKNGNMF, GKBJOPJKCLB);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLMGPNKKDA_GDEOPIBNOIN_OFFSET))(this);
	}
};
