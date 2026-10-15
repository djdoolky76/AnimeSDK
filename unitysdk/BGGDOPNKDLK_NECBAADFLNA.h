#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"

#define BGGDOPNKDLK_NECBAADFLNA_CTOR_OFFSET UNITYSDK_OFFSET(0x2F91CF0)
#define BGGDOPNKDLK_NECBAADFLNA_LOLKHJOGKHO_OFFSET UNITYSDK_OFFSET(0x3C29B40)

inline static constexpr unsigned int BGGDOPNKDLK_NECBAADFLNA_TypeDefinitionIndex = 37259;

	struct alignas(4) BGGDOPNKDLK_NECBAADFLNA
	{
		::RPG::GameCore::CakeRaceCellType JDDKEGDBPDK; // 0x10
		::System::Int32 HBAMPJPOOLM; // 0x14
		::System::Int32 NNAALDFBGOB; // 0x18
		::System::Single APAKCBFMCAB; // 0x1C
		::System::Int32 MJNJKFNENFD; // 0x20
		::System::Int32 FACIFJMPDCC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_NECBAADFLNA_CTOR_OFFSET))(this);
		}

		::System::Boolean LOLKHJOGKHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGDOPNKDLK_NECBAADFLNA_LOLKHJOGKHO_OFFSET))(this);
		}

	};
