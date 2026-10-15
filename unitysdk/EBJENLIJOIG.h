#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define EBJENLIJOIG_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0x12CFF8C0)
#define EBJENLIJOIG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFF820)
#define EBJENLIJOIG_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x12CFF870)

	class EBJENLIJOIG : public ::System::Object
	{
	public:
		::System::UInt32 IEKDHCNIOGD; // 0x10
		::System::UInt32 ICLAJLOLELO; // 0x14
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + EBJENLIJOIG_CTOR_OFFSET))(this, a1);
		}

		::System::Void FMPJJHKCNGG(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + EBJENLIJOIG_FMPJJHKCNGG_OFFSET))(this, a1);
		}

		::System::Void CFINKMFANFE(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + EBJENLIJOIG_CFINKMFANFE_OFFSET))(this, a1);
		}

	};
