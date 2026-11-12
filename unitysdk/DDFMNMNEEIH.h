#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define DDFMNMNEEIH_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xEE1DE90)
#define DDFMNMNEEIH_CTOR_OFFSET UNITYSDK_OFFSET(0xEE1E020)
#define DDFMNMNEEIH_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xEE1DE40)
#define DDFMNMNEEIH_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0xEE1DF70)
#define DDFMNMNEEIH_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xEE1DDA0)
#define DDFMNMNEEIH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xEE1DD50)

inline static constexpr unsigned int DDFMNMNEEIH_TypeDefinitionIndex = 73993;

	class DDFMNMNEEIH : public ::FMPCODLIOLG
	{
	public:
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Boolean GDOPLOPFGMG; // 0x70
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFMNMNEEIH_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DDFMNMNEEIH__ONINITPARAMS_OFFSET))(this, a1);
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
