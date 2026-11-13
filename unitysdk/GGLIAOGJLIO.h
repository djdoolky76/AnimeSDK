#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define GGLIAOGJLIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4AD350)
#define GGLIAOGJLIO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1B4ACDF0)
#define GGLIAOGJLIO_GNJMGFBAACI_OFFSET UNITYSDK_OFFSET(0x1B4AD290)
#define GGLIAOGJLIO_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x1B4ACDA0)

inline static constexpr unsigned int GGLIAOGJLIO_TypeDefinitionIndex = 77374;

	class GGLIAOGJLIO : public ::NBEKHGCNJFD
	{
	public:
		// static const ::System::String* AJAMCHDOGKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLIAOGJLIO_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLIAOGJLIO_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + GGLIAOGJLIO_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void GNJMGFBAACI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLIAOGJLIO_GNJMGFBAACI_OFFSET))(this);
		}

	};
