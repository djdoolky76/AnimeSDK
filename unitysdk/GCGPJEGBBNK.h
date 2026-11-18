#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LDBEOMOLOJD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GCGPJEGBBNK_ABJJKPENGHG_1_OFFSET UNITYSDK_OFFSET(0x193278E0)
#define GCGPJEGBBNK_ABJJKPENGHG_OFFSET UNITYSDK_OFFSET(0x19327740)
#define GCGPJEGBBNK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GCGPJEGBBNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE2B0)
#define GCGPJEGBBNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GCGPJEGBBNK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GCGPJEGBBNK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE2A0)
#define GCGPJEGBBNK___INIT_OFFSET UNITYSDK_OFFSET(0x7DE280)

inline static constexpr unsigned int GCGPJEGBBNK_TypeDefinitionIndex = 17598;

struct alignas(8) GCGPJEGBBNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCGPJEGBBNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GCGPJEGBBNK ABJJKPENGHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GCGPJEGBBNK EIFONLCJOPG)
	{
		return ((::GCGPJEGBBNK(*)(::FlatBuffers::ByteBuffer*, ::GCGPJEGBBNK))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_ABJJKPENGHG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GCGPJEGBBNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCGPJEGBBNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LDBEOMOLOJD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LDBEOMOLOJD&))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GCGPJEGBBNK ABJJKPENGHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GCGPJEGBBNK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GCGPJEGBBNK_ABJJKPENGHG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
