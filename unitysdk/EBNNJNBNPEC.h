#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NGACDFKIGHM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBNNJNBNPEC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBNNJNBNPEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0D80)
#define EBNNJNBNPEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBNNJNBNPEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBNNJNBNPEC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0D70)
#define EBNNJNBNPEC_NHOMEOABKLL_1_OFFSET UNITYSDK_OFFSET(0x187A1EC0)
#define EBNNJNBNPEC_NHOMEOABKLL_OFFSET UNITYSDK_OFFSET(0x187A1E50)
#define EBNNJNBNPEC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0D60)
#define EBNNJNBNPEC___INIT_OFFSET UNITYSDK_OFFSET(0x7D0D40)

inline static constexpr unsigned int EBNNJNBNPEC_TypeDefinitionIndex = 17317;

struct alignas(8) EBNNJNBNPEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBNNJNBNPEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NGACDFKIGHM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGACDFKIGHM&, ::System::Int32&))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NGACDFKIGHM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NGACDFKIGHM&))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EBNNJNBNPEC NHOMEOABKLL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBNNJNBNPEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_NHOMEOABKLL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EBNNJNBNPEC NHOMEOABKLL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBNNJNBNPEC EIFONLCJOPG)
	{
		return ((::EBNNJNBNPEC(*)(::FlatBuffers::ByteBuffer*, ::EBNNJNBNPEC))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_NHOMEOABKLL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EBNNJNBNPEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBNNJNBNPEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBNNJNBNPEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
