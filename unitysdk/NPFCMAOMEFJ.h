#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define NPFCMAOMEFJ_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xBCFCCA0)
#define NPFCMAOMEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFCE30)
#define NPFCMAOMEFJ_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBCFCB60)
#define NPFCMAOMEFJ_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xBCFCC50)
#define NPFCMAOMEFJ_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0xBCFCD80)
#define NPFCMAOMEFJ_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xBCFCBB0)

	class NPFCMAOMEFJ : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x68
		::System::Boolean GDOPLOPFGMG; // 0x70
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void PADACLAMLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_PADACLAMLKO_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType ICMMEIFDDFL()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_ICMMEIFDDFL_OFFSET))(this);
		}

		::NPECNJDLMFD* BHFKPLLFHAI()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_BHFKPLLFHAI_OFFSET))(this);
		}

		::BILMMJGHFGD* IMGLAKJNHHC()
		{
			return ((::BILMMJGHFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_IMGLAKJNHHC_OFFSET))(this);
		}

	};
