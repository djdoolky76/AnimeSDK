#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define DDFMNMNEEIH_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xE2628F0)
#define DDFMNMNEEIH_CTOR_OFFSET UNITYSDK_OFFSET(0xE262A80)
#define DDFMNMNEEIH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xE2627B0)
#define DDFMNMNEEIH_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xE2628A0)
#define DDFMNMNEEIH_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0xE2629D0)
#define DDFMNMNEEIH_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xE262800)

	class DDFMNMNEEIH : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x68
		::System::Boolean GDOPLOPFGMG; // 0x70
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void PADACLAMLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_PADACLAMLKO_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType ICMMEIFDDFL()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_ICMMEIFDDFL_OFFSET))(this);
		}

		::NPECNJDLMFD* BHFKPLLFHAI()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_BHFKPLLFHAI_OFFSET))(this);
		}

		::BILMMJGHFGD* IMGLAKJNHHC()
		{
			return ((::BILMMJGHFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_IMGLAKJNHHC_OFFSET))(this);
		}

	};
