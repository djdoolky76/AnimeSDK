#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEBLBMDOOML;
namespace System { class String; }

#define JEBLBMDOOML_CTOR_OFFSET UNITYSDK_OFFSET(0x1D01A850)
#define JEBLBMDOOML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D01A400)

inline static constexpr unsigned int JEBLBMDOOML_TypeDefinitionIndex = 15063;

	class JEBLBMDOOML : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::System::UInt32>* NIKKAPEIDJO; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x20
		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType PMIEAEGJNMJ; // 0x28
		::System::UInt32 FMDMDDCBPAM; // 0x2C
		::System::UInt32 KGOEAGHJFKD; // 0x30
		::System::Boolean HILFNIOLPHN; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID NMAHGFAPENI; // 0x38
		::RPG::Client::TextID MJOOFPBABEA; // 0x48
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
