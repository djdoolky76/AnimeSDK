#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define IKEONDABGLO_CTOR_OFFSET UNITYSDK_OFFSET(0x16479FE0)
#define IKEONDABGLO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x16479B40)
#define IKEONDABGLO_FOMAFCBLGLE_OFFSET UNITYSDK_OFFSET(0x16479BE0)
#define IKEONDABGLO_JJDAIHONLOB_OFFSET UNITYSDK_OFFSET(0x16479F10)
#define IKEONDABGLO_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x16479AF0)

inline static constexpr unsigned int IKEONDABGLO_TypeDefinitionIndex = 75052;

	class IKEONDABGLO : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEONDABGLO_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEONDABGLO_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + IKEONDABGLO_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void FOMAFCBLGLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEONDABGLO_FOMAFCBLGLE_OFFSET))(this);
		}

		::System::Void JJDAIHONLOB(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + IKEONDABGLO_JJDAIHONLOB_OFFSET))(this, a1);
		}

	};
