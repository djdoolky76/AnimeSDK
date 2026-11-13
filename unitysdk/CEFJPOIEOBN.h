#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define CEFJPOIEOBN_CTOR_OFFSET UNITYSDK_OFFSET(0x173CF6D0)
#define CEFJPOIEOBN_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x173CF050)
#define CEFJPOIEOBN_GNJMGFBAACI_OFFSET UNITYSDK_OFFSET(0x173CF610)
#define CEFJPOIEOBN_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x173CF000)

inline static constexpr unsigned int CEFJPOIEOBN_TypeDefinitionIndex = 77373;

	class CEFJPOIEOBN : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJPOIEOBN_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJPOIEOBN_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CEFJPOIEOBN_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void GNJMGFBAACI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJPOIEOBN_GNJMGFBAACI_OFFSET))(this);
		}

	};
