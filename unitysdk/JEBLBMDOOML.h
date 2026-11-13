#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEBLBMDOOML;
namespace System { class String; }

#define JEBLBMDOOML_CTOR_OFFSET UNITYSDK_OFFSET(0xCA99350)
#define JEBLBMDOOML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xCA98F00)

inline static constexpr unsigned int JEBLBMDOOML_TypeDefinitionIndex = 15219;

	class JEBLBMDOOML : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
		::Il2CppArray<::System::UInt32>* NIKKAPEIDJO; // 0x20
		::System::UInt32 KGOEAGHJFKD; // 0x28
		::System::Boolean HILFNIOLPHN; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType PMIEAEGJNMJ; // 0x30
		::System::UInt32 FMDMDDCBPAM; // 0x34
		::RPG::Client::TextID MJOOFPBABEA; // 0x38
		::RPG::Client::TextID NMAHGFAPENI; // 0x48
		::RPG::Client::TextID DEGHFCJNECP; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBLBMDOOML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEBLBMDOOML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEBLBMDOOML*))((::PBYTE)hIl2Cpp + JEBLBMDOOML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
