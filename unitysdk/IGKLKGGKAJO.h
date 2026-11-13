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

#define IGKLKGGKAJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C9E10)
#define IGKLKGGKAJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6C9970)

inline static constexpr unsigned int IGKLKGGKAJO_TypeDefinitionIndex = 11289;

	class IGKLKGGKAJO : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatDiceFunctionTag>* JPJGIPHPFCA; // 0x10
		::System::String* BDBHCLOLJBI; // 0x18
		::Il2CppArray<::System::UInt32>* FNHCABDPBGJ; // 0x20
		::Il2CppArray<::System::UInt32>* PICNGJMJELF; // 0x28
		::RPG::Client::TextID OENAMINOLLF; // 0x30
		::RPG::GameCore::DiceCombatDiceType GMPGDEINODK; // 0x40
		::System::UInt32 DKFDAEFMFHJ; // 0x44
		::RPG::GameCore::DiceCombatDiceRare ACAALPMLBFL; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HDCPODKFCAI; // 0x50
		::System::Boolean ONEFJICFIJI; // 0x60
		::System::Byte _padding1[0x3];
		::RPG::GameCore::DiceCombatDiceValidTurnType PHLHIKNOAFC; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKLKGGKAJO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IGKLKGGKAJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGKLKGGKAJO*))((::PBYTE)hIl2Cpp + IGKLKGGKAJO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
