#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FJEEBFBNIEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAFLKEBKBEJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OAFLKEBKBEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A920)
#define OAFLKEBKBEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OAFLKEBKBEJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OAFLKEBKBEJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A970)
#define OAFLKEBKBEJ_MKOLMDPLNCC_1_OFFSET UNITYSDK_OFFSET(0x1BAB0F70)
#define OAFLKEBKBEJ_MKOLMDPLNCC_OFFSET UNITYSDK_OFFSET(0x1BAB0F10)
#define OAFLKEBKBEJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A960)
#define OAFLKEBKBEJ___INIT_OFFSET UNITYSDK_OFFSET(0x81A900)

inline static constexpr unsigned int OAFLKEBKBEJ_TypeDefinitionIndex = 17103;

struct alignas(8) OAFLKEBKBEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OAFLKEBKBEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAFLKEBKBEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FJEEBFBNIEH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJEEBFBNIEH&, ::System::Int32&))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::OAFLKEBKBEJ MKOLMDPLNCC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OAFLKEBKBEJ EIFONLCJOPG)
	{
		return ((::OAFLKEBKBEJ(*)(::FlatBuffers::ByteBuffer*, ::OAFLKEBKBEJ))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_MKOLMDPLNCC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FJEEBFBNIEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FJEEBFBNIEH&))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OAFLKEBKBEJ MKOLMDPLNCC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OAFLKEBKBEJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OAFLKEBKBEJ_MKOLMDPLNCC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
