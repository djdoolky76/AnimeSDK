#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PFMMNLGNNEF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMDDELBODKB_AGEGMMHGKLI_1_OFFSET UNITYSDK_OFFSET(0x1B50BEC0)
#define KMDDELBODKB_AGEGMMHGKLI_OFFSET UNITYSDK_OFFSET(0x1B50BE20)
#define KMDDELBODKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KMDDELBODKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F070)
#define KMDDELBODKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KMDDELBODKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KMDDELBODKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80F050)
#define KMDDELBODKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F060)
#define KMDDELBODKB___INIT_OFFSET UNITYSDK_OFFSET(0x80F030)

inline static constexpr unsigned int KMDDELBODKB_TypeDefinitionIndex = 13738;

struct alignas(8) KMDDELBODKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDDELBODKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDDELBODKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PFMMNLGNNEF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFMMNLGNNEF&, ::System::Int32&))((::PBYTE)hIl2Cpp + KMDDELBODKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KMDDELBODKB AGEGMMHGKLI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KMDDELBODKB EIFONLCJOPG)
	{
		return ((::KMDDELBODKB(*)(::FlatBuffers::ByteBuffer*, ::KMDDELBODKB))((::PBYTE)hIl2Cpp + KMDDELBODKB_AGEGMMHGKLI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::KMDDELBODKB AGEGMMHGKLI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMDDELBODKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDDELBODKB_AGEGMMHGKLI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDDELBODKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KMDDELBODKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KMDDELBODKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KMDDELBODKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PFMMNLGNNEF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PFMMNLGNNEF&))((::PBYTE)hIl2Cpp + KMDDELBODKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDDELBODKB_GHKKNCCLPAN_OFFSET))(this);
	}
};
