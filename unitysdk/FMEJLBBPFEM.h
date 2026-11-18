#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DLJKIDLCJAK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMEJLBBPFEM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FMEJLBBPFEM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D2F0)
#define FMEJLBBPFEM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FMEJLBBPFEM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FMEJLBBPFEM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D330)
#define FMEJLBBPFEM_MKPDCJGOCEC_1_OFFSET UNITYSDK_OFFSET(0x1B4C7DA0)
#define FMEJLBBPFEM_MKPDCJGOCEC_OFFSET UNITYSDK_OFFSET(0x1B4C7C60)
#define FMEJLBBPFEM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D2E0)
#define FMEJLBBPFEM___INIT_OFFSET UNITYSDK_OFFSET(0x80D2C0)

inline static constexpr unsigned int FMEJLBBPFEM_TypeDefinitionIndex = 9599;

struct alignas(8) FMEJLBBPFEM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMEJLBBPFEM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FMEJLBBPFEM MKPDCJGOCEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FMEJLBBPFEM EIFONLCJOPG)
	{
		return ((::FMEJLBBPFEM(*)(::FlatBuffers::ByteBuffer*, ::FMEJLBBPFEM))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_MKPDCJGOCEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DLJKIDLCJAK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLJKIDLCJAK&))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FMEJLBBPFEM MKPDCJGOCEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMEJLBBPFEM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_MKPDCJGOCEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FMEJLBBPFEM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FMEJLBBPFEM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DLJKIDLCJAK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DLJKIDLCJAK&, ::System::Int32&))((::PBYTE)hIl2Cpp + FMEJLBBPFEM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
