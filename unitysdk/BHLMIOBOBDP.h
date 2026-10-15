#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayExceed; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHLMIOBOBDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB48A780)
#define BHLMIOBOBDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB48A820)
#define BHLMIOBOBDP_KHLOKFOANJC_OFFSET UNITYSDK_OFFSET(0xB48AFA0)
#define BHLMIOBOBDP_MPDFIJBHKEC_OFFSET UNITYSDK_OFFSET(0xB48A9C0)
#define BHLMIOBOBDP_PPDEMFDGEIC_OFFSET UNITYSDK_OFFSET(0xB48A900)

inline static constexpr unsigned int BHLMIOBOBDP_TypeDefinitionIndex = 55953;

	class BHLMIOBOBDP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BCLGAEGFJOD; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MFOPKHCEOPJ; // 0x18
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x20
		::RPG::GameCore::LevelEntityActionDelayExceed* DMPNBHDEMMG; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CMJMLNKOOEA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + BHLMIOBOBDP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLMIOBOBDP_DISPOSE_OFFSET))(this);
		}

		::System::Void PPDEMFDGEIC(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BHLMIOBOBDP_PPDEMFDGEIC_OFFSET))(this, a1);
		}

		::System::Void MPDFIJBHKEC(::RPG::GameCore::ActionDelayChangeReason a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BHLMIOBOBDP_MPDFIJBHKEC_OFFSET))(this, a1, a2);
		}

		::System::Void KHLOKFOANJC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BHLMIOBOBDP_KHLOKFOANJC_OFFSET))(this, a1, a2);
		}

	};
