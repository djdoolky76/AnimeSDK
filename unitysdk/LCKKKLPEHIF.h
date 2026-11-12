#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define LCKKKLPEHIF_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xBEAAAA0)
#define LCKKKLPEHIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAAC30)
#define LCKKKLPEHIF_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xBEAAA50)
#define LCKKKLPEHIF_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0xBEAAB80)
#define LCKKKLPEHIF_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xBEAA9D0)
#define LCKKKLPEHIF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBEAA980)

inline static constexpr unsigned int LCKKKLPEHIF_TypeDefinitionIndex = 73992;

	class LCKKKLPEHIF : public ::FMPCODLIOLG
	{
	public:
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Boolean GDOPLOPFGMG; // 0x70
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKKKLPEHIF_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LCKKKLPEHIF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void PADACLAMLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKKKLPEHIF_PADACLAMLKO_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType ICMMEIFDDFL()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKKKLPEHIF_ICMMEIFDDFL_OFFSET))(this);
		}

		::NPECNJDLMFD* BHFKPLLFHAI()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKKKLPEHIF_BHFKPLLFHAI_OFFSET))(this);
		}

		::BILMMJGHFGD* IMGLAKJNHHC()
		{
			return ((::BILMMJGHFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKKKLPEHIF_IMGLAKJNHHC_OFFSET))(this);
		}

	};
