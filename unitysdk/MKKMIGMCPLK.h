#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAOENPMCFON.h"
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Sprint; }

#define MKKMIGMCPLK_CTOR_OFFSET UNITYSDK_OFFSET(0xC257AD0)
#define MKKMIGMCPLK_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xC257A50)
#define MKKMIGMCPLK_JGBFDBBNLAF_OFFSET UNITYSDK_OFFSET(0xC2577F0)

inline static constexpr unsigned int MKKMIGMCPLK_TypeDefinitionIndex = 76328;

	class MKKMIGMCPLK : public ::DAOENPMCFON
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKMIGMCPLK_CTOR_OFFSET))(this);
		}

		::System::Void JGBFDBBNLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKMIGMCPLK_JGBFDBBNLAF_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::ParkourSkillConfig_Sprint* FMHKLHAKMKO()
		{
			return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Sprint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKMIGMCPLK_FMHKLHAKMKO_OFFSET))(this);
		}

	};
