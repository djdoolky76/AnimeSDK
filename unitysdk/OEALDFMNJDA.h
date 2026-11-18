#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BGMMEOHOOEA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEALDFMNJDA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OEALDFMNJDA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80C330)
#define OEALDFMNJDA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEALDFMNJDA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEALDFMNJDA_IDBFLKAINHG_1_OFFSET UNITYSDK_OFFSET(0x1B338B70)
#define OEALDFMNJDA_IDBFLKAINHG_OFFSET UNITYSDK_OFFSET(0x1B338B00)
#define OEALDFMNJDA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80C370)
#define OEALDFMNJDA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80C320)
#define OEALDFMNJDA___INIT_OFFSET UNITYSDK_OFFSET(0x80C300)

inline static constexpr unsigned int OEALDFMNJDA_TypeDefinitionIndex = 11346;

struct alignas(8) OEALDFMNJDA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEALDFMNJDA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEALDFMNJDA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEALDFMNJDA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OEALDFMNJDA IDBFLKAINHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEALDFMNJDA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEALDFMNJDA_IDBFLKAINHG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::OEALDFMNJDA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEALDFMNJDA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEALDFMNJDA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OEALDFMNJDA IDBFLKAINHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEALDFMNJDA EIFONLCJOPG)
	{
		return ((::OEALDFMNJDA(*)(::FlatBuffers::ByteBuffer*, ::OEALDFMNJDA))((::PBYTE)hIl2Cpp + OEALDFMNJDA_IDBFLKAINHG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEALDFMNJDA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BGMMEOHOOEA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGMMEOHOOEA&))((::PBYTE)hIl2Cpp + OEALDFMNJDA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BGMMEOHOOEA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BGMMEOHOOEA&, ::System::Int32&))((::PBYTE)hIl2Cpp + OEALDFMNJDA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
