#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAOENPMCFON.h"
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_SuperStar; }

#define ALFDEEKMAMI_CTOR_OFFSET UNITYSDK_OFFSET(0x163D4100)
#define ALFDEEKMAMI_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x163D4080)
#define ALFDEEKMAMI_JGBFDBBNLAF_OFFSET UNITYSDK_OFFSET(0x163D3F00)

inline static constexpr unsigned int ALFDEEKMAMI_TypeDefinitionIndex = 76330;

	class ALFDEEKMAMI : public ::DAOENPMCFON
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFDEEKMAMI_CTOR_OFFSET))(this);
		}

		::System::Void JGBFDBBNLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFDEEKMAMI_JGBFDBBNLAF_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* FMHKLHAKMKO()
		{
			return ((::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFDEEKMAMI_FMHKLHAKMKO_OFFSET))(this);
		}

	};
