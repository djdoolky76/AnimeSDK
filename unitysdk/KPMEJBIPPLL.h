#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define KPMEJBIPPLL_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xB5BB1F0)
#define KPMEJBIPPLL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BAD20)
#define KPMEJBIPPLL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB5BAD80)
#define KPMEJBIPPLL_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB5BAD30)

inline static constexpr unsigned int KPMEJBIPPLL_TypeDefinitionIndex = 75048;

	class KPMEJBIPPLL : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMEJBIPPLL_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMEJBIPPLL_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + KPMEJBIPPLL_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + KPMEJBIPPLL_BJLJAHMLKIO_OFFSET))(this, a1);
		}

	};
