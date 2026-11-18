#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EJJGCGAPHNP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PEJNJJEALPJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PEJNJJEALPJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F0380)
#define PEJNJJEALPJ_GDLBLOCPKHO_1_OFFSET UNITYSDK_OFFSET(0x19DD9060)
#define PEJNJJEALPJ_GDLBLOCPKHO_OFFSET UNITYSDK_OFFSET(0x19DD8FF0)
#define PEJNJJEALPJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PEJNJJEALPJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PEJNJJEALPJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F03C0)
#define PEJNJJEALPJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F0370)
#define PEJNJJEALPJ___INIT_OFFSET UNITYSDK_OFFSET(0x7F0350)

inline static constexpr unsigned int PEJNJJEALPJ_TypeDefinitionIndex = 15923;

struct alignas(8) PEJNJJEALPJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEJNJJEALPJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PEJNJJEALPJ GDLBLOCPKHO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEJNJJEALPJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_GDLBLOCPKHO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EJJGCGAPHNP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJJGCGAPHNP&))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PEJNJJEALPJ GDLBLOCPKHO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PEJNJJEALPJ EIFONLCJOPG)
	{
		return ((::PEJNJJEALPJ(*)(::FlatBuffers::ByteBuffer*, ::PEJNJJEALPJ))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_GDLBLOCPKHO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PEJNJJEALPJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PEJNJJEALPJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EJJGCGAPHNP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EJJGCGAPHNP&, ::System::Int32&))((::PBYTE)hIl2Cpp + PEJNJJEALPJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
