#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define JPJJCNMLAKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5003E0)
#define JPJJCNMLAKB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1B500390)
#define JPJJCNMLAKB_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x1B500340)

inline static constexpr unsigned int JPJJCNMLAKB_TypeDefinitionIndex = 77372;

	class JPJJCNMLAKB : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJJCNMLAKB_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJJCNMLAKB_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + JPJJCNMLAKB_FFKBFPKEPEN_OFFSET))(this, a1);
		}

	};
