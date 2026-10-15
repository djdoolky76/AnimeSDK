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

#define DMJOFOOPKJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD46620)
#define DMJOFOOPKJP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD46180)

	class DMJOFOOPKJP : public ::System::Object
	{
	public:
		::System::String* CILPGJAFCOK; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::Il2CppArray<::RPG::GameCore::RogueCompositionTypeDisableOperation>* ENFPMJCLEON; // 0x20
		::RPG::Client::TextID BAAOGIMCALN; // 0x28
		::System::UInt32 HCBADDHNIDG; // 0x38
		::RPG::GameCore::RogueTournRoomType LHLKJIDFLIN; // 0x3C
		::System::UInt32 LLICIMBCNPF; // 0x40
		::System::Boolean LOBGFEKCOHM; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::RogueTournPersonaRoomBgColorType JPLIONFJGCL; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x50
		::RPG::Client::TextID LJPBJNANBLB; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJOFOOPKJP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMJOFOOPKJP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMJOFOOPKJP*))((::PBYTE)hIl2Cpp + DMJOFOOPKJP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
