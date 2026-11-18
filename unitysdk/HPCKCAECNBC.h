#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOGPHILJNLI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPCKCAECNBC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HPCKCAECNBC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F460)
#define HPCKCAECNBC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HPCKCAECNBC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HPCKCAECNBC_ICLDKFCBJJF_1_OFFSET UNITYSDK_OFFSET(0x1B619100)
#define HPCKCAECNBC_ICLDKFCBJJF_OFFSET UNITYSDK_OFFSET(0x1B619090)
#define HPCKCAECNBC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80F440)
#define HPCKCAECNBC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F450)
#define HPCKCAECNBC___INIT_OFFSET UNITYSDK_OFFSET(0x80F420)

inline static constexpr unsigned int HPCKCAECNBC_TypeDefinitionIndex = 12925;

struct alignas(8) HPCKCAECNBC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCAECNBC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCKCAECNBC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HPCKCAECNBC ICLDKFCBJJF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPCKCAECNBC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCKCAECNBC_ICLDKFCBJJF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KOGPHILJNLI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOGPHILJNLI&, ::System::Int32&))((::PBYTE)hIl2Cpp + HPCKCAECNBC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOGPHILJNLI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOGPHILJNLI&))((::PBYTE)hIl2Cpp + HPCKCAECNBC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCAECNBC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::HPCKCAECNBC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HPCKCAECNBC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HPCKCAECNBC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCKCAECNBC_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HPCKCAECNBC ICLDKFCBJJF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HPCKCAECNBC EIFONLCJOPG)
	{
		return ((::HPCKCAECNBC(*)(::FlatBuffers::ByteBuffer*, ::HPCKCAECNBC))((::PBYTE)hIl2Cpp + HPCKCAECNBC_ICLDKFCBJJF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
