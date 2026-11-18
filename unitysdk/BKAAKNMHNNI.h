#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDCAGIAJLEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKAAKNMHNNI_AHFCJJAEHGE_1_OFFSET UNITYSDK_OFFSET(0x1775D280)
#define BKAAKNMHNNI_AHFCJJAEHGE_OFFSET UNITYSDK_OFFSET(0x1775D210)
#define BKAAKNMHNNI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BKAAKNMHNNI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACB40)
#define BKAAKNMHNNI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BKAAKNMHNNI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BKAAKNMHNNI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ACB30)
#define BKAAKNMHNNI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ACB80)
#define BKAAKNMHNNI___INIT_OFFSET UNITYSDK_OFFSET(0x7ACB10)

inline static constexpr unsigned int BKAAKNMHNNI_TypeDefinitionIndex = 15501;

struct alignas(8) BKAAKNMHNNI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKAAKNMHNNI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NDCAGIAJLEH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDCAGIAJLEH&, ::System::Int32&))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::BKAAKNMHNNI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKAAKNMHNNI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BKAAKNMHNNI AHFCJJAEHGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BKAAKNMHNNI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_AHFCJJAEHGE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BKAAKNMHNNI AHFCJJAEHGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BKAAKNMHNNI EIFONLCJOPG)
	{
		return ((::BKAAKNMHNNI(*)(::FlatBuffers::ByteBuffer*, ::BKAAKNMHNNI))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_AHFCJJAEHGE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NDCAGIAJLEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NDCAGIAJLEH&))((::PBYTE)hIl2Cpp + BKAAKNMHNNI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
