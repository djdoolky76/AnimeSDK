#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DGIDAMOAHNE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1240F6E0)
#define DGIDAMOAHNE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1240F650)
#define DGIDAMOAHNE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1240F440)
#define DGIDAMOAHNE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1240FC70)
#define DGIDAMOAHNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1240FA60)

inline static constexpr unsigned int DGIDAMOAHNE_TypeDefinitionIndex = 52371;

class DGIDAMOAHNE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JLACDANBCAN; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EFIJGFCFOJI; // 0x38
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* OLMEJLNJIDB; // 0x40
	::CPABOPKIGAL* DGLPCINAMAC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIDAMOAHNE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIDAMOAHNE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGIDAMOAHNE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGIDAMOAHNE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGIDAMOAHNE_GDEOPIBNOIN_OFFSET))(this);
	}
};
