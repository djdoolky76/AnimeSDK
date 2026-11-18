#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PKIJHGCEJJG_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1CB4C3C0)
#define PKIJHGCEJJG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1CB4C350)
#define PKIJHGCEJJG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1CB4C150)
#define PKIJHGCEJJG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1CB4C7E0)
#define PKIJHGCEJJG_JHMEOLAKCPB_OFFSET UNITYSDK_OFFSET(0x1CB4C870)
#define PKIJHGCEJJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4C660)

inline static constexpr unsigned int PKIJHGCEJJG_TypeDefinitionIndex = 52891;

class PKIJHGCEJJG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* NLDHHIJDIAD; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIJHGCEJJG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIJHGCEJJG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKIJHGCEJJG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIJHGCEJJG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKIJHGCEJJG_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JHMEOLAKCPB(::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH, ::System::String* AELLPLBJELA, ::System::Boolean ENBLDLNAEKM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKIJHGCEJJG_JHMEOLAKCPB_OFFSET))(this, JEJJLALJJKH, AELLPLBJELA, ENBLDLNAEKM);
	}
};
