#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define OBBDAMOEDHO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE0E4F00)
#define OBBDAMOEDHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE0E4DB0)
#define OBBDAMOEDHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE0E5280)
#define OBBDAMOEDHO__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E5150)

inline static constexpr unsigned int OBBDAMOEDHO_TypeDefinitionIndex = 55232;

class OBBDAMOEDHO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FGBJLJDHDPE; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* JEJIFNJMGNF; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* ABGOBPDMGJN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBDAMOEDHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBDAMOEDHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OBBDAMOEDHO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBDAMOEDHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
