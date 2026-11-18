#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/GMPJBHAPOPD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBPHJHLCEOI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBPHJHLCEOI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5BD0)
#define EBPHJHLCEOI_CNLBCOAJHCN_1_OFFSET UNITYSDK_OFFSET(0x1A196520)
#define EBPHJHLCEOI_CNLBCOAJHCN_OFFSET UNITYSDK_OFFSET(0x1A1964B0)
#define EBPHJHLCEOI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBPHJHLCEOI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBPHJHLCEOI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5C10)
#define EBPHJHLCEOI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5C20)
#define EBPHJHLCEOI___INIT_OFFSET UNITYSDK_OFFSET(0x7F5BB0)

inline static constexpr unsigned int EBPHJHLCEOI_TypeDefinitionIndex = 12194;

struct alignas(8) EBPHJHLCEOI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBPHJHLCEOI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::EBPHJHLCEOI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBPHJHLCEOI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EBPHJHLCEOI CNLBCOAJHCN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBPHJHLCEOI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_CNLBCOAJHCN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EBPHJHLCEOI CNLBCOAJHCN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBPHJHLCEOI EIFONLCJOPG)
	{
		return ((::EBPHJHLCEOI(*)(::FlatBuffers::ByteBuffer*, ::EBPHJHLCEOI))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_CNLBCOAJHCN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::GMPJBHAPOPD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMPJBHAPOPD&))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::GMPJBHAPOPD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GMPJBHAPOPD&, ::System::Int32&))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPHJHLCEOI_PPOMNIFACOL_OFFSET))(this);
	}
};
