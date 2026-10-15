#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceFunctionTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceValidTurnType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IGKLKGGKAJO;
namespace System { class String; }

#define IGKLKGGKAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0E6B0)
#define IGKLKGGKAJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF0E210)

inline static constexpr unsigned int IGKLKGGKAJO_TypeDefinitionIndex = 11238;

	class IGKLKGGKAJO : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* JPJGIPHPFCA; // 0x10
		::Il2CppArray<::System::UInt32>* FNHCABDPBGJ; // 0x18
		::Il2CppArray<::System::UInt32>* PICNGJMJELF; // 0x20
		::System::String* BDBHCLOLJBI; // 0x28
		::RPG::Client::TextID HDCPODKFCAI; // 0x30
		::System::UInt32 DKFDAEFMFHJ; // 0x40
		::System::Boolean ONEFJICFIJI; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DiceCombatDiceRare ACAALPMLBFL; // 0x48
		::RPG::GameCore::DiceCombatDiceType GMPGDEINODK; // 0x4C
		::RPG::GameCore::DiceCombatDiceValidTurnType PHLHIKNOAFC; // 0x50
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKLKGGKAJO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IGKLKGGKAJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGKLKGGKAJO*))((::PBYTE)hIl2Cpp + IGKLKGGKAJO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
