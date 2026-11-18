#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JOJPCGFABGC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMLPLAKNJPJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMLPLAKNJPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E65B0)
#define MMLPLAKNJPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMLPLAKNJPJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMLPLAKNJPJ_JPHCBNFGIBI_1_OFFSET UNITYSDK_OFFSET(0x195A7B90)
#define MMLPLAKNJPJ_JPHCBNFGIBI_OFFSET UNITYSDK_OFFSET(0x195A7B20)
#define MMLPLAKNJPJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6600)
#define MMLPLAKNJPJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E65F0)
#define MMLPLAKNJPJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E6590)

inline static constexpr unsigned int MMLPLAKNJPJ_TypeDefinitionIndex = 16045;

struct alignas(8) MMLPLAKNJPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JOJPCGFABGC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOJPCGFABGC&))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MMLPLAKNJPJ JPHCBNFGIBI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMLPLAKNJPJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_JPHCBNFGIBI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MMLPLAKNJPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMLPLAKNJPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JOJPCGFABGC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JOJPCGFABGC&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MMLPLAKNJPJ JPHCBNFGIBI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMLPLAKNJPJ EIFONLCJOPG)
	{
		return ((::MMLPLAKNJPJ(*)(::FlatBuffers::ByteBuffer*, ::MMLPLAKNJPJ))((::PBYTE)hIl2Cpp + MMLPLAKNJPJ_JPHCBNFGIBI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
