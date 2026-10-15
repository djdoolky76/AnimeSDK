#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/ValueTuple_2.h"

inline static constexpr unsigned int MFPCEFGHPIN_TypeDefinitionIndex = 42225;

	struct alignas(8) MFPCEFGHPIN
	{
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> FECJLBKEKCN; // 0x10
		::System::UInt32 PDFJKBHCGOO; // 0x18
		::System::UInt32 INIFKHIFKKD; // 0x1C
		::System::UInt32 DDCOGNDMBFJ; // 0x20
		::System::UInt32 KLOEJIMMPJM; // 0x24
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x28
		::System::Boolean PMOHKEDFGHP; // 0x2C
	};
