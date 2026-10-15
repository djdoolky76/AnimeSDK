#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/System/Object.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
class IPGIJFNAFLC;
class JECNOELJLKO;
class LGCICJNMABG;

#define ANNKHGBPMBB_BJFCJKEANEP_OFFSET UNITYSDK_OFFSET(0x1589FBA0)
#define ANNKHGBPMBB_CJAMHLBGIEJ_OFFSET UNITYSDK_OFFSET(0x158A0150)
#define ANNKHGBPMBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1589C400)
#define ANNKHGBPMBB_DMGAOLFJBCC_OFFSET UNITYSDK_OFFSET(0x1589F620)
#define ANNKHGBPMBB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1589D030)
#define ANNKHGBPMBB_FIGPBFKJMNP_OFFSET UNITYSDK_OFFSET(0x1589D750)
#define ANNKHGBPMBB_FJNKMPCAPDN_OFFSET UNITYSDK_OFFSET(0x1589FF80)
#define ANNKHGBPMBB_FLJFDHHONMN_OFFSET UNITYSDK_OFFSET(0x1589EED0)
#define ANNKHGBPMBB_FLJLHBBDDHJ_OFFSET UNITYSDK_OFFSET(0x1589E240)
#define ANNKHGBPMBB_FMKOOGGEBMF_OFFSET UNITYSDK_OFFSET(0x1589D540)
#define ANNKHGBPMBB_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0x1589D9A0)
#define ANNKHGBPMBB_HFAAFMJHMFH_OFFSET UNITYSDK_OFFSET(0x1589FFE0)
#define ANNKHGBPMBB_HNLLOCEJFEB_OFFSET UNITYSDK_OFFSET(0x1589E750)
#define ANNKHGBPMBB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1589C640)
#define ANNKHGBPMBB_JIDPBFIIAKK_OFFSET UNITYSDK_OFFSET(0x1589F060)
#define ANNKHGBPMBB_KKLFLALIPEC_OFFSET UNITYSDK_OFFSET(0x158A0420)
#define ANNKHGBPMBB_KOKAGIGBJJF_OFFSET UNITYSDK_OFFSET(0x1589FD90)
#define ANNKHGBPMBB_LBANMENDDCH_OFFSET UNITYSDK_OFFSET(0x1589ED20)
#define ANNKHGBPMBB_LCJJAEOFDCI_OFFSET UNITYSDK_OFFSET(0x1589F860)
#define ANNKHGBPMBB_LMGOBDHGLIC_OFFSET UNITYSDK_OFFSET(0x158A02C0)
#define ANNKHGBPMBB_NPJMBJCDDOB_OFFSET UNITYSDK_OFFSET(0x1589D250)
#define ANNKHGBPMBB_OKKOBFLMNAK_OFFSET UNITYSDK_OFFSET(0x1589DE60)
#define ANNKHGBPMBB_PFEODPPDFBC_OFFSET UNITYSDK_OFFSET(0x1589EA20)
#define ANNKHGBPMBB_PNMMIEMLKCA_OFFSET UNITYSDK_OFFSET(0x158A0550)
#define ANNKHGBPMBB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1589CB70)

	class ANNKHGBPMBB : public ::System::Object
	{
	public:
		::LGCICJNMABG* IHHELJMECID; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x20
		::System::Single MEOELIJNODG; // 0x28
		::RPG::Client::LittleGame::Match3::ChessBoardState HJNMJJBDFPG; // 0x2C
		::System::UInt64 EJEMDPHAHDL; // 0x30
		::System::UInt64 LDOAKFBJONG; // 0x38
		::System::Single IDPGGDOHHBP; // 0x40
		::System::Boolean JDLOHNAEGGB; // 0x44
		::System::Boolean PPMAGFKOKFI; // 0x45
		::System::Byte _padding0[0x2];
		::System::UInt64 EPNDAMLLDEN; // 0x48
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_EXECUTE_OFFSET))(this);
		}

		::System::Void PFEODPPDFBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_PFEODPPDFBC_OFFSET))(this);
		}

		::System::Void FLJLHBBDDHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_FLJLHBBDDHJ_OFFSET))(this);
		}

		::System::Void LCJJAEOFDCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_LCJJAEOFDCI_OFFSET))(this);
		}

		::System::Void HNLLOCEJFEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_HNLLOCEJFEB_OFFSET))(this);
		}

		::System::Void OKKOBFLMNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_OKKOBFLMNAK_OFFSET))(this);
		}

		::System::Void LBANMENDDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_LBANMENDDCH_OFFSET))(this);
		}

		::System::Void GBOENALBIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_GBOENALBIIC_OFFSET))(this);
		}

		::System::Void FLJFDHHONMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_FLJFDHHONMN_OFFSET))(this);
		}

		::System::Void HFAAFMJHMFH(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_HFAAFMJHMFH_OFFSET))(this, a1);
		}

		::System::Void FJNKMPCAPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_FJNKMPCAPDN_OFFSET))(this);
		}

		::System::Void KKLFLALIPEC(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_KKLFLALIPEC_OFFSET))(this, a1);
		}

		::System::Void LMGOBDHGLIC(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_LMGOBDHGLIC_OFFSET))(this, a1);
		}

		::System::Void FIGPBFKJMNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_FIGPBFKJMNP_OFFSET))(this);
		}

		::System::Void FMKOOGGEBMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_FMKOOGGEBMF_OFFSET))(this);
		}

		::System::Void DMGAOLFJBCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_DMGAOLFJBCC_OFFSET))(this);
		}

		::System::Void NPJMBJCDDOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_NPJMBJCDDOB_OFFSET))(this);
		}

		::System::Void BJFCJKEANEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_BJFCJKEANEP_OFFSET))(this);
		}

		::System::Void PNMMIEMLKCA(::JECNOELJLKO* a1, ::JECNOELJLKO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_PNMMIEMLKCA_OFFSET))(this, a1, a2);
		}

		::System::Void JIDPBFIIAKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_JIDPBFIIAKK_OFFSET))(this);
		}

		::System::Void KOKAGIGBJJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_KOKAGIGBJJF_OFFSET))(this);
		}

		::System::Void CJAMHLBGIEJ(::RPG::Client::LittleGame::Match3::Match3GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + ANNKHGBPMBB_CJAMHLBGIEJ_OFFSET))(this, a1);
		}

	};
