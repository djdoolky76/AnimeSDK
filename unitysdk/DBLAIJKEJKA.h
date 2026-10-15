#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/Match3/StyleGenerateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardGridInfo; }
namespace RPG::GameCore::Match3 { class Match3ChessBoardTemplate; }
namespace RPG::GameCore::Match3 { class Match3ConditionBase; }
namespace RPG::GameCore::Match3 { class RandomChangeBombToMultiStyleAction; }
namespace RPG::GameCore::Match3 { class RandomChangeFruitToBlackFogAction; }
namespace RPG::GameCore::Match3 { class RandomChangeFruitToLineBombAction; }
namespace RPG::GameCore::Match3 { class RandomFreezeBombAction; }
namespace RPG::GameCore::Match3 { class SetEmojiReplyPatternAction; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DBLAIJKEJKA_BNNLEMLBHOI_OFFSET UNITYSDK_OFFSET(0x1C9E67E0)
#define DBLAIJKEJKA_CAIODEGDGEG_OFFSET UNITYSDK_OFFSET(0x1C9E9650)
#define DBLAIJKEJKA_CEOBKEKHMDB_OFFSET UNITYSDK_OFFSET(0x1C9EB670)
#define DBLAIJKEJKA_CLKNFAHOAEF_OFFSET UNITYSDK_OFFSET(0x1C9EA380)
#define DBLAIJKEJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E5B90)
#define DBLAIJKEJKA_DPMNENGKEAE_OFFSET UNITYSDK_OFFSET(0x1C9E65D0)
#define DBLAIJKEJKA_ECEIODFIAFE_OFFSET UNITYSDK_OFFSET(0x1C9EAE10)
#define DBLAIJKEJKA_EFBMPPBIPKP_OFFSET UNITYSDK_OFFSET(0x1C9E9D70)
#define DBLAIJKEJKA_ELDDEDDINCE_OFFSET UNITYSDK_OFFSET(0x1C9E9000)
#define DBLAIJKEJKA_ENCJJNEMJPC_OFFSET UNITYSDK_OFFSET(0x1C9EB410)
#define DBLAIJKEJKA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9E5C10)
#define DBLAIJKEJKA_FDBFPPPGBBO_OFFSET UNITYSDK_OFFSET(0x1C9E8910)
#define DBLAIJKEJKA_FDONGBEOCPN_OFFSET UNITYSDK_OFFSET(0x1C9EB500)
#define DBLAIJKEJKA_FMLEAFKKJFK_1_OFFSET UNITYSDK_OFFSET(0x1C9EAC60)
#define DBLAIJKEJKA_FMLEAFKKJFK_OFFSET UNITYSDK_OFFSET(0x1C9E7AF0)
#define DBLAIJKEJKA_GOBMJIAAEGP_OFFSET UNITYSDK_OFFSET(0x1C9EA930)
#define DBLAIJKEJKA_HAFGNEJJPDI_OFFSET UNITYSDK_OFFSET(0x1C9E6870)
#define DBLAIJKEJKA_HPPPPMDLOFL_OFFSET UNITYSDK_OFFSET(0x1C9E6140)
#define DBLAIJKEJKA_JAEGHGGNKIG_OFFSET UNITYSDK_OFFSET(0x1C9E7C20)
#define DBLAIJKEJKA_JFJHEILOAAJ_OFFSET UNITYSDK_OFFSET(0x1C9EAD60)
#define DBLAIJKEJKA_JIMHIGNLCIC_OFFSET UNITYSDK_OFFSET(0x1C9EB0F0)
#define DBLAIJKEJKA_JKGPBAPKMPO_OFFSET UNITYSDK_OFFSET(0x1C9E6260)
#define DBLAIJKEJKA_JLIBHHCCBGD_OFFSET UNITYSDK_OFFSET(0x1C9E81B0)
#define DBLAIJKEJKA_KBIFPCLOJIN_OFFSET UNITYSDK_OFFSET(0x1C9E63F0)
#define DBLAIJKEJKA_KCKFFBAABON_OFFSET UNITYSDK_OFFSET(0x1C9E7C80)
#define DBLAIJKEJKA_LJPNBDGAOLG_OFFSET UNITYSDK_OFFSET(0x1C9E8F70)
#define DBLAIJKEJKA_LKNMHDDFIEM_OFFSET UNITYSDK_OFFSET(0x1C9E87E0)
#define DBLAIJKEJKA_MCAEKNHNDAL_OFFSET UNITYSDK_OFFSET(0x1C9E6640)
#define DBLAIJKEJKA_MOJOICNNNJK_OFFSET UNITYSDK_OFFSET(0x1C9E7EA0)
#define DBLAIJKEJKA_NEEFPGDNEOO_OFFSET UNITYSDK_OFFSET(0x1C9E71C0)
#define DBLAIJKEJKA_OAPBFCPJKEF_OFFSET UNITYSDK_OFFSET(0x1C9E7F00)
#define DBLAIJKEJKA_OLPIINKOMJA_OFFSET UNITYSDK_OFFSET(0x1C9E6910)
#define DBLAIJKEJKA_PHFGAFKJKLL_OFFSET UNITYSDK_OFFSET(0x1C9E6750)
#define DBLAIJKEJKA___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C9EBED0)
#define DBLAIJKEJKA___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x1C9EBF80)
#define DBLAIJKEJKA___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET UNITYSDK_OFFSET(0x1C9EBEF0)

inline static constexpr unsigned int DBLAIJKEJKA_TypeDefinitionIndex = 42307;

	class DBLAIJKEJKA : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::System::Random* OLEEIPHBJKB; // 0x18
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_EXECUTE_OFFSET))(this);
		}

		::System::Void PHFGAFKJKLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_PHFGAFKJKLL_OFFSET))(this);
		}

		::System::Void JKGPBAPKMPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_JKGPBAPKMPO_OFFSET))(this);
		}

		::System::Void KBIFPCLOJIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_KBIFPCLOJIN_OFFSET))(this);
		}

		::System::Void HPPPPMDLOFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_HPPPPMDLOFL_OFFSET))(this);
		}

		::System::Void DPMNENGKEAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_DPMNENGKEAE_OFFSET))(this);
		}

		::System::Void BNNLEMLBHOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_BNNLEMLBHOI_OFFSET))(this);
		}

		::System::Boolean OLPIINKOMJA(::RPG::GameCore::Match3::Match3ConditionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ConditionBase*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_OLPIINKOMJA_OFFSET))(this, a1);
		}

		::System::Void NEEFPGDNEOO(::RPG::GameCore::Match3::Match3ActionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_NEEFPGDNEOO_OFFSET))(this, a1);
		}

		::System::Boolean GOBMJIAAEGP(::RPG::GameCore::Match3::Match3ActionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_GOBMJIAAEGP_OFFSET))(this, a1);
		}

		::System::Void FMLEAFKKJFK(::RPG::GameCore::Match3::Match3ChessBoardTemplate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ChessBoardTemplate*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_FMLEAFKKJFK_OFFSET))(this, a1);
		}

		::System::Void FMLEAFKKJFK_1(::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::Match3::Match3ChessBoardGridInfo*>*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_FMLEAFKKJFK_1_OFFSET))(this, a1);
		}

		::System::Void JFJHEILOAAJ(::RPG::GameCore::Match3::Match3ChessBoardGridInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::Match3ChessBoardGridInfo*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_JFJHEILOAAJ_OFFSET))(this, a1);
		}

		::System::Void JAEGHGGNKIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_JAEGHGGNKIG_OFFSET))(this, a1);
		}

		::System::Void KCKFFBAABON(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_KCKFFBAABON_OFFSET))(this, a1);
		}

		::System::Void MOJOICNNNJK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_MOJOICNNNJK_OFFSET))(this, a1);
		}

		::System::Void ECEIODFIAFE(::System::UInt32 a1, ::RPG::GameCore::Match3::BombType a2, ::RPG::GameCore::Match3::StyleGenerateType a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::StyleGenerateType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_ECEIODFIAFE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FDONGBEOCPN(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::Match3::BombType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_FDONGBEOCPN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIMHIGNLCIC(::RPG::GameCore::Match3::PieceTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::PieceTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_JIMHIGNLCIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ENCJJNEMJPC(::RPG::GameCore::Match3::GridTag a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::GridTag, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_ENCJJNEMJPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MCAEKNHNDAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_MCAEKNHNDAL_OFFSET))(this);
		}

		::System::Void HAFGNEJJPDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_HAFGNEJJPDI_OFFSET))(this);
		}

		::System::Void CEOBKEKHMDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_CEOBKEKHMDB_OFFSET))(this, a1);
		}

		::System::Void OAPBFCPJKEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_OAPBFCPJKEF_OFFSET))(this, a1);
		}

		::System::Void LKNMHDDFIEM(::RPG::GameCore::Match3::SetEmojiReplyPatternAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::SetEmojiReplyPatternAction*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_LKNMHDDFIEM_OFFSET))(this, a1);
		}

		::System::Void JLIBHHCCBGD(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::Match3::BirdStyleWeightConfig*>*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_JLIBHHCCBGD_OFFSET))(this, a1);
		}

		::System::Void FDBFPPPGBBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_FDBFPPPGBBO_OFFSET))(this, a1);
		}

		::System::Void LJPNBDGAOLG(::System::UInt32 a1, ::RPG::Client::LittleGame::Match3::OpponentRole a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_LJPNBDGAOLG_OFFSET))(this, a1, a2);
		}

		::System::Void ELDDEDDINCE(::RPG::GameCore::Match3::RandomFreezeBombAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_ELDDEDDINCE_OFFSET))(this, a1);
		}

		::System::Void CAIODEGDGEG(::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeBombToMultiStyleAction*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_CAIODEGDGEG_OFFSET))(this, a1);
		}

		::System::Void EFBMPPBIPKP(::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToLineBombAction*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_EFBMPPBIPKP_OFFSET))(this, a1);
		}

		::System::Void CLKNFAHOAEF(::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + DBLAIJKEJKA_CLKNFAHOAEF_OFFSET))(this, a1);
		}

		::System::Boolean __ApplyRandomChangeBombToMultiStyle_b__31_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DBLAIJKEJKA___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET))(this, a1);
		}

		::System::Boolean __ApplyRandomChangeFruitToLineBomb_b__32_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DBLAIJKEJKA___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET))(this, a1);
		}

		::System::Boolean __ApplyRandomChangeFruitToBlackFog_b__33_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + DBLAIJKEJKA___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET))(this, a1);
		}

	};
