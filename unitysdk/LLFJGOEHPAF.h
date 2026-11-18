#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GPLOCLHJMKM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLFJGOEHPAF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LLFJGOEHPAF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81CB60)
#define LLFJGOEHPAF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLFJGOEHPAF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LLFJGOEHPAF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81CBA0)
#define LLFJGOEHPAF_OFEHEGDLCGC_1_OFFSET UNITYSDK_OFFSET(0x1BB11720)
#define LLFJGOEHPAF_OFEHEGDLCGC_OFFSET UNITYSDK_OFFSET(0x1BB115E0)
#define LLFJGOEHPAF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81CB50)
#define LLFJGOEHPAF___INIT_OFFSET UNITYSDK_OFFSET(0x81CB30)

inline static constexpr unsigned int LLFJGOEHPAF_TypeDefinitionIndex = 14259;

struct alignas(8) LLFJGOEHPAF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLFJGOEHPAF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LLFJGOEHPAF OFEHEGDLCGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LLFJGOEHPAF EIFONLCJOPG)
	{
		return ((::LLFJGOEHPAF(*)(::FlatBuffers::ByteBuffer*, ::LLFJGOEHPAF))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_OFEHEGDLCGC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GPLOCLHJMKM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GPLOCLHJMKM&))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LLFJGOEHPAF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLFJGOEHPAF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LLFJGOEHPAF OFEHEGDLCGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLFJGOEHPAF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_OFEHEGDLCGC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GPLOCLHJMKM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GPLOCLHJMKM&, ::System::Int32&))((::PBYTE)hIl2Cpp + LLFJGOEHPAF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
