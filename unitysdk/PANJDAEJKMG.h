#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }

#define PANJDAEJKMG_CTOR_OFFSET UNITYSDK_OFFSET(0x25FF0)
#define PANJDAEJKMG_EIDAGEFKFLK_OFFSET UNITYSDK_OFFSET(0x260C0)
#define PANJDAEJKMG_LLKHPIDOFIP_OFFSET UNITYSDK_OFFSET(0x26160)
#define PANJDAEJKMG_MCICJIGBFLJ_OFFSET UNITYSDK_OFFSET(0x26000)
#define PANJDAEJKMG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x260D0)

inline static constexpr unsigned int PANJDAEJKMG_TypeDefinitionIndex = 63123;

	struct alignas(8) PANJDAEJKMG
	{
		::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* FMEIEHKADFL; // 0x10
		::System::Int32 EGHODOFKOJG; // 0x18
		::System::Void _ctor(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + PANJDAEJKMG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MCICJIGBFLJ(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + PANJDAEJKMG_MCICJIGBFLJ_OFFSET))(this, a1, a2);
		}

		::System::Void EIDAGEFKFLK(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + PANJDAEJKMG_EIDAGEFKFLK_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANJDAEJKMG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void LLKHPIDOFIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PANJDAEJKMG_LLKHPIDOFIP_OFFSET))(this, a1);
		}

	};
