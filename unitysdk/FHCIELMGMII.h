#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
class JADFEJKNOCO;
namespace RPG::Client { class SwordTrainingGameInstance; }

#define FHCIELMGMII_CTOR_OFFSET UNITYSDK_OFFSET(0x157673B0)
#define FHCIELMGMII_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15767410)
#define FHCIELMGMII_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x157673C0)
#define FHCIELMGMII_LNHJNGPMHPO_OFFSET UNITYSDK_OFFSET(0x157674D0)

inline static constexpr unsigned int FHCIELMGMII_TypeDefinitionIndex = 75049;

	class FHCIELMGMII : public ::NBEKHGCNJFD
	{
	public:
		::JADFEJKNOCO* HCCBPCJNJMH; // 0x28
		::System::Void _ctor(::JADFEJKNOCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADFEJKNOCO*))((::PBYTE)hIl2Cpp + FHCIELMGMII_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIELMGMII_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + FHCIELMGMII_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void LNHJNGPMHPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHCIELMGMII_LNHJNGPMHPO_OFFSET))(this);
		}

	};
