#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KLFJHDFPPOJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFFNBBJFFIH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFFNBBJFFIH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD8C0)
#define DFFNBBJFFIH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFFNBBJFFIH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFFNBBJFFIH_JIGJNFMBFPB_1_OFFSET UNITYSDK_OFFSET(0x1777FF00)
#define DFFNBBJFFIH_JIGJNFMBFPB_OFFSET UNITYSDK_OFFSET(0x1777FE90)
#define DFFNBBJFFIH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AD900)
#define DFFNBBJFFIH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD910)
#define DFFNBBJFFIH___INIT_OFFSET UNITYSDK_OFFSET(0x7AD8A0)

inline static constexpr unsigned int DFFNBBJFFIH_TypeDefinitionIndex = 16025;

struct alignas(8) DFFNBBJFFIH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFFNBBJFFIH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DFFNBBJFFIH JIGJNFMBFPB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFFNBBJFFIH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_JIGJNFMBFPB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::DFFNBBJFFIH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFFNBBJFFIH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KLFJHDFPPOJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLFJHDFPPOJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DFFNBBJFFIH JIGJNFMBFPB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFFNBBJFFIH EIFONLCJOPG)
	{
		return ((::DFFNBBJFFIH(*)(::FlatBuffers::ByteBuffer*, ::DFFNBBJFFIH))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_JIGJNFMBFPB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KLFJHDFPPOJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KLFJHDFPPOJ&))((::PBYTE)hIl2Cpp + DFFNBBJFFIH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
