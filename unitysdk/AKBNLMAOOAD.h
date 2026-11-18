#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FPGPENGCNKF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKBNLMAOOAD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AKBNLMAOOAD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EC940)
#define AKBNLMAOOAD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKBNLMAOOAD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKBNLMAOOAD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EC980)
#define AKBNLMAOOAD_NDBCLGFJANL_1_OFFSET UNITYSDK_OFFSET(0x19BD8E80)
#define AKBNLMAOOAD_NDBCLGFJANL_OFFSET UNITYSDK_OFFSET(0x19BD8C60)
#define AKBNLMAOOAD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EC990)
#define AKBNLMAOOAD___INIT_OFFSET UNITYSDK_OFFSET(0x7EC920)

inline static constexpr unsigned int AKBNLMAOOAD_TypeDefinitionIndex = 16734;

struct alignas(8) AKBNLMAOOAD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKBNLMAOOAD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FPGPENGCNKF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPGPENGCNKF&))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AKBNLMAOOAD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKBNLMAOOAD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AKBNLMAOOAD NDBCLGFJANL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKBNLMAOOAD EIFONLCJOPG)
	{
		return ((::AKBNLMAOOAD(*)(::FlatBuffers::ByteBuffer*, ::AKBNLMAOOAD))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_NDBCLGFJANL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FPGPENGCNKF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FPGPENGCNKF&, ::System::Int32&))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AKBNLMAOOAD NDBCLGFJANL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKBNLMAOOAD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKBNLMAOOAD_NDBCLGFJANL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
