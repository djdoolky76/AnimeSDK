#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define IMADELBBGDA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16588C30)
#define IMADELBBGDA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16588BA0)
#define IMADELBBGDA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16588F90)
#define IMADELBBGDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16588EF0)

inline static constexpr unsigned int IMADELBBGDA_TypeDefinitionIndex = 64699;

class IMADELBBGDA : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* KJIAPAIEGKB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMADELBBGDA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMADELBBGDA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMADELBBGDA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMADELBBGDA_GDEOPIBNOIN_OFFSET))(this);
	}
};
