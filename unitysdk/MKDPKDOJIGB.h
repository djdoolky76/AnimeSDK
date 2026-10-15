#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define MKDPKDOJIGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB98E960)
#define MKDPKDOJIGB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB98E710)
#define MKDPKDOJIGB_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB98E6C0)
#define MKDPKDOJIGB_LNHJNGPMHPO_OFFSET UNITYSDK_OFFSET(0xB98E880)

	class MKDPKDOJIGB : public ::NBEKHGCNJFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPKDOJIGB_CTOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPKDOJIGB_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + MKDPKDOJIGB_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void LNHJNGPMHPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPKDOJIGB_LNHJNGPMHPO_OFFSET))(this);
		}

	};
