#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KLAIGKCLFDH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B994D0)
#define KLAIGKCLFDH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B99210)
#define KLAIGKCLFDH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B99940)
#define KLAIGKCLFDH__CTOR_OFFSET UNITYSDK_OFFSET(0x15B996C0)

inline static constexpr unsigned int KLAIGKCLFDH_TypeDefinitionIndex = 63299;

class KLAIGKCLFDH : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* DGLPCINAMAC; // 0x30
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* ELAADEDGEIL; // 0x40
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAIGKCLFDH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAIGKCLFDH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KLAIGKCLFDH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLAIGKCLFDH_GDEOPIBNOIN_OFFSET))(this);
	}
};
