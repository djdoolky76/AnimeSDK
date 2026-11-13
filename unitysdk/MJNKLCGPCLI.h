#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/System/Object.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
class FOJDKLCHCKG;
class IPGIJFNAFLC;

#define MJNKLCGPCLI_AODIFAHOPIN_OFFSET UNITYSDK_OFFSET(0x1A3B5AD0)
#define MJNKLCGPCLI_BJFCJKEANEP_OFFSET UNITYSDK_OFFSET(0x1A3B46F0)
#define MJNKLCGPCLI_BKFMPIJMEEP_OFFSET UNITYSDK_OFFSET(0x1A3B4C30)
#define MJNKLCGPCLI_CJAMHLBGIEJ_OFFSET UNITYSDK_OFFSET(0x1A3B59B0)
#define MJNKLCGPCLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B1E70)
#define MJNKLCGPCLI_EHCLPELEMBF_OFFSET UNITYSDK_OFFSET(0x1A3B4270)
#define MJNKLCGPCLI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A3B2730)
#define MJNKLCGPCLI_FJNKMPCAPDN_OFFSET UNITYSDK_OFFSET(0x1A3B5A10)
#define MJNKLCGPCLI_FLJLHBBDDHJ_OFFSET UNITYSDK_OFFSET(0x1A3B4E80)
#define MJNKLCGPCLI_GBOENALBIIC_OFFSET UNITYSDK_OFFSET(0x1A3B2E90)
#define MJNKLCGPCLI_HFAAFMJHMFH_OFFSET UNITYSDK_OFFSET(0x1A3B56C0)
#define MJNKLCGPCLI_HNLLOCEJFEB_OFFSET UNITYSDK_OFFSET(0x1A3B43B0)
#define MJNKLCGPCLI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3B20B0)
#define MJNKLCGPCLI_JIDPBFIIAKK_OFFSET UNITYSDK_OFFSET(0x1A3B3AF0)
#define MJNKLCGPCLI_KKLFLALIPEC_OFFSET UNITYSDK_OFFSET(0x1A3B5880)
#define MJNKLCGPCLI_KOKAGIGBJJF_OFFSET UNITYSDK_OFFSET(0x1A3B4090)
#define MJNKLCGPCLI_LBANMENDDCH_OFFSET UNITYSDK_OFFSET(0x1A3B37B0)
#define MJNKLCGPCLI_LCJJAEOFDCI_OFFSET UNITYSDK_OFFSET(0x1A3B5380)
#define MJNKLCGPCLI_LMGOBDHGLIC_OFFSET UNITYSDK_OFFSET(0x1A3B5C90)
#define MJNKLCGPCLI_MFAONJIIKNF_OFFSET UNITYSDK_OFFSET(0x1A3B2C40)
#define MJNKLCGPCLI_NIPNAHKAENC_OFFSET UNITYSDK_OFFSET(0x1A3B49A0)
#define MJNKLCGPCLI_NJIAAKMEBIO_OFFSET UNITYSDK_OFFSET(0x1A3B3960)
#define MJNKLCGPCLI_NPJMBJCDDOB_OFFSET UNITYSDK_OFFSET(0x1A3B2930)
#define MJNKLCGPCLI_OENCGJOCCKO_OFFSET UNITYSDK_OFFSET(0x1A3B5A70)
#define MJNKLCGPCLI_OKKOBFLMNAK_OFFSET UNITYSDK_OFFSET(0x1A3B3330)
#define MJNKLCGPCLI_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1A3B23F0)

inline static constexpr unsigned int MJNKLCGPCLI_TypeDefinitionIndex = 78916;

	class MJNKLCGPCLI : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x18
		::System::Boolean JDLOHNAEGGB; // 0x20
		::System::Boolean PPMAGFKOKFI; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::Match3::ChessBoardState HJNMJJBDFPG; // 0x24
		::System::Single MEOELIJNODG; // 0x28
		::System::Single IDPGGDOHHBP; // 0x2C
		::System::UInt64 EJEMDPHAHDL; // 0x30
		::System::UInt64 EPNDAMLLDEN; // 0x38
		::System::UInt64 LDOAKFBJONG; // 0x40
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_EXECUTE_OFFSET))(this);
		}

		::System::Void NPJMBJCDDOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_NPJMBJCDDOB_OFFSET))(this);
		}

		::System::Void GBOENALBIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_GBOENALBIIC_OFFSET))(this);
		}

		::System::Void OKKOBFLMNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_OKKOBFLMNAK_OFFSET))(this);
		}

		::System::Void LBANMENDDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_LBANMENDDCH_OFFSET))(this);
		}

		::System::Void HNLLOCEJFEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_HNLLOCEJFEB_OFFSET))(this);
		}

		::System::Void NIPNAHKAENC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_NIPNAHKAENC_OFFSET))(this);
		}

		::System::Void BKFMPIJMEEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_BKFMPIJMEEP_OFFSET))(this);
		}

		::System::Void NJIAAKMEBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_NJIAAKMEBIO_OFFSET))(this);
		}

		::System::Void JIDPBFIIAKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_JIDPBFIIAKK_OFFSET))(this);
		}

		::System::Void KOKAGIGBJJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_KOKAGIGBJJF_OFFSET))(this);
		}

		::System::Void EHCLPELEMBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_EHCLPELEMBF_OFFSET))(this);
		}

		::System::Void BJFCJKEANEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_BJFCJKEANEP_OFFSET))(this);
		}

		::System::Void FLJLHBBDDHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_FLJLHBBDDHJ_OFFSET))(this);
		}

		::System::Void LCJJAEOFDCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_LCJJAEOFDCI_OFFSET))(this);
		}

		::System::Void MFAONJIIKNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_MFAONJIIKNF_OFFSET))(this);
		}

		::System::Void HFAAFMJHMFH(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_HFAAFMJHMFH_OFFSET))(this, a1);
		}

		::System::Void AODIFAHOPIN(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_AODIFAHOPIN_OFFSET))(this, a1);
		}

		::System::Void LMGOBDHGLIC(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_LMGOBDHGLIC_OFFSET))(this, a1);
		}

		::System::Void KKLFLALIPEC(::FOJDKLCHCKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOJDKLCHCKG*))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_KKLFLALIPEC_OFFSET))(this, a1);
		}

		::System::Void CJAMHLBGIEJ(::RPG::Client::LittleGame::Match3::Match3GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_CJAMHLBGIEJ_OFFSET))(this, a1);
		}

		::System::Void FJNKMPCAPDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_FJNKMPCAPDN_OFFSET))(this);
		}

		::System::Void OENCGJOCCKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKLCGPCLI_OENCGJOCCKO_OFFSET))(this);
		}

	};
