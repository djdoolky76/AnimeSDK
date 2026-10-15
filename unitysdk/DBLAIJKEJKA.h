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

#define DBLAIJKEJKA_BNNLEMLBHOI_OFFSET UNITYSDK_OFFSET(0x1CA14E20)
#define DBLAIJKEJKA_CAIODEGDGEG_OFFSET UNITYSDK_OFFSET(0x1CA17C90)
#define DBLAIJKEJKA_CEOBKEKHMDB_OFFSET UNITYSDK_OFFSET(0x1CA19D10)
#define DBLAIJKEJKA_CLKNFAHOAEF_OFFSET UNITYSDK_OFFSET(0x1CA18A00)
#define DBLAIJKEJKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA141C0)
#define DBLAIJKEJKA_DPMNENGKEAE_OFFSET UNITYSDK_OFFSET(0x1CA14C10)
#define DBLAIJKEJKA_ECEIODFIAFE_OFFSET UNITYSDK_OFFSET(0x1CA194B0)
#define DBLAIJKEJKA_EFBMPPBIPKP_OFFSET UNITYSDK_OFFSET(0x1CA183D0)
#define DBLAIJKEJKA_ELDDEDDINCE_OFFSET UNITYSDK_OFFSET(0x1CA17630)
#define DBLAIJKEJKA_ENCJJNEMJPC_OFFSET UNITYSDK_OFFSET(0x1CA19AB0)
#define DBLAIJKEJKA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CA14240)
#define DBLAIJKEJKA_FDBFPPPGBBO_OFFSET UNITYSDK_OFFSET(0x1CA16F50)
#define DBLAIJKEJKA_FDONGBEOCPN_OFFSET UNITYSDK_OFFSET(0x1CA19BA0)
#define DBLAIJKEJKA_FMLEAFKKJFK_1_OFFSET UNITYSDK_OFFSET(0x1CA19300)
#define DBLAIJKEJKA_FMLEAFKKJFK_OFFSET UNITYSDK_OFFSET(0x1CA16130)
#define DBLAIJKEJKA_GOBMJIAAEGP_OFFSET UNITYSDK_OFFSET(0x1CA18FD0)
#define DBLAIJKEJKA_HAFGNEJJPDI_OFFSET UNITYSDK_OFFSET(0x1CA14EB0)
#define DBLAIJKEJKA_HPPPPMDLOFL_OFFSET UNITYSDK_OFFSET(0x1CA14780)
#define DBLAIJKEJKA_JAEGHGGNKIG_OFFSET UNITYSDK_OFFSET(0x1CA16260)
#define DBLAIJKEJKA_JFJHEILOAAJ_OFFSET UNITYSDK_OFFSET(0x1CA19400)
#define DBLAIJKEJKA_JIMHIGNLCIC_OFFSET UNITYSDK_OFFSET(0x1CA19790)
#define DBLAIJKEJKA_JKGPBAPKMPO_OFFSET UNITYSDK_OFFSET(0x1CA148A0)
#define DBLAIJKEJKA_JLIBHHCCBGD_OFFSET UNITYSDK_OFFSET(0x1CA167F0)
#define DBLAIJKEJKA_KBIFPCLOJIN_OFFSET UNITYSDK_OFFSET(0x1CA14A30)
#define DBLAIJKEJKA_KCKFFBAABON_OFFSET UNITYSDK_OFFSET(0x1CA162C0)
#define DBLAIJKEJKA_LJPNBDGAOLG_OFFSET UNITYSDK_OFFSET(0x1CA175A0)
#define DBLAIJKEJKA_LKNMHDDFIEM_OFFSET UNITYSDK_OFFSET(0x1CA16E20)
#define DBLAIJKEJKA_MCAEKNHNDAL_OFFSET UNITYSDK_OFFSET(0x1CA14C80)
#define DBLAIJKEJKA_MOJOICNNNJK_OFFSET UNITYSDK_OFFSET(0x1CA164E0)
#define DBLAIJKEJKA_NEEFPGDNEOO_OFFSET UNITYSDK_OFFSET(0x1CA15800)
#define DBLAIJKEJKA_OAPBFCPJKEF_OFFSET UNITYSDK_OFFSET(0x1CA16540)
#define DBLAIJKEJKA_OLPIINKOMJA_OFFSET UNITYSDK_OFFSET(0x1CA14F50)
#define DBLAIJKEJKA_PHFGAFKJKLL_OFFSET UNITYSDK_OFFSET(0x1CA14D90)
#define DBLAIJKEJKA___APPLYRANDOMCHANGEBOMBTOMULTISTYLE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1CA1A570)
#define DBLAIJKEJKA___APPLYRANDOMCHANGEFRUITTOBLACKFOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CA1A620)
#define DBLAIJKEJKA___APPLYRANDOMCHANGEFRUITTOLINEBOMB_B__32_0_OFFSET UNITYSDK_OFFSET(0x1CA1A590)

inline static constexpr unsigned int DBLAIJKEJKA_TypeDefinitionIndex = 42307;

	class DBLAIJKEJKA : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Random* OLEEIPHBJKB; // 0x20
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
