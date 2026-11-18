#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDNLNJCIAPC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPDHFPIGPJH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JPDHFPIGPJH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8C50)
#define JPDHFPIGPJH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JPDHFPIGPJH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JPDHFPIGPJH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8C40)
#define JPDHFPIGPJH_NKEAOKLKNAO_1_OFFSET UNITYSDK_OFFSET(0x1748F710)
#define JPDHFPIGPJH_NKEAOKLKNAO_OFFSET UNITYSDK_OFFSET(0x1748F670)
#define JPDHFPIGPJH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8C90)
#define JPDHFPIGPJH___INIT_OFFSET UNITYSDK_OFFSET(0x7A8C20)

inline static constexpr unsigned int JPDHFPIGPJH_TypeDefinitionIndex = 12734;

struct alignas(8) JPDHFPIGPJH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPDHFPIGPJH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JPDHFPIGPJH NKEAOKLKNAO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JPDHFPIGPJH EIFONLCJOPG)
	{
		return ((::JPDHFPIGPJH(*)(::FlatBuffers::ByteBuffer*, ::JPDHFPIGPJH))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_NKEAOKLKNAO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JPDHFPIGPJH NKEAOKLKNAO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPDHFPIGPJH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_NKEAOKLKNAO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CDNLNJCIAPC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDNLNJCIAPC&, ::System::Int32&))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JPDHFPIGPJH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JPDHFPIGPJH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDNLNJCIAPC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDNLNJCIAPC&))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDHFPIGPJH_GHKKNCCLPAN_OFFSET))(this);
	}
};
