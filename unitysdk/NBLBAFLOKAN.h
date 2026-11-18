#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCJABMDONNH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBLBAFLOKAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NBLBAFLOKAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820330)
#define NBLBAFLOKAN_BOADGIGBFFF_1_OFFSET UNITYSDK_OFFSET(0x1C188730)
#define NBLBAFLOKAN_BOADGIGBFFF_OFFSET UNITYSDK_OFFSET(0x1C1886C0)
#define NBLBAFLOKAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NBLBAFLOKAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NBLBAFLOKAN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x820380)
#define NBLBAFLOKAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820370)
#define NBLBAFLOKAN___INIT_OFFSET UNITYSDK_OFFSET(0x820310)

inline static constexpr unsigned int NBLBAFLOKAN_TypeDefinitionIndex = 15850;

struct alignas(8) NBLBAFLOKAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBLBAFLOKAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NBLBAFLOKAN BOADGIGBFFF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBLBAFLOKAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_BOADGIGBFFF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NBLBAFLOKAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NBLBAFLOKAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCJABMDONNH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCJABMDONNH&))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCJABMDONNH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCJABMDONNH&, ::System::Int32&))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NBLBAFLOKAN BOADGIGBFFF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NBLBAFLOKAN EIFONLCJOPG)
	{
		return ((::NBLBAFLOKAN(*)(::FlatBuffers::ByteBuffer*, ::NBLBAFLOKAN))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_BOADGIGBFFF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBLBAFLOKAN_GHKKNCCLPAN_OFFSET))(this);
	}
};
