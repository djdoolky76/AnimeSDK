#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ABOOGEJAPHO;
class FFLFKJJLJEJ;
class GMMNMPCKJEM;
class JGOBLAHOHLB;
class KEHCDMCIBJJ;
class MLCLJKDKCDG;
class OJCBOMCCPDB;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMMNMPCKJEM_AIKKNHKAJEA_OFFSET UNITYSDK_OFFSET(0x15AD75A0)
#define GMMNMPCKJEM_AJDJJOAOIOF_OFFSET UNITYSDK_OFFSET(0x15AD7360)
#define GMMNMPCKJEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD8720)
#define GMMNMPCKJEM_EDADILIFBAC_OFFSET UNITYSDK_OFFSET(0x15AD7960)
#define GMMNMPCKJEM_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x15AD79D0)
#define GMMNMPCKJEM_LMALAJMFMLA_OFFSET UNITYSDK_OFFSET(0x15AD76D0)

	class GMMNMPCKJEM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>* JOBFPOMPGOC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* FCDAMKENCCE; // 0x18
		::OJCBOMCCPDB* KAEJCAMAIIE; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* LEOOKBHBABM; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GOBDPJABGEH; // 0x30
		::System::Collections::Generic::List_1<::ABOOGEJAPHO*>* AHKBIHOGBJB; // 0x38
		::System::Collections::Generic::List_1<::KEHCDMCIBJJ*>* BHLMEOBLIDG; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* MAOCICGPNOE; // 0x48
		::System::Collections::Generic::List_1<::FFLFKJJLJEJ*>* KIACPLNFMLH; // 0x50
		::System::Collections::Generic::List_1<::MLCLJKDKCDG*>* KCOMPKMJCMC; // 0x58
		::JGOBLAHOHLB* HLFDLAIDABN; // 0x60
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* PNLOHHEENGI; // 0x68
		::System::UInt32 LODNFLMBIEH; // 0x70
		::System::UInt32 NFBJINKLLLK; // 0x74
		::System::UInt32 LIFBHELMEAI; // 0x78
		::System::UInt32 AACGBEBGDPE; // 0x7C
		::System::UInt32 CJCCMAACJDB; // 0x80
		::System::UInt32 MLHLNECCDPD; // 0x84
		::RPG::GameCore::FixPoint PKANAKAEJBF; // 0x88
		::System::UInt32 EHNJDIDABHD; // 0x90
		::System::UInt32 LDFEJAAOLKB; // 0x94
		::System::UInt32 BHFNGFHKKMF; // 0x98
		::System::UInt32 HBPDNKBPOKL; // 0x9C
		::System::UInt32 KOMFCJAFGPA; // 0xA0
		::System::Boolean OHJAOGJDJPO; // 0xA4
		::System::Byte _padding0[0x3];
		::System::UInt32 OOFPAKJPBAL; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* AJDJJOAOIOF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_AJDJJOAOIOF_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* AIKKNHKAJEA()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_AIKKNHKAJEA_OFFSET))(this);
		}

		::System::Void LMALAJMFMLA(::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>*))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_LMALAJMFMLA_OFFSET))(this, a1);
		}

		::System::UInt32 EDADILIFBAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_EDADILIFBAC_OFFSET))(this);
		}

		::GMMNMPCKJEM* HEPPBBLLBPN()
		{
			return ((::GMMNMPCKJEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_HEPPBBLLBPN_OFFSET))(this);
		}

	};
