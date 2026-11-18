#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AKEKDOOPDFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGMMODHHBFA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGMMODHHBFA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7C35B0)
#define LGMMODHHBFA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGMMODHHBFA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGMMODHHBFA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7C35F0)
#define LGMMODHHBFA_MAPIHCIIIGH_1_OFFSET UNITYSDK_OFFSET(0x17FB1380)
#define LGMMODHHBFA_MAPIHCIIIGH_OFFSET UNITYSDK_OFFSET(0x17FB1080)
#define LGMMODHHBFA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7C3600)
#define LGMMODHHBFA___INIT_OFFSET UNITYSDK_OFFSET(0x7C3590)

inline static constexpr unsigned int LGMMODHHBFA_TypeDefinitionIndex = 14139;

struct alignas(8) LGMMODHHBFA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMMODHHBFA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGMMODHHBFA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGMMODHHBFA MAPIHCIIIGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGMMODHHBFA EIFONLCJOPG)
	{
		return ((::LGMMODHHBFA(*)(::FlatBuffers::ByteBuffer*, ::LGMMODHHBFA))((::PBYTE)hIl2Cpp + LGMMODHHBFA_MAPIHCIIIGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LGMMODHHBFA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGMMODHHBFA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGMMODHHBFA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AKEKDOOPDFI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKEKDOOPDFI&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGMMODHHBFA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AKEKDOOPDFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AKEKDOOPDFI&))((::PBYTE)hIl2Cpp + LGMMODHHBFA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMMODHHBFA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LGMMODHHBFA MAPIHCIIIGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGMMODHHBFA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGMMODHHBFA_MAPIHCIIIGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMMODHHBFA_PPOMNIFACOL_OFFSET))(this);
	}
};
