#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ACGBAOAFLCC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCKNBHNGCFC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DCKNBHNGCFC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807570)
#define DCKNBHNGCFC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DCKNBHNGCFC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DCKNBHNGCFC_KIJNMIFKHKK_1_OFFSET UNITYSDK_OFFSET(0x1ADC2F80)
#define DCKNBHNGCFC_KIJNMIFKHKK_OFFSET UNITYSDK_OFFSET(0x1ADC2E40)
#define DCKNBHNGCFC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807560)
#define DCKNBHNGCFC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8075B0)
#define DCKNBHNGCFC___INIT_OFFSET UNITYSDK_OFFSET(0x807540)

inline static constexpr unsigned int DCKNBHNGCFC_TypeDefinitionIndex = 17344;

struct alignas(8) DCKNBHNGCFC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCKNBHNGCFC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DCKNBHNGCFC KIJNMIFKHKK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DCKNBHNGCFC EIFONLCJOPG)
	{
		return ((::DCKNBHNGCFC(*)(::FlatBuffers::ByteBuffer*, ::DCKNBHNGCFC))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_KIJNMIFKHKK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ACGBAOAFLCC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ACGBAOAFLCC&))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DCKNBHNGCFC KIJNMIFKHKK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCKNBHNGCFC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_KIJNMIFKHKK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ACGBAOAFLCC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ACGBAOAFLCC&, ::System::Int32&))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DCKNBHNGCFC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DCKNBHNGCFC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKNBHNGCFC_PPOMNIFACOL_OFFSET))(this);
	}
};
