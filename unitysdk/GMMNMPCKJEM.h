#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ABOOGEJAPHO;
class FFLFKJJLJEJ;
class GMMNMPCKJEM;
class JGOBLAHOHLB;
class KEHCDMCIBJJ;
class KJFEHJMAIAA;
class MLCLJKDKCDG;
class OJCBOMCCPDB;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMMNMPCKJEM_AIKKNHKAJEA_OFFSET UNITYSDK_OFFSET(0x16C83EC0)
#define GMMNMPCKJEM_AJDJJOAOIOF_OFFSET UNITYSDK_OFFSET(0x16C83C80)
#define GMMNMPCKJEM_CJOOEOGEIHL_OFFSET UNITYSDK_OFFSET(0x16C84220)
#define GMMNMPCKJEM_CTOR_OFFSET UNITYSDK_OFFSET(0x16C851C0)
#define GMMNMPCKJEM_EDADILIFBAC_OFFSET UNITYSDK_OFFSET(0x16C84390)
#define GMMNMPCKJEM_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x16C84400)
#define GMMNMPCKJEM_HFKKCOBPFEA_OFFSET UNITYSDK_OFFSET(0x16C84330)
#define GMMNMPCKJEM_LMALAJMFMLA_OFFSET UNITYSDK_OFFSET(0x16C83FF0)

inline static constexpr unsigned int GMMNMPCKJEM_TypeDefinitionIndex = 57507;

	class GMMNMPCKJEM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* FCDAMKENCCE; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>* JOBFPOMPGOC; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* LEOOKBHBABM; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* PNLOHHEENGI; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* MAOCICGPNOE; // 0x30
		::System::Collections::Generic::List_1<::MLCLJKDKCDG*>* KCOMPKMJCMC; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GOBDPJABGEH; // 0x40
		::System::Collections::Generic::List_1<::KEHCDMCIBJJ*>* BHLMEOBLIDG; // 0x48
		::KJFEHJMAIAA* NJBNOFIEDDE; // 0x50
		::System::Collections::Generic::List_1<::FFLFKJJLJEJ*>* KIACPLNFMLH; // 0x58
		::System::Collections::Generic::List_1<::ABOOGEJAPHO*>* AHKBIHOGBJB; // 0x60
		::OJCBOMCCPDB* KAEJCAMAIIE; // 0x68
		::JGOBLAHOHLB* HLFDLAIDABN; // 0x70
		::System::UInt32 BHFNGFHKKMF; // 0x78
		::System::UInt32 CJCCMAACJDB; // 0x7C
		::System::UInt32 OOFPAKJPBAL; // 0x80
		::System::UInt32 KOMFCJAFGPA; // 0x84
		::System::UInt32 MLHLNECCDPD; // 0x88
		::System::UInt32 LIFBHELMEAI; // 0x8C
		::System::UInt32 EHNJDIDABHD; // 0x90
		::System::UInt32 LDFEJAAOLKB; // 0x94
		::System::UInt32 AACGBEBGDPE; // 0x98
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PKANAKAEJBF; // 0xA0
		::System::UInt32 HBPDNKBPOKL; // 0xA8
		::System::UInt32 NFBJINKLLLK; // 0xAC
		::System::Boolean OHJAOGJDJPO; // 0xB0
		::System::Byte _padding1[0x3];
		::System::UInt32 LODNFLMBIEH; // 0xB4
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

		::RPG::GameCore::BattleGridFightTeamTraitData* CJOOEOGEIHL(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_CJOOEOGEIHL_OFFSET))(this, a1);
		}

		::System::UInt32 HFKKCOBPFEA(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + GMMNMPCKJEM_HFKKCOBPFEA_OFFSET))(this, a1);
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
