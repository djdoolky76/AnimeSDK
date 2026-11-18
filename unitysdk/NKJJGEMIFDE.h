#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LILFKENKFOO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKJJGEMIFDE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NKJJGEMIFDE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81E2F0)
#define NKJJGEMIFDE_GANOFJENDBE_1_OFFSET UNITYSDK_OFFSET(0x1BF70A20)
#define NKJJGEMIFDE_GANOFJENDBE_OFFSET UNITYSDK_OFFSET(0x1BF709B0)
#define NKJJGEMIFDE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKJJGEMIFDE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NKJJGEMIFDE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81E2E0)
#define NKJJGEMIFDE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81E330)
#define NKJJGEMIFDE___INIT_OFFSET UNITYSDK_OFFSET(0x81E2C0)

inline static constexpr unsigned int NKJJGEMIFDE_TypeDefinitionIndex = 10697;

struct alignas(8) NKJJGEMIFDE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKJJGEMIFDE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::NKJJGEMIFDE GANOFJENDBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKJJGEMIFDE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_GANOFJENDBE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LILFKENKFOO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LILFKENKFOO&, ::System::Int32&))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::NKJJGEMIFDE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKJJGEMIFDE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LILFKENKFOO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LILFKENKFOO&))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NKJJGEMIFDE GANOFJENDBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NKJJGEMIFDE EIFONLCJOPG)
	{
		return ((::NKJJGEMIFDE(*)(::FlatBuffers::ByteBuffer*, ::NKJJGEMIFDE))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_GANOFJENDBE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJJGEMIFDE_PPOMNIFACOL_OFFSET))(this);
	}
};
