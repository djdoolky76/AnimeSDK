#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class GIGJEAGHFHH_ICIGPNLOMIF;

#define GIGJEAGHFHH_MEIFMFICIFN_HCHMHLGKFGK_OFFSET UNITYSDK_OFFSET(0x179F3080)
#define GIGJEAGHFHH_MEIFMFICIFN_KCKEHAFFMLM_OFFSET UNITYSDK_OFFSET(0x179F30B0)
#define GIGJEAGHFHH_MEIFMFICIFN_PJDMMDOIION_OFFSET UNITYSDK_OFFSET(0x179F30E0)
#define GIGJEAGHFHH_MEIFMFICIFN__CTOR_OFFSET UNITYSDK_OFFSET(0x179F3070)

inline static constexpr unsigned int GIGJEAGHFHH_MEIFMFICIFN_TypeDefinitionIndex = 57059;

class GIGJEAGHFHH_MEIFMFICIFN : public ::System::Object
{
public:
	::GIGJEAGHFHH_ICIGPNLOMIF* FGBNBFHOKAA; // 0x10
	::MoleMole::EntityHandle BLNCGJPIOMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJEAGHFHH_MEIFMFICIFN__CTOR_OFFSET))(this);
	}

	::System::Void HCHMHLGKFGK(::UnityEngine::AnimatorStateInfo KDEHMPGOCEP, ::UnityEngine::AnimatorStateInfo PADJNMGMGHO, ::System::Int32 EEGBEFGJJBM, ::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIGJEAGHFHH_MEIFMFICIFN_HCHMHLGKFGK_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, EEGBEFGJJBM, NJNCGJLHLKC);
	}

	::System::Void KCKEHAFFMLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGJEAGHFHH_MEIFMFICIFN_KCKEHAFFMLM_OFFSET))(this);
	}

	::System::Void PJDMMDOIION(::System::Int32 HBJOLKHGGDD, ::UnityEngine::AnimatorStateInfo HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + GIGJEAGHFHH_MEIFMFICIFN_PJDMMDOIION_OFFSET))(this, HBJOLKHGGDD, HMMMOCJAEOA);
	}
};
