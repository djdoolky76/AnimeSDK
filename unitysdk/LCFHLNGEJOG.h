#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class LCFHLNGEJOG;
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define LCFHLNGEJOG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB6143E0)
#define LCFHLNGEJOG_CHMCDLLLDNE_OFFSET UNITYSDK_OFFSET(0xB614710)
#define LCFHLNGEJOG_CLEAR_OFFSET UNITYSDK_OFFSET(0xB614450)
#define LCFHLNGEJOG_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xB6145A0)
#define LCFHLNGEJOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6147D0)
#define LCFHLNGEJOG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB6144B0)
#define LCFHLNGEJOG_PFMFPOLDNKN_OFFSET UNITYSDK_OFFSET(0xB614510)

	class LCFHLNGEJOG : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x20
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x28
		::System::UInt32 IAMKAPIJLGP; // 0x2C
		::System::UInt32 JLOOPPGEADG; // 0x30
		::System::Boolean DIINOIHGGHD; // 0x34
		::System::Boolean EHCJLGODALF; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFHLNGEJOG_CTOR_OFFSET))(this);
		}

		static ::LCFHLNGEJOG* BPLPBPMEODA()
		{
			return ((::LCFHLNGEJOG*(*)())((::PBYTE)hIl2Cpp + LCFHLNGEJOG_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFHLNGEJOG_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFHLNGEJOG_ONEXECUTE_OFFSET))(this);
		}

		::System::Void CONFIAMBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFHLNGEJOG_CONFIAMBBBC_OFFSET))(this);
		}

		::System::Void PFMFPOLDNKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFHLNGEJOG_PFMFPOLDNKN_OFFSET))(this);
		}

		::RPG::Client::MatchThreeGameOpponent* CHMCDLLLDNE()
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFHLNGEJOG_CHMCDLLLDNE_OFFSET))(this);
		}

	};
