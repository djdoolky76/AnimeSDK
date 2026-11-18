#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NNFANENBBOD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPMLIINMCFA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JPMLIINMCFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DFAB0)
#define JPMLIINMCFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPMLIINMCFA_GFJGHMFKLDD_1_OFFSET UNITYSDK_OFFSET(0x19365080)
#define JPMLIINMCFA_GFJGHMFKLDD_OFFSET UNITYSDK_OFFSET(0x19365010)
#define JPMLIINMCFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JPMLIINMCFA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DFAA0)
#define JPMLIINMCFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DFA90)
#define JPMLIINMCFA___INIT_OFFSET UNITYSDK_OFFSET(0x7DFA70)

inline static constexpr unsigned int JPMLIINMCFA_TypeDefinitionIndex = 13724;

struct alignas(8) JPMLIINMCFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMLIINMCFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPMLIINMCFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMLIINMCFA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JPMLIINMCFA GFJGHMFKLDD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPMLIINMCFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPMLIINMCFA_GFJGHMFKLDD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMLIINMCFA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JPMLIINMCFA GFJGHMFKLDD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JPMLIINMCFA EIFONLCJOPG)
	{
		return ((::JPMLIINMCFA(*)(::FlatBuffers::ByteBuffer*, ::JPMLIINMCFA))((::PBYTE)hIl2Cpp + JPMLIINMCFA_GFJGHMFKLDD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NNFANENBBOD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNFANENBBOD&))((::PBYTE)hIl2Cpp + JPMLIINMCFA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NNFANENBBOD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NNFANENBBOD&, ::System::Int32&))((::PBYTE)hIl2Cpp + JPMLIINMCFA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JPMLIINMCFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPMLIINMCFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPMLIINMCFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
