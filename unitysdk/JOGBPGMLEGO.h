#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define JOGBPGMLEGO_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0xB2A06C0)
#define JOGBPGMLEGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A05E0)
#define JOGBPGMLEGO_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0xB2A0620)

inline static constexpr unsigned int JOGBPGMLEGO_TypeDefinitionIndex = 75029;

	class JOGBPGMLEGO : public ::System::Object
	{
	public:
		::System::UInt32 JCOHIMFFMKO; // 0x10
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + JOGBPGMLEGO_CTOR_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + JOGBPGMLEGO_FMPJJHKCNGG_OFFSET))(this, a1);
		}

		::System::Void CFINKMFANFE(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + JOGBPGMLEGO_CFINKMFANFE_OFFSET))(this, a1);
		}

	};
