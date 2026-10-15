#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class BOMFGKDLHIB;
class DBELNCKIDFH;
class FDPALAEIHPB;
class HEAIEBHLCMJ;
class KHPOKIKCOFO;
class PLAGENLANML;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MCFOLOOCDGJ_AHFKEHNAOAG_OFFSET UNITYSDK_OFFSET(0xB87A010)
#define MCFOLOOCDGJ_AOOFEIGJFCL_OFFSET UNITYSDK_OFFSET(0xB879900)
#define MCFOLOOCDGJ_BFKCLILHPGA_OFFSET UNITYSDK_OFFSET(0xB87A310)
#define MCFOLOOCDGJ_CAJFIPHHIEK_OFFSET UNITYSDK_OFFSET(0xB879E50)
#define MCFOLOOCDGJ_COCCHMHOFIE_OFFSET UNITYSDK_OFFSET(0xB8796B0)
#define MCFOLOOCDGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8793A0)
#define MCFOLOOCDGJ_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0xB879650)
#define MCFOLOOCDGJ_EADGNKLAIPI_OFFSET UNITYSDK_OFFSET(0xB879C20)
#define MCFOLOOCDGJ_GAGHELDLDCN_OFFSET UNITYSDK_OFFSET(0xB87A400)
#define MCFOLOOCDGJ_GJCLKFMALHK_OFFSET UNITYSDK_OFFSET(0xB8798C0)
#define MCFOLOOCDGJ_GKMIOIBBHGF_OFFSET UNITYSDK_OFFSET(0xB87A9C0)
#define MCFOLOOCDGJ_GPNPBFEACBG_OFFSET UNITYSDK_OFFSET(0xB879880)
#define MCFOLOOCDGJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB879770)
#define MCFOLOOCDGJ_HHMOCPMNBDI_OFFSET UNITYSDK_OFFSET(0xB879830)
#define MCFOLOOCDGJ_HMNCFODGPDJ_OFFSET UNITYSDK_OFFSET(0xB879D40)
#define MCFOLOOCDGJ_KFELOBIEPFG_OFFSET UNITYSDK_OFFSET(0xB879A90)
#define MCFOLOOCDGJ_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xB879720)
#define MCFOLOOCDGJ_KPKPFMNFMAN_OFFSET UNITYSDK_OFFSET(0xB879F30)
#define MCFOLOOCDGJ_LGGHPHPLIPN_OFFSET UNITYSDK_OFFSET(0xB8795F0)
#define MCFOLOOCDGJ_NCCJBLALCDF_OFFSET UNITYSDK_OFFSET(0xB87AA40)

	class MCFOLOOCDGJ : public ::HLFHMKMJNPK
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::Match3::ChessBoardState>* CADIHEJLJLO; // 0x20
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x28
		::RPG::Client::MatchThreeBoard* PCDGPKPNIOE; // 0x30
		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* NJGEMGKDBCM; // 0x38
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x40
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2, ::RPG::Client::MatchThreeBoard* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LGGHPHPLIPN(::RPG::Client::LittleGame::MatchThreeTimelineBattleField* a1, ::RPG::Client::MatchThreeBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MatchThreeTimelineBattleField*, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_LGGHPHPLIPN_OFFSET))(this, a1, a2);
		}

		::System::Void DJPEJOPFANL(::PLAGENLANML* a1, ::KHPOKIKCOFO* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::KHPOKIKCOFO*, ::System::String*))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_DJPEJOPFANL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void COCCHMHOFIE(::PLAGENLANML* a1, ::KHPOKIKCOFO* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::PLAGENLANML*, ::KHPOKIKCOFO*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_COCCHMHOFIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KJMDJMBNCPE(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_KJMDJMBNCPE_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void HHMOCPMNBDI(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_HHMOCPMNBDI_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeBoard* GPNPBFEACBG()
		{
			return ((::RPG::Client::MatchThreeBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_GPNPBFEACBG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* GJCLKFMALHK()
		{
			return ((::RPG::Client::LittleGame::MatchThreeTimelineBattleField*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_GJCLKFMALHK_OFFSET))(this);
		}

		::System::Void AOOFEIGJFCL(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_AOOFEIGJFCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFELOBIEPFG(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_KFELOBIEPFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EADGNKLAIPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_EADGNKLAIPI_OFFSET))(this);
		}

		::System::Void HMNCFODGPDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_HMNCFODGPDJ_OFFSET))(this);
		}

		::System::Void CAJFIPHHIEK(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::Match3::OpponentRole a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_CAJFIPHHIEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPKPFMNFMAN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_KPKPFMNFMAN_OFFSET))(this, a1);
		}

		::System::Void AHFKEHNAOAG(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_AHFKEHNAOAG_OFFSET))(this, a1);
		}

		::System::Void BFKCLILHPGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_BFKCLILHPGA_OFFSET))(this);
		}

		::System::Void GAGHELDLDCN(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_GAGHELDLDCN_OFFSET))(this, a1);
		}

		::System::Void GKMIOIBBHGF(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_GKMIOIBBHGF_OFFSET))(this, a1, a2);
		}

		::DBELNCKIDFH* NCCJBLALCDF(::System::UInt32 a1)
		{
			return ((::DBELNCKIDFH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCFOLOOCDGJ_NCCJBLALCDF_OFFSET))(this, a1);
		}

	};
