#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NPIOOJLOKGD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDLLBPBAGLB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KDLLBPBAGLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80EC30)
#define KDLLBPBAGLB_DCMIMLLGPFC_1_OFFSET UNITYSDK_OFFSET(0x1B5009F0)
#define KDLLBPBAGLB_DCMIMLLGPFC_OFFSET UNITYSDK_OFFSET(0x1B500980)
#define KDLLBPBAGLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KDLLBPBAGLB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KDLLBPBAGLB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80EC20)
#define KDLLBPBAGLB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80EC70)
#define KDLLBPBAGLB___INIT_OFFSET UNITYSDK_OFFSET(0x80EC00)

inline static constexpr unsigned int KDLLBPBAGLB_TypeDefinitionIndex = 14003;

struct alignas(8) KDLLBPBAGLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLLBPBAGLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NPIOOJLOKGD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPIOOJLOKGD&))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NPIOOJLOKGD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPIOOJLOKGD&, ::System::Int32&))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::KDLLBPBAGLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDLLBPBAGLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KDLLBPBAGLB DCMIMLLGPFC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KDLLBPBAGLB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_DCMIMLLGPFC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::KDLLBPBAGLB DCMIMLLGPFC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KDLLBPBAGLB EIFONLCJOPG)
	{
		return ((::KDLLBPBAGLB(*)(::FlatBuffers::ByteBuffer*, ::KDLLBPBAGLB))((::PBYTE)hIl2Cpp + KDLLBPBAGLB_DCMIMLLGPFC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
