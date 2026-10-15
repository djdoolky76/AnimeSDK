#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define DMHKMDJKAOH_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xFEC2BF0)
#define DMHKMDJKAOH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC2C60)
#define DMHKMDJKAOH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xFEC2A80)
#define DMHKMDJKAOH_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xFEC2A30)

inline static constexpr unsigned int DMHKMDJKAOH_TypeDefinitionIndex = 75052;

	class DMHKMDJKAOH : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHKMDJKAOH_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHKMDJKAOH_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + DMHKMDJKAOH_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + DMHKMDJKAOH_BJLJAHMLKIO_OFFSET))(this, a1);
		}

	};
