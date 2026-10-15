#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define MOKEKBNKDAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA32B90)
#define MOKEKBNKDAM_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBA32BF0)
#define MOKEKBNKDAM_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBA32BA0)
#define MOKEKBNKDAM_LNHJNGPMHPO_OFFSET UNITYSDK_OFFSET(0xBA32E90)

inline static constexpr unsigned int MOKEKBNKDAM_TypeDefinitionIndex = 75038;

	class MOKEKBNKDAM : public ::NBEKHGCNJFD
	{
	public:
		::System::Boolean APECHCOMKKK; // 0x28
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOKEKBNKDAM_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEKBNKDAM_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + MOKEKBNKDAM_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void LNHJNGPMHPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKEKBNKDAM_LNHJNGPMHPO_OFFSET))(this);
		}

	};
