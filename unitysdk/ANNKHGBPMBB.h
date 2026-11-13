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

#define ANNKHGBPMBB_BJFCJKEANEP_OFFSET UNITYSDK_OFFSET(0x1A839140)
#define ANNKHGBPMBB_CJAMHLBGIEJ_OFFSET UNITYSDK_OFFSET(0x1A8396E0)
#define ANNKHGBPMBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8359E0)
#define ANNKHGBPMBB_DMGAOLFJBCC_OFFSET UNITYSDK_OFFSET(0x1A838BC0)
#define ANNKHGBPMBB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A836610)
#define ANNKHGBPMBB_FIGPBFKJMNP_OFFSET UNITYSDK_OFFSET(0x1A836D30)
#define ANNKHGBPMBB_FJNKMPCAPDN_OFFSET UNITYSDK_OFFSET(0x1A839510)
#define ANNKHGBPMBB_FLJFDHHONMN_OFFSET UNITYSDK_OFFSET(0x1A838490)
#define ANNKHGBPMBB_FLJLHBBDDHJ_OFFSET UNITYSDK_OFFSET(0x1A837810)
#define ANNKHGBPMBB_FMKOOGGEBMF_OFFSET UNITYSDK_OFFSET(0x1A836B20)
#define ANNKHGBPMBB_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0x1A836F80)
#define ANNKHGBPMBB_HFAAFMJHMFH_OFFSET UNITYSDK_OFFSET(0x1A839570)
#define ANNKHGBPMBB_HNLLOCEJFEB_OFFSET UNITYSDK_OFFSET(0x1A837D10)
#define ANNKHGBPMBB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A835C20)
#define ANNKHGBPMBB_JIDPBFIIAKK_OFFSET UNITYSDK_OFFSET(0x1A838620)
#define ANNKHGBPMBB_KKLFLALIPEC_OFFSET UNITYSDK_OFFSET(0x1A8399B0)
#define ANNKHGBPMBB_KOKAGIGBJJF_OFFSET UNITYSDK_OFFSET(0x1A839330)
#define ANNKHGBPMBB_LBANMENDDCH_OFFSET UNITYSDK_OFFSET(0x1A8382E0)
#define ANNKHGBPMBB_LCJJAEOFDCI_OFFSET UNITYSDK_OFFSET(0x1A838E00)
#define ANNKHGBPMBB_LMGOBDHGLIC_OFFSET UNITYSDK_OFFSET(0x1A839850)
#define ANNKHGBPMBB_NPJMBJCDDOB_OFFSET UNITYSDK_OFFSET(0x1A836830)
#define ANNKHGBPMBB_OKKOBFLMNAK_OFFSET UNITYSDK_OFFSET(0x1A837440)
#define ANNKHGBPMBB_PFEODPPDFBC_OFFSET UNITYSDK_OFFSET(0x1A837FE0)
#define ANNKHGBPMBB_PNMMIEMLKCA_OFFSET UNITYSDK_OFFSET(0x1A839AE0)
#define ANNKHGBPMBB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1A836150)

inline static constexpr unsigned int ANNKHGBPMBB_TypeDefinitionIndex = 78917;

	class ANNKHGBPMBB : public ::System::Object
	{
	public:
		::LGCICJNMABG* IHHELJMECID; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x20
		::System::UInt64 LDOAKFBJONG; // 0x28
		::System::Single MEOELIJNODG; // 0x30
		::System::Single IDPGGDOHHBP; // 0x34
		::System::Boolean PPMAGFKOKFI; // 0x38
		::System::Boolean JDLOHNAEGGB; // 0x39
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::Match3::ChessBoardState HJNMJJBDFPG; // 0x3C
		::System::UInt64 EPNDAMLLDEN; // 0x40
		::System::UInt64 EJEMDPHAHDL; // 0x48
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
