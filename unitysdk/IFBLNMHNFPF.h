#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HHDDMODOKLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFBLNMHNFPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IFBLNMHNFPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8510)
#define IFBLNMHNFPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IFBLNMHNFPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IFBLNMHNFPF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A84F0)
#define IFBLNMHNFPF_OLJHLJEBGDJ_1_OFFSET UNITYSDK_OFFSET(0x1747C9A0)
#define IFBLNMHNFPF_OLJHLJEBGDJ_OFFSET UNITYSDK_OFFSET(0x1747C930)
#define IFBLNMHNFPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8500)
#define IFBLNMHNFPF___INIT_OFFSET UNITYSDK_OFFSET(0x7A84D0)

inline static constexpr unsigned int IFBLNMHNFPF_TypeDefinitionIndex = 15215;

struct alignas(8) IFBLNMHNFPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFBLNMHNFPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HHDDMODOKLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHDDMODOKLM&))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HHDDMODOKLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HHDDMODOKLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IFBLNMHNFPF OLJHLJEBGDJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFBLNMHNFPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_OLJHLJEBGDJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IFBLNMHNFPF OLJHLJEBGDJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IFBLNMHNFPF EIFONLCJOPG)
	{
		return ((::IFBLNMHNFPF(*)(::FlatBuffers::ByteBuffer*, ::IFBLNMHNFPF))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_OLJHLJEBGDJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::IFBLNMHNFPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IFBLNMHNFPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IFBLNMHNFPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
