#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DKDILGILCJN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18347710)
#define DKDILGILCJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18347560)
#define DKDILGILCJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18347C30)
#define DKDILGILCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x18347AF0)

inline static constexpr unsigned int DKDILGILCJN_TypeDefinitionIndex = 93219;

class DKDILGILCJN : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* FBLJLBGCOJL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDILGILCJN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDILGILCJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DKDILGILCJN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDILGILCJN_GDEOPIBNOIN_OFFSET))(this);
	}
};
