#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/NPCCrowd/Ability/EMontageEndBehavior.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define IHPCAPGENDK_DEFPNNKLHFG_OFFSET UNITYSDK_OFFSET(0x141DA760)
#define IHPCAPGENDK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x141DA080)
#define IHPCAPGENDK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x141D9E10)
#define IHPCAPGENDK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x141DAA30)
#define IHPCAPGENDK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x141DA9A0)
#define IHPCAPGENDK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x141D9C30)
#define IHPCAPGENDK__CTOR_OFFSET UNITYSDK_OFFSET(0x141DA7C0)

inline static constexpr unsigned int IHPCAPGENDK_TypeDefinitionIndex = 45529;

class IHPCAPGENDK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* GJNBFDLIHFD; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JHKCHMHFJFN; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* BJDBKHFJGEM; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* BBEBEDKLAHG; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* DOGLCBPNJMB; // 0x48
	::KCMIFNGABDC_1<::System::Boolean>* CLMALMLNFBM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPCAPGENDK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IHPCAPGENDK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPCAPGENDK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IHPCAPGENDK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IHPCAPGENDK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPCAPGENDK_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::NPCCrowd::Ability::EMontageEndBehavior DEFPNNKLHFG(::System::Int32 ANIJIAGFLMJ, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::NPCCrowd::Ability::EMontageEndBehavior(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IHPCAPGENDK_DEFPNNKLHFG_OFFSET))(ANIJIAGFLMJ, EPGLPGPOOJN);
	}
};
