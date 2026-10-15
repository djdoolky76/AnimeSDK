#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define FADHECJBPII_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0x1565BB40)
#define FADHECJBPII_CTOR_OFFSET UNITYSDK_OFFSET(0x1565BCD0)
#define FADHECJBPII_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0x1565BAF0)
#define FADHECJBPII_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0x1565BC20)
#define FADHECJBPII_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0x1565BA50)

inline static constexpr unsigned int FADHECJBPII_TypeDefinitionIndex = 71965;

	class FADHECJBPII : public ::FMPCODLIOLG
	{
	public:
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x60
		::System::Boolean GDOPLOPFGMG; // 0x68
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHECJBPII_CTOR_OFFSET))(this);
		}

		::System::Void PADACLAMLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHECJBPII_PADACLAMLKO_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType ICMMEIFDDFL()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHECJBPII_ICMMEIFDDFL_OFFSET))(this);
		}

		::NPECNJDLMFD* BHFKPLLFHAI()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHECJBPII_BHFKPLLFHAI_OFFSET))(this);
		}

		::BILMMJGHFGD* IMGLAKJNHHC()
		{
			return ((::BILMMJGHFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FADHECJBPII_IMGLAKJNHHC_OFFSET))(this);
		}

	};
