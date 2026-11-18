#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEGJAFIAHBJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHDPJKOFKBI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KHDPJKOFKBI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80B1D0)
#define KHDPJKOFKBI_EBKILKGPCIL_1_OFFSET UNITYSDK_OFFSET(0x1B1470B0)
#define KHDPJKOFKBI_EBKILKGPCIL_OFFSET UNITYSDK_OFFSET(0x1B147010)
#define KHDPJKOFKBI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KHDPJKOFKBI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KHDPJKOFKBI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80B220)
#define KHDPJKOFKBI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80B210)
#define KHDPJKOFKBI___INIT_OFFSET UNITYSDK_OFFSET(0x80B1B0)

inline static constexpr unsigned int KHDPJKOFKBI_TypeDefinitionIndex = 17724;

struct alignas(8) KHDPJKOFKBI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHDPJKOFKBI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KHDPJKOFKBI EBKILKGPCIL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KHDPJKOFKBI EIFONLCJOPG)
	{
		return ((::KHDPJKOFKBI(*)(::FlatBuffers::ByteBuffer*, ::KHDPJKOFKBI))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_EBKILKGPCIL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::KHDPJKOFKBI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHDPJKOFKBI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KHDPJKOFKBI EBKILKGPCIL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KHDPJKOFKBI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_EBKILKGPCIL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AEGJAFIAHBJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEGJAFIAHBJ&))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AEGJAFIAHBJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEGJAFIAHBJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDPJKOFKBI_GHKKNCCLPAN_OFFSET))(this);
	}
};
