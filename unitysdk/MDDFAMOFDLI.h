#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MDDFAMOFDLI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13D1A8E0)
#define MDDFAMOFDLI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13D1A810)
#define MDDFAMOFDLI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13D1ABF0)
#define MDDFAMOFDLI__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1AB00)

inline static constexpr unsigned int MDDFAMOFDLI_TypeDefinitionIndex = 92811;

class MDDFAMOFDLI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ICGBACLFMIL; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFAMOFDLI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFAMOFDLI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDDFAMOFDLI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFAMOFDLI_GDEOPIBNOIN_OFFSET))(this);
	}
};
