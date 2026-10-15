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

#define GMMNMPCKJEM_AIKKNHKAJEA_OFFSET UNITYSDK_OFFSET(0x15ACBA00)
#define GMMNMPCKJEM_AJDJJOAOIOF_OFFSET UNITYSDK_OFFSET(0x15ACB7C0)
#define GMMNMPCKJEM_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACCB90)
#define GMMNMPCKJEM_EDADILIFBAC_OFFSET UNITYSDK_OFFSET(0x15ACBDC0)
#define GMMNMPCKJEM_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x15ACBE30)
#define GMMNMPCKJEM_LMALAJMFMLA_OFFSET UNITYSDK_OFFSET(0x15ACBB30)

inline static constexpr unsigned int GMMNMPCKJEM_TypeDefinitionIndex = 56293;

	class GMMNMPCKJEM : public ::System::Object
	{
	public:
		::OJCBOMCCPDB* KAEJCAMAIIE; // 0x10
		::JGOBLAHOHLB* HLFDLAIDABN; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::LineUpCharacter*>* JOBFPOMPGOC; // 0x20
		::System::Collections::Generic::List_1<::KEHCDMCIBJJ*>* BHLMEOBLIDG; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* FCDAMKENCCE; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* PNLOHHEENGI; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* GOBDPJABGEH; // 0x40
		::System::Collections::Generic::List_1<::FFLFKJJLJEJ*>* KIACPLNFMLH; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightAvatarData*>* LEOOKBHBABM; // 0x50
		::System::Collections::Generic::List_1<::ABOOGEJAPHO*>* AHKBIHOGBJB; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightTeamTraitData*>* MAOCICGPNOE; // 0x60
		::System::Collections::Generic::List_1<::MLCLJKDKCDG*>* KCOMPKMJCMC; // 0x68
		::System::UInt32 AACGBEBGDPE; // 0x70
		::System::UInt32 NFBJINKLLLK; // 0x74
		::System::UInt32 KOMFCJAFGPA; // 0x78
		::System::UInt32 LDFEJAAOLKB; // 0x7C
		::System::UInt32 MLHLNECCDPD; // 0x80
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PKANAKAEJBF; // 0x88
		::System::UInt32 BHFNGFHKKMF; // 0x90
		::System::UInt32 LODNFLMBIEH; // 0x94
		::System::UInt32 OOFPAKJPBAL; // 0x98
		::System::UInt32 LIFBHELMEAI; // 0x9C
		::System::UInt32 HBPDNKBPOKL; // 0xA0
		::System::Boolean OHJAOGJDJPO; // 0xA4
		::System::Byte _padding1[0x3];
		::System::UInt32 EHNJDIDABHD; // 0xA8
		::System::UInt32 CJCCMAACJDB; // 0xAC
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
