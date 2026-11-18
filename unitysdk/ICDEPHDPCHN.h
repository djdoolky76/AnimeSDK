#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HLNIDAFBIFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICDEPHDPCHN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ICDEPHDPCHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76F140)
#define ICDEPHDPCHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ICDEPHDPCHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ICDEPHDPCHN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76F120)
#define ICDEPHDPCHN_MNMAJEGODPH_1_OFFSET UNITYSDK_OFFSET(0x15A942A0)
#define ICDEPHDPCHN_MNMAJEGODPH_OFFSET UNITYSDK_OFFSET(0x15A94200)
#define ICDEPHDPCHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76F130)
#define ICDEPHDPCHN___INIT_OFFSET UNITYSDK_OFFSET(0x76F100)

inline static constexpr unsigned int ICDEPHDPCHN_TypeDefinitionIndex = 10749;

struct alignas(8) ICDEPHDPCHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICDEPHDPCHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HLNIDAFBIFD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLNIDAFBIFD&, ::System::Int32&))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HLNIDAFBIFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HLNIDAFBIFD&))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ICDEPHDPCHN MNMAJEGODPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ICDEPHDPCHN EIFONLCJOPG)
	{
		return ((::ICDEPHDPCHN(*)(::FlatBuffers::ByteBuffer*, ::ICDEPHDPCHN))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_MNMAJEGODPH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ICDEPHDPCHN MNMAJEGODPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICDEPHDPCHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_MNMAJEGODPH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ICDEPHDPCHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ICDEPHDPCHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ICDEPHDPCHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
