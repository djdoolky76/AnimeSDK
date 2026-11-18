#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class AENNHGKBPGI;
class FBAMLABJMKF;
class FMNAIOANOLK;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define FBAMLABJMKF_NIBGNAAHHEC_PIKFJJKHIFM_OFFSET UNITYSDK_OFFSET(0x123817B0)
#define FBAMLABJMKF_NIBGNAAHHEC_PMACCHILMFG_OFFSET UNITYSDK_OFFSET(0x12381610)
#define FBAMLABJMKF_NIBGNAAHHEC__CTOR_OFFSET UNITYSDK_OFFSET(0x12381600)

inline static constexpr unsigned int FBAMLABJMKF_NIBGNAAHHEC_TypeDefinitionIndex = 78139;

class FBAMLABJMKF_NIBGNAAHHEC : public ::System::Object
{
public:
	::AENNHGKBPGI* GLHGPFDJPMB; // 0x10
	::System::Collections::Generic::IReadOnlyDictionary_2<::EAOGLMKGMGE, ::FMNAIOANOLK*>* EJPKBPLGOFH; // 0x18
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x20
	::System::Boolean NNGMJOGAJDG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NIBGNAAHHEC__CTOR_OFFSET))(this);
	}

	::System::Boolean PMACCHILMFG(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NIBGNAAHHEC_PMACCHILMFG_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Boolean PIKFJJKHIFM(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + FBAMLABJMKF_NIBGNAAHHEC_PIKFJJKHIFM_OFFSET))(this, EKPEBNCLJPM);
	}
};
