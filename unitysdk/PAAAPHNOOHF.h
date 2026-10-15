#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }

#define PAAAPHNOOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB9370)
#define PAAAPHNOOHF_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBFB9320)
#define PAAAPHNOOHF_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBFB92E0)
#define PAAAPHNOOHF_PPEJMABFCGL_OFFSET UNITYSDK_OFFSET(0xBFB9290)

inline static constexpr unsigned int PAAAPHNOOHF_TypeDefinitionIndex = 75034;

	class PAAAPHNOOHF : public ::NBEKHGCNJFD
	{
	public:
		::RPG::Client::SwordTraining::SwordTrainingGameStateType ENIIFGJIIBF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAAPHNOOHF_CTOR_OFFSET))(this);
		}

		::System::Void PPEJMABFCGL(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + PAAAPHNOOHF_PPEJMABFCGL_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAAPHNOOHF_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + PAAAPHNOOHF_FFKBFPKEPEN_OFFSET))(this, a1);
		}

	};
