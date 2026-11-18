#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCEPKELGACD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAFKHEMOPBK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PAFKHEMOPBK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF490)
#define PAFKHEMOPBK_ECIMLJAGJPP_1_OFFSET UNITYSDK_OFFSET(0x1D0D7520)
#define PAFKHEMOPBK_ECIMLJAGJPP_OFFSET UNITYSDK_OFFSET(0x1D0D7220)
#define PAFKHEMOPBK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PAFKHEMOPBK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PAFKHEMOPBK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF480)
#define PAFKHEMOPBK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF470)
#define PAFKHEMOPBK___INIT_OFFSET UNITYSDK_OFFSET(0x8AF450)

inline static constexpr unsigned int PAFKHEMOPBK_TypeDefinitionIndex = 15510;

struct alignas(8) PAFKHEMOPBK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAFKHEMOPBK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PAFKHEMOPBK ECIMLJAGJPP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PAFKHEMOPBK EIFONLCJOPG)
	{
		return ((::PAFKHEMOPBK(*)(::FlatBuffers::ByteBuffer*, ::PAFKHEMOPBK))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_ECIMLJAGJPP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCEPKELGACD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCEPKELGACD&, ::System::Int32&))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PAFKHEMOPBK ECIMLJAGJPP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAFKHEMOPBK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_ECIMLJAGJPP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCEPKELGACD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCEPKELGACD&))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::PAFKHEMOPBK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PAFKHEMOPBK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PAFKHEMOPBK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
