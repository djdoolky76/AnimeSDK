#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"
class EKFMIDBJDIA;

#define BOJEHOFCHID_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7883B0)
#define BOJEHOFCHID_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0x1A7880C0)
#define BOJEHOFCHID_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x1A788160)
#define BOJEHOFCHID_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x1A787FC0)
#define BOJEHOFCHID_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x1A787EC0)
#define BOJEHOFCHID_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0x1A788120)

inline static constexpr unsigned int BOJEHOFCHID_TypeDefinitionIndex = 60132;

	class BOJEHOFCHID : public ::CNCLNAFILDC
	{
	public:
		::System::Boolean GGJECIOIBCJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJEHOFCHID_CTOR_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJEHOFCHID_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJEHOFCHID_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void GNDEALGPILP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJEHOFCHID_GNDEALGPILP_OFFSET))(this);
		}

		::System::Void MHDCDNHDBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJEHOFCHID_MHDCDNHDBKB_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BOJEHOFCHID_KIGKKADGFCC_OFFSET))(this, a1);
		}

	};
