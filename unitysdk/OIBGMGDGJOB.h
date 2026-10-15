#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define OIBGMGDGJOB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6E9E0)
#define OIBGMGDGJOB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBE6E960)
#define OIBGMGDGJOB_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBE6E910)

inline static constexpr unsigned int OIBGMGDGJOB_TypeDefinitionIndex = 75040;

	class OIBGMGDGJOB : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBGMGDGJOB_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBGMGDGJOB_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + OIBGMGDGJOB_FFKBFPKEPEN_OFFSET))(this, a1);
		}

	};
