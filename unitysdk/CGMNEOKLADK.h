#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MKLOOABDHFA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGMNEOKLADK_ABACFDGAHHD_1_OFFSET UNITYSDK_OFFSET(0x19ACC450)
#define CGMNEOKLADK_ABACFDGAHHD_OFFSET UNITYSDK_OFFSET(0x19ACC3B0)
#define CGMNEOKLADK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CGMNEOKLADK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA260)
#define CGMNEOKLADK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CGMNEOKLADK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CGMNEOKLADK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA250)
#define CGMNEOKLADK___INIT_OFFSET UNITYSDK_OFFSET(0x7EA230)

inline static constexpr unsigned int CGMNEOKLADK_TypeDefinitionIndex = 14248;

struct alignas(8) CGMNEOKLADK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNEOKLADK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGMNEOKLADK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNEOKLADK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CGMNEOKLADK ABACFDGAHHD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CGMNEOKLADK EIFONLCJOPG)
	{
		return ((::CGMNEOKLADK(*)(::FlatBuffers::ByteBuffer*, ::CGMNEOKLADK))((::PBYTE)hIl2Cpp + CGMNEOKLADK_ABACFDGAHHD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::CGMNEOKLADK ABACFDGAHHD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGMNEOKLADK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGMNEOKLADK_ABACFDGAHHD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMNEOKLADK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::CGMNEOKLADK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CGMNEOKLADK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CGMNEOKLADK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MKLOOABDHFA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MKLOOABDHFA&))((::PBYTE)hIl2Cpp + CGMNEOKLADK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
