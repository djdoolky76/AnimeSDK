#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LNJCBANNCDL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGDIPHADMDN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LGDIPHADMDN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E5FE0)
#define LGDIPHADMDN_FMEEGOBMHKA_1_OFFSET UNITYSDK_OFFSET(0x1958DEE0)
#define LGDIPHADMDN_FMEEGOBMHKA_OFFSET UNITYSDK_OFFSET(0x1958DD40)
#define LGDIPHADMDN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LGDIPHADMDN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LGDIPHADMDN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6030)
#define LGDIPHADMDN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E6020)
#define LGDIPHADMDN___INIT_OFFSET UNITYSDK_OFFSET(0x7E5FC0)

inline static constexpr unsigned int LGDIPHADMDN_TypeDefinitionIndex = 12287;

struct alignas(8) LGDIPHADMDN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDIPHADMDN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGDIPHADMDN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LGDIPHADMDN FMEEGOBMHKA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LGDIPHADMDN EIFONLCJOPG)
	{
		return ((::LGDIPHADMDN(*)(::FlatBuffers::ByteBuffer*, ::LGDIPHADMDN))((::PBYTE)hIl2Cpp + LGDIPHADMDN_FMEEGOBMHKA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LGDIPHADMDN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGDIPHADMDN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGDIPHADMDN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LNJCBANNCDL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNJCBANNCDL&))((::PBYTE)hIl2Cpp + LGDIPHADMDN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDIPHADMDN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LGDIPHADMDN FMEEGOBMHKA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LGDIPHADMDN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LGDIPHADMDN_FMEEGOBMHKA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDIPHADMDN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LNJCBANNCDL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LNJCBANNCDL&, ::System::Int32&))((::PBYTE)hIl2Cpp + LGDIPHADMDN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
