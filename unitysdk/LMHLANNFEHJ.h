#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PMFBPDNCFHO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMHLANNFEHJ_AACDPNGLAHE_1_OFFSET UNITYSDK_OFFSET(0x19593100)
#define LMHLANNFEHJ_AACDPNGLAHE_OFFSET UNITYSDK_OFFSET(0x19593090)
#define LMHLANNFEHJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LMHLANNFEHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6180)
#define LMHLANNFEHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LMHLANNFEHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LMHLANNFEHJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E6170)
#define LMHLANNFEHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E61C0)
#define LMHLANNFEHJ___INIT_OFFSET UNITYSDK_OFFSET(0x7E6150)

inline static constexpr unsigned int LMHLANNFEHJ_TypeDefinitionIndex = 12568;

struct alignas(8) LMHLANNFEHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMHLANNFEHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PMFBPDNCFHO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMFBPDNCFHO&, ::System::Int32&))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LMHLANNFEHJ AACDPNGLAHE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMHLANNFEHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_AACDPNGLAHE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::LMHLANNFEHJ AACDPNGLAHE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LMHLANNFEHJ EIFONLCJOPG)
	{
		return ((::LMHLANNFEHJ(*)(::FlatBuffers::ByteBuffer*, ::LMHLANNFEHJ))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_AACDPNGLAHE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PMFBPDNCFHO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PMFBPDNCFHO&))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LMHLANNFEHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LMHLANNFEHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMHLANNFEHJ_PPOMNIFACOL_OFFSET))(this);
	}
};
