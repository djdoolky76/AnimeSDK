#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaStyleGiftRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEBLBMDOOML;
namespace System { class String; }

#define JEBLBMDOOML_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC850)
#define JEBLBMDOOML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFEC400)

inline static constexpr unsigned int JEBLBMDOOML_TypeDefinitionIndex = 15063;

	class JEBLBMDOOML : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::Il2CppArray<::System::UInt32>* NIKKAPEIDJO; // 0x20
		::RPG::Client::TextID MJOOFPBABEA; // 0x28
		::RPG::Client::TextID DEGHFCJNECP; // 0x38
		::System::Boolean HILFNIOLPHN; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 FMDMDDCBPAM; // 0x4C
		::RPG::Client::TextID NMAHGFAPENI; // 0x50
		::System::UInt32 KGOEAGHJFKD; // 0x60
		::RPG::GameCore::RogueTournPersonaStyleGiftRarityType PMIEAEGJNMJ; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBLBMDOOML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEBLBMDOOML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEBLBMDOOML*))((::PBYTE)hIl2Cpp + JEBLBMDOOML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
