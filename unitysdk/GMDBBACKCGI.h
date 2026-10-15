#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define GMDBBACKCGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB1CE0)

inline static constexpr unsigned int GMDBBACKCGI_TypeDefinitionIndex = 42228;

	class GMDBBACKCGI : public ::System::Object
	{
	public:
		::RPG::GameCore::Match3::PieceTag BNEPAJPMFEI; // 0x10
		::System::UInt32 BFHENMHNGFN; // 0x14
		::RPG::Client::LittleGame::Match3::GridLocalPoint FJAFDAMHMBJ; // 0x18
		::System::ValueTuple PGJJCGGBCKK; // 0x1C
		::System::UInt32 PPANBKDPFFK; // 0x24
		::System::UInt32 GLANPLEGMPG; // 0x28
		::System::UInt32 AOCLHNKNJHM; // 0x2C
		::System::Boolean HBAHKBPHNNF; // 0x30
		::System::Boolean PMOHKEDFGHP; // 0x31
		::System::Byte _padding0[0x2];
		::System::UInt32 JBHIKEHKLLI; // 0x34
		::System::UInt32 DFEJABODPGM; // 0x38
		::System::UInt32 GACEMBBAGMP; // 0x3C
		::System::UInt32 JLOOPPGEADG; // 0x40
		::System::UInt32 CEJEOLOFOBL; // 0x44
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x48
		::System::UInt32 KLOEJIMMPJM; // 0x4C
		::System::ValueTuple LBMFPCIBMAC; // 0x50
		::System::Single PNJEGPAFNCI; // 0x58
		::System::UInt32 KFIDBNDPNNI; // 0x5C
		::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDBBACKCGI_CTOR_OFFSET))(this);
		}

	};
