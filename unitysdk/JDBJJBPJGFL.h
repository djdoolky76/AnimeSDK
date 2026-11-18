#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKOKPBANAIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDBJJBPJGFL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JDBJJBPJGFL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5420)
#define JDBJJBPJGFL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JDBJJBPJGFL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JDBJJBPJGFL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D5460)
#define JDBJJBPJGFL_MLNFFLHMHKD_1_OFFSET UNITYSDK_OFFSET(0x18BC6B90)
#define JDBJJBPJGFL_MLNFFLHMHKD_OFFSET UNITYSDK_OFFSET(0x18BBDC30)
#define JDBJJBPJGFL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5470)
#define JDBJJBPJGFL___INIT_OFFSET UNITYSDK_OFFSET(0x7D5400)

inline static constexpr unsigned int JDBJJBPJGFL_TypeDefinitionIndex = 12429;

struct alignas(8) JDBJJBPJGFL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDBJJBPJGFL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKOKPBANAIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKOKPBANAIG&))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::JDBJJBPJGFL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDBJJBPJGFL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JDBJJBPJGFL MLNFFLHMHKD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JDBJJBPJGFL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_MLNFFLHMHKD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JDBJJBPJGFL MLNFFLHMHKD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JDBJJBPJGFL EIFONLCJOPG)
	{
		return ((::JDBJJBPJGFL(*)(::FlatBuffers::ByteBuffer*, ::JDBJJBPJGFL))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_MLNFFLHMHKD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NKOKPBANAIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKOKPBANAIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDBJJBPJGFL_GHKKNCCLPAN_OFFSET))(this);
	}
};
