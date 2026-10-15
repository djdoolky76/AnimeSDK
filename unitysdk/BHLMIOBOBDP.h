#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityActionDelayExceed; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHLMIOBOBDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB48E8D0)
#define BHLMIOBOBDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB48E970)
#define BHLMIOBOBDP_KHLOKFOANJC_OFFSET UNITYSDK_OFFSET(0xB48F0F0)
#define BHLMIOBOBDP_MPDFIJBHKEC_OFFSET UNITYSDK_OFFSET(0xB48EB10)
#define BHLMIOBOBDP_PPDEMFDGEIC_OFFSET UNITYSDK_OFFSET(0xB48EA50)

	class BHLMIOBOBDP : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelEntityActionDelayExceed* DMPNBHDEMMG; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CMJMLNKOOEA; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BCLGAEGFJOD; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MFOPKHCEOPJ; // 0x28
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x30
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
