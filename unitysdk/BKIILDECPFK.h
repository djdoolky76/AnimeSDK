#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAOENPMCFON.h"
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fireworks; }

#define BKIILDECPFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA58C30)
#define BKIILDECPFK_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xBA58B70)
#define BKIILDECPFK_JGBFDBBNLAF_OFFSET UNITYSDK_OFFSET(0xBA58960)
#define BKIILDECPFK_LOOKHHBPEPA_OFFSET UNITYSDK_OFFSET(0xBA58BF0)

inline static constexpr unsigned int BKIILDECPFK_TypeDefinitionIndex = 74183;

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
