#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MIGDHIKJBHG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12FEF950)
#define MIGDHIKJBHG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12FEF880)
#define MIGDHIKJBHG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12FEFC10)
#define MIGDHIKJBHG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEFB20)

inline static constexpr unsigned int MIGDHIKJBHG_TypeDefinitionIndex = 74789;

class MIGDHIKJBHG : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* HAGJCBEEDPJ; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* FBIAIBPNIAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGDHIKJBHG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGDHIKJBHG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MIGDHIKJBHG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGDHIKJBHG_GDEOPIBNOIN_OFFSET))(this);
	}
};
