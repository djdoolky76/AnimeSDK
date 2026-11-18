#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LBIBLCGKOMB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEICBBABPBG_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEICBBABPBG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDA90)
#define DEICBBABPBG_CAGPMBJJEBI_1_OFFSET UNITYSDK_OFFSET(0x19C018A0)
#define DEICBBABPBG_CAGPMBJJEBI_OFFSET UNITYSDK_OFFSET(0x19C01830)
#define DEICBBABPBG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEICBBABPBG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEICBBABPBG_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EDA80)
#define DEICBBABPBG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDAD0)
#define DEICBBABPBG___INIT_OFFSET UNITYSDK_OFFSET(0x7EDA60)

inline static constexpr unsigned int DEICBBABPBG_TypeDefinitionIndex = 9549;

struct alignas(8) DEICBBABPBG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICBBABPBG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEICBBABPBG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DEICBBABPBG CAGPMBJJEBI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEICBBABPBG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEICBBABPBG_CAGPMBJJEBI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LBIBLCGKOMB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBIBLCGKOMB&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEICBBABPBG_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICBBABPBG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DEICBBABPBG CAGPMBJJEBI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEICBBABPBG EIFONLCJOPG)
	{
		return ((::DEICBBABPBG(*)(::FlatBuffers::ByteBuffer*, ::DEICBBABPBG))((::PBYTE)hIl2Cpp + DEICBBABPBG_CAGPMBJJEBI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LBIBLCGKOMB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBIBLCGKOMB&))((::PBYTE)hIl2Cpp + DEICBBABPBG_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DEICBBABPBG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEICBBABPBG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEICBBABPBG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEICBBABPBG_PPOMNIFACOL_OFFSET))(this);
	}
};
