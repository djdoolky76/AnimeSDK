#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FLNOEEAJGOA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KELABCEJOKI_APCHDDODPML_1_OFFSET UNITYSDK_OFFSET(0x1B5015A0)
#define KELABCEJOKI_APCHDDODPML_OFFSET UNITYSDK_OFFSET(0x1B501530)
#define KELABCEJOKI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KELABCEJOKI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80ECD0)
#define KELABCEJOKI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KELABCEJOKI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KELABCEJOKI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80ECC0)
#define KELABCEJOKI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80ED10)
#define KELABCEJOKI___INIT_OFFSET UNITYSDK_OFFSET(0x80ECA0)

inline static constexpr unsigned int KELABCEJOKI_TypeDefinitionIndex = 15446;

struct alignas(8) KELABCEJOKI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELABCEJOKI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KELABCEJOKI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FLNOEEAJGOA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLNOEEAJGOA&))((::PBYTE)hIl2Cpp + KELABCEJOKI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::KELABCEJOKI APCHDDODPML(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KELABCEJOKI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KELABCEJOKI_APCHDDODPML_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KELABCEJOKI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KELABCEJOKI APCHDDODPML_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KELABCEJOKI EIFONLCJOPG)
	{
		return ((::KELABCEJOKI(*)(::FlatBuffers::ByteBuffer*, ::KELABCEJOKI))((::PBYTE)hIl2Cpp + KELABCEJOKI_APCHDDODPML_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FLNOEEAJGOA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FLNOEEAJGOA&, ::System::Int32&))((::PBYTE)hIl2Cpp + KELABCEJOKI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KELABCEJOKI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KELABCEJOKI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KELABCEJOKI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELABCEJOKI_PPOMNIFACOL_OFFSET))(this);
	}
};
