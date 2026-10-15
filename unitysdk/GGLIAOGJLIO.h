#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define GGLIAOGJLIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A03E30)
#define GGLIAOGJLIO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15A038D0)
#define GGLIAOGJLIO_GNJMGFBAACI_OFFSET UNITYSDK_OFFSET(0x15A03D70)
#define GGLIAOGJLIO_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x15A03880)

inline static constexpr unsigned int GGLIAOGJLIO_TypeDefinitionIndex = 75047;

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
