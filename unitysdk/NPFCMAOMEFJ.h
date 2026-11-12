#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define NPFCMAOMEFJ_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xC5EC3D0)
#define NPFCMAOMEFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC5EC560)
#define NPFCMAOMEFJ_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xC5EC380)
#define NPFCMAOMEFJ_IMGLAKJNHHC_OFFSET UNITYSDK_OFFSET(0xC5EC4B0)
#define NPFCMAOMEFJ_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xC5EC2E0)
#define NPFCMAOMEFJ__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC5EC290)

inline static constexpr unsigned int NPFCMAOMEFJ_TypeDefinitionIndex = 73991;

	class NPFCMAOMEFJ : public ::FMPCODLIOLG
	{
	public:
		::NPECNJDLMFD* CHCPHMLKKGB; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::System::Boolean GDOPLOPFGMG; // 0x70
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NPFCMAOMEFJ__ONINITPARAMS_OFFSET))(this, a1);
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
