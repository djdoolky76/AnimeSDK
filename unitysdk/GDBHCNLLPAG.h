#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

inline static constexpr unsigned int GDBHCNLLPAG_TypeDefinitionIndex = 55502;

	struct alignas(8) GDBHCNLLPAG
	{
		::System::String* ILDAAHNKMHL; // 0x10
		::RPG::GameCore::GameEntity* IGKONILBPEO; // 0x18
		::System::String* HFLDHJHJNCF; // 0x20
		::System::Boolean BDNAGGIPGGN; // 0x28
		::System::Boolean FEDLPCHHOEG; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 KPNGMCPOMHJ; // 0x2C
		::RPG::GameCore::CharacterVisiblityFollowFlag KPAAEDABMDD; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::GameEntity* FCKCHPNEEKB; // 0x38
	};
