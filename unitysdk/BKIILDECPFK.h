#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAOENPMCFON.h"
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fireworks; }

#define BKIILDECPFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA55680)
#define BKIILDECPFK_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xBA555C0)
#define BKIILDECPFK_JGBFDBBNLAF_OFFSET UNITYSDK_OFFSET(0xBA553B0)
#define BKIILDECPFK_LOOKHHBPEPA_OFFSET UNITYSDK_OFFSET(0xBA55640)

inline static constexpr unsigned int BKIILDECPFK_TypeDefinitionIndex = 74182;

	class BKIILDECPFK : public ::DAOENPMCFON
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIILDECPFK_CTOR_OFFSET))(this);
		}

		::System::Void JGBFDBBNLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIILDECPFK_JGBFDBBNLAF_OFFSET))(this);
		}

		::System::Boolean LOOKHHBPEPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIILDECPFK_LOOKHHBPEPA_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::ParkourSkillConfig_Fireworks* FMHKLHAKMKO()
		{
			return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Fireworks*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIILDECPFK_FMHKLHAKMKO_OFFSET))(this);
		}

	};
