#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define GMDBBACKCGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA899A0)

inline static constexpr unsigned int GMDBBACKCGI_TypeDefinitionIndex = 43203;

	class GMDBBACKCGI : public ::System::Object
	{
	public:
		::System::UInt32 AOCLHNKNJHM; // 0x10
		::System::UInt32 DFEJABODPGM; // 0x14
		::System::Boolean HBAHKBPHNNF; // 0x18
		::System::Boolean PMOHKEDFGHP; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 KLOEJIMMPJM; // 0x1C
		::System::UInt32 JBHIKEHKLLI; // 0x20
		::System::UInt32 PPANBKDPFFK; // 0x24
		::RPG::Client::LittleGame::Match3::ViewMomentType NGECMJGNLMJ; // 0x28
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> LBMFPCIBMAC; // 0x2C
		::RPG::GameCore::Match3::PieceTag BNEPAJPMFEI; // 0x34
		::System::UInt32 BFHENMHNGFN; // 0x38
		::System::UInt32 KFIDBNDPNNI; // 0x3C
		::RPG::Client::LittleGame::Match3::GridLocalPoint FJAFDAMHMBJ; // 0x40
		::System::Single PNJEGPAFNCI; // 0x44
		::System::UInt32 GACEMBBAGMP; // 0x48
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x4C
		::System::UInt32 CEJEOLOFOBL; // 0x50
		::System::UInt32 GLANPLEGMPG; // 0x54
		::System::UInt32 JLOOPPGEADG; // 0x58
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> PGJJCGGBCKK; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDBBACKCGI_CTOR_OFFSET))(this);
		}

	};
