#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCLNAFILDC.h"
class EKFMIDBJDIA;

#define BOJEHOFCHID_CTOR_OFFSET UNITYSDK_OFFSET(0xC193FE0)
#define BOJEHOFCHID_GNDEALGPILP_OFFSET UNITYSDK_OFFSET(0xC193CF0)
#define BOJEHOFCHID_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xC193D90)
#define BOJEHOFCHID_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xC193BF0)
#define BOJEHOFCHID_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xC193AF0)
#define BOJEHOFCHID_MHDCDNHDBKB_OFFSET UNITYSDK_OFFSET(0xC193D50)

inline static constexpr unsigned int BOJEHOFCHID_TypeDefinitionIndex = 58860;

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
