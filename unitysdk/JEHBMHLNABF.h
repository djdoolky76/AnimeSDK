#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHLKLICMBCH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEHBMHLNABF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define JEHBMHLNABF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BFE0)
#define JEHBMHLNABF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JEHBMHLNABF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JEHBMHLNABF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81BFD0)
#define JEHBMHLNABF_NNDBLPKPLKJ_1_OFFSET UNITYSDK_OFFSET(0x1BAF5B70)
#define JEHBMHLNABF_NNDBLPKPLKJ_OFFSET UNITYSDK_OFFSET(0x1BAF5B00)
#define JEHBMHLNABF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BFC0)
#define JEHBMHLNABF___INIT_OFFSET UNITYSDK_OFFSET(0x81BFA0)

inline static constexpr unsigned int JEHBMHLNABF_TypeDefinitionIndex = 15948;

struct alignas(8) JEHBMHLNABF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBMHLNABF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEHBMHLNABF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHLKLICMBCH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHLKLICMBCH&))((::PBYTE)hIl2Cpp + JEHBMHLNABF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::JEHBMHLNABF NNDBLPKPLKJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEHBMHLNABF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEHBMHLNABF_NNDBLPKPLKJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBMHLNABF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JEHBMHLNABF NNDBLPKPLKJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JEHBMHLNABF EIFONLCJOPG)
	{
		return ((::JEHBMHLNABF(*)(::FlatBuffers::ByteBuffer*, ::JEHBMHLNABF))((::PBYTE)hIl2Cpp + JEHBMHLNABF_NNDBLPKPLKJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBMHLNABF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHLKLICMBCH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHLKLICMBCH&, ::System::Int32&))((::PBYTE)hIl2Cpp + JEHBMHLNABF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::JEHBMHLNABF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JEHBMHLNABF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JEHBMHLNABF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
