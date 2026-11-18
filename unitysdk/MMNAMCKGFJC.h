#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AHGEDMFPMCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMNAMCKGFJC_AABNPAGCOAI_1_OFFSET UNITYSDK_OFFSET(0x1D0BA3F0)
#define MMNAMCKGFJC_AABNPAGCOAI_OFFSET UNITYSDK_OFFSET(0x1D0BA380)
#define MMNAMCKGFJC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MMNAMCKGFJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEBF0)
#define MMNAMCKGFJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MMNAMCKGFJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MMNAMCKGFJC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AEBE0)
#define MMNAMCKGFJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AEBD0)
#define MMNAMCKGFJC___INIT_OFFSET UNITYSDK_OFFSET(0x8AEBB0)

inline static constexpr unsigned int MMNAMCKGFJC_TypeDefinitionIndex = 15630;

struct alignas(8) MMNAMCKGFJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMNAMCKGFJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MMNAMCKGFJC AABNPAGCOAI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMNAMCKGFJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_AABNPAGCOAI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AHGEDMFPMCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHGEDMFPMCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AHGEDMFPMCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AHGEDMFPMCB&))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MMNAMCKGFJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MMNAMCKGFJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MMNAMCKGFJC AABNPAGCOAI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MMNAMCKGFJC EIFONLCJOPG)
	{
		return ((::MMNAMCKGFJC(*)(::FlatBuffers::ByteBuffer*, ::MMNAMCKGFJC))((::PBYTE)hIl2Cpp + MMNAMCKGFJC_AABNPAGCOAI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
