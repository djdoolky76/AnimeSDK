#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define NPGPFLGDEBH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12908580)
#define NPGPFLGDEBH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12908380)
#define NPGPFLGDEBH_GCFJJBDGMJJ_OFFSET UNITYSDK_OFFSET(0x129086A0)
#define NPGPFLGDEBH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12908AE0)
#define NPGPFLGDEBH__CTOR_OFFSET UNITYSDK_OFFSET(0x12908960)

inline static constexpr unsigned int NPGPFLGDEBH_TypeDefinitionIndex = 78058;

class NPGPFLGDEBH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector2>* DLPOBIFKHLB; // 0x18
	::CPABOPKIGAL* HMNPNEALHEH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* CGDDAIOFHPN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* CGENECBHNMC; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGPFLGDEBH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGPFLGDEBH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NPGPFLGDEBH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGPFLGDEBH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void GCFJJBDGMJJ(::MoleMole::EntityHandle IHFJFDEBCKL, ::System::Boolean AHEAEIMIJJK, ::UnityEngine::Vector2 IIHEDMPEBED)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NPGPFLGDEBH_GCFJJBDGMJJ_OFFSET))(this, IHFJFDEBCKL, AHEAEIMIJJK, IIHEDMPEBED);
	}
};
