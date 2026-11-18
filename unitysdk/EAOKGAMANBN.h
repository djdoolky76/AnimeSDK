#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DIEMMMHPCFP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EAOKGAMANBN_ACICOEBPOLG_1_OFFSET UNITYSDK_OFFSET(0x1778C8D0)
#define EAOKGAMANBN_ACICOEBPOLG_OFFSET UNITYSDK_OFFSET(0x1778C860)
#define EAOKGAMANBN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EAOKGAMANBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AE1D0)
#define EAOKGAMANBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EAOKGAMANBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EAOKGAMANBN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AE1C0)
#define EAOKGAMANBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AE1B0)
#define EAOKGAMANBN___INIT_OFFSET UNITYSDK_OFFSET(0x7AE190)

inline static constexpr unsigned int EAOKGAMANBN_TypeDefinitionIndex = 14100;

struct alignas(8) EAOKGAMANBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOKGAMANBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAOKGAMANBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOKGAMANBN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EAOKGAMANBN ACICOEBPOLG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAOKGAMANBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAOKGAMANBN_ACICOEBPOLG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DIEMMMHPCFP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIEMMMHPCFP&, ::System::Int32&))((::PBYTE)hIl2Cpp + EAOKGAMANBN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DIEMMMHPCFP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DIEMMMHPCFP&))((::PBYTE)hIl2Cpp + EAOKGAMANBN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EAOKGAMANBN ACICOEBPOLG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EAOKGAMANBN EIFONLCJOPG)
	{
		return ((::EAOKGAMANBN(*)(::FlatBuffers::ByteBuffer*, ::EAOKGAMANBN))((::PBYTE)hIl2Cpp + EAOKGAMANBN_ACICOEBPOLG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EAOKGAMANBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EAOKGAMANBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EAOKGAMANBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOKGAMANBN_GHKKNCCLPAN_OFFSET))(this);
	}
};
