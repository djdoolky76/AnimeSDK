#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JANBBGIKJCK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13ABD670)
#define JANBBGIKJCK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13ABD5A0)
#define JANBBGIKJCK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13ABD910)
#define JANBBGIKJCK__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABD820)

inline static constexpr unsigned int JANBBGIKJCK_TypeDefinitionIndex = 64597;

class JANBBGIKJCK : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANBBGIKJCK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANBBGIKJCK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JANBBGIKJCK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANBBGIKJCK_GDEOPIBNOIN_OFFSET))(this);
	}
};
