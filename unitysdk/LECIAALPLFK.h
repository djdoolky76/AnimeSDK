#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LCBENNFJPAN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LECIAALPLFK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LECIAALPLFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x759060)
#define LECIAALPLFK_FOCFIBOIALF_1_OFFSET UNITYSDK_OFFSET(0x1530F5D0)
#define LECIAALPLFK_FOCFIBOIALF_OFFSET UNITYSDK_OFFSET(0x1530F570)
#define LECIAALPLFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LECIAALPLFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LECIAALPLFK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x759050)
#define LECIAALPLFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7590A0)
#define LECIAALPLFK___INIT_OFFSET UNITYSDK_OFFSET(0x759030)

inline static constexpr unsigned int LECIAALPLFK_TypeDefinitionIndex = 9745;

struct alignas(8) LECIAALPLFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIAALPLFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LECIAALPLFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIAALPLFK_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LCBENNFJPAN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCBENNFJPAN&, ::System::Int32&))((::PBYTE)hIl2Cpp + LECIAALPLFK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LECIAALPLFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LECIAALPLFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LECIAALPLFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LECIAALPLFK FOCFIBOIALF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LECIAALPLFK EIFONLCJOPG)
	{
		return ((::LECIAALPLFK(*)(::FlatBuffers::ByteBuffer*, ::LECIAALPLFK))((::PBYTE)hIl2Cpp + LECIAALPLFK_FOCFIBOIALF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LCBENNFJPAN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LCBENNFJPAN&))((::PBYTE)hIl2Cpp + LECIAALPLFK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LECIAALPLFK FOCFIBOIALF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LECIAALPLFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LECIAALPLFK_FOCFIBOIALF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECIAALPLFK_PPOMNIFACOL_OFFSET))(this);
	}
};
