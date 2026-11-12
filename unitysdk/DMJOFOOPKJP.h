#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueCompositionTypeDisableOperation.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaRoomBgColorType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
class DMJOFOOPKJP;
class FCOEMCEDLNL;
namespace System { class String; }

#define DMJOFOOPKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF153B0)
#define DMJOFOOPKJP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF14F10)

inline static constexpr unsigned int DMJOFOOPKJP_TypeDefinitionIndex = 15209;

	class DMJOFOOPKJP : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::RPG::GameCore::RogueCompositionTypeDisableOperation>* ENFPMJCLEON; // 0x18
		::System::String* CILPGJAFCOK; // 0x20
		::RPG::Client::TextID LJPBJNANBLB; // 0x28
		::RPG::GameCore::RogueTournRoomType LHLKJIDFLIN; // 0x38
		::RPG::GameCore::RogueTournPersonaRoomBgColorType JPLIONFJGCL; // 0x3C
		::System::UInt32 LLICIMBCNPF; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x48
		::System::UInt32 HCBADDHNIDG; // 0x58
		::System::Boolean LOBGFEKCOHM; // 0x5C
		::System::Byte _padding1[0x3];
		::RPG::Client::TextID BAAOGIMCALN; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJOFOOPKJP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMJOFOOPKJP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMJOFOOPKJP*))((::PBYTE)hIl2Cpp + DMJOFOOPKJP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
