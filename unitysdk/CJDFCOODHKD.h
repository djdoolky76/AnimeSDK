#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define CJDFCOODHKD_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0x177BA2D0)
#define CJDFCOODHKD_CTOR_OFFSET UNITYSDK_OFFSET(0x177BA460)
#define CJDFCOODHKD_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0x177BA280)
#define CJDFCOODHKD_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0x177BA3B0)
#define CJDFCOODHKD_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0x177BA1E0)
#define CJDFCOODHKD__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x177BA190)

inline static constexpr unsigned int CJDFCOODHKD_TypeDefinitionIndex = 73993;

	class CJDFCOODHKD : public ::FMPCODLIOLG
	{
	public:
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Boolean GDOPLOPFGMG; // 0x70
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDFCOODHKD_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CJDFCOODHKD__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void PADACLAMLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDFCOODHKD_PADACLAMLKO_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType ICMMEIFDDFL()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDFCOODHKD_ICMMEIFDDFL_OFFSET))(this);
		}

		::NPECNJDLMFD* BHFKPLLFHAI()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDFCOODHKD_BHFKPLLFHAI_OFFSET))(this);
		}

		::BILMMJGHFGD* IMGLAKJNHHC()
		{
			return ((::BILMMJGHFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDFCOODHKD_IMGLAKJNHHC_OFFSET))(this);
		}

	};
