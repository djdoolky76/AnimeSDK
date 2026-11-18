#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PFDCOILIGIO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOPPBBLGEIA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DOPPBBLGEIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FBCD0)
#define DOPPBBLGEIA_DENGABHGLMH_1_OFFSET UNITYSDK_OFFSET(0x1A597230)
#define DOPPBBLGEIA_DENGABHGLMH_OFFSET UNITYSDK_OFFSET(0x1A5971C0)
#define DOPPBBLGEIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DOPPBBLGEIA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DOPPBBLGEIA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FBCC0)
#define DOPPBBLGEIA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FBD10)
#define DOPPBBLGEIA___INIT_OFFSET UNITYSDK_OFFSET(0x7FBCA0)

inline static constexpr unsigned int DOPPBBLGEIA_TypeDefinitionIndex = 14615;

struct alignas(8) DOPPBBLGEIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOPPBBLGEIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PFDCOILIGIO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFDCOILIGIO&))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PFDCOILIGIO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFDCOILIGIO&, ::System::Int32&))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::DOPPBBLGEIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOPPBBLGEIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DOPPBBLGEIA DENGABHGLMH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DOPPBBLGEIA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_DENGABHGLMH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DOPPBBLGEIA DENGABHGLMH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DOPPBBLGEIA EIFONLCJOPG)
	{
		return ((::DOPPBBLGEIA(*)(::FlatBuffers::ByteBuffer*, ::DOPPBBLGEIA))((::PBYTE)hIl2Cpp + DOPPBBLGEIA_DENGABHGLMH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
