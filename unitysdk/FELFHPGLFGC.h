#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FELFHPGLFGC;
namespace System { class String; }

#define FELFHPGLFGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBB6A0)
#define FELFHPGLFGC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFBB360)

inline static constexpr unsigned int FELFHPGLFGC_TypeDefinitionIndex = 15122;

	class FELFHPGLFGC : public ::System::Object
	{
	public:
		::System::String* LJFOMBOOEIC; // 0x10
		::System::String* ICIDICKIDCB; // 0x18
		::System::String* JLFLCFGCHHC; // 0x20
		::RPG::GameCore::RogueTournRoomType LHLKJIDFLIN; // 0x28
		::RPG::GameCore::RogueTournMarkType HLALFNEDFED; // 0x2C
		::RPG::Client::TextID OPLOPGILKKH; // 0x30
		::RPG::Client::TextID AEEEKGOKJIH; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELFHPGLFGC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FELFHPGLFGC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FELFHPGLFGC*))((::PBYTE)hIl2Cpp + FELFHPGLFGC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
