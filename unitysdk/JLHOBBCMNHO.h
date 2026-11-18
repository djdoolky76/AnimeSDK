#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define JLHOBBCMNHO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13CCB5A0)
#define JLHOBBCMNHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13CCB460)
#define JLHOBBCMNHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13CCB9A0)
#define JLHOBBCMNHO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCB880)

inline static constexpr unsigned int JLHOBBCMNHO_TypeDefinitionIndex = 83059;

class JLHOBBCMNHO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHOBBCMNHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHOBBCMNHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JLHOBBCMNHO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHOBBCMNHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
