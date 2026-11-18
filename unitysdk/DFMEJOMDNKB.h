#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DDHLKFJCNLB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFMEJOMDNKB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DFMEJOMDNKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F20C0)
#define DFMEJOMDNKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DFMEJOMDNKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DFMEJOMDNKB_GNAKACOKDNA_1_OFFSET UNITYSDK_OFFSET(0x19F389C0)
#define DFMEJOMDNKB_GNAKACOKDNA_OFFSET UNITYSDK_OFFSET(0x19F388C0)
#define DFMEJOMDNKB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F20B0)
#define DFMEJOMDNKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F2100)
#define DFMEJOMDNKB___INIT_OFFSET UNITYSDK_OFFSET(0x7F2090)

inline static constexpr unsigned int DFMEJOMDNKB_TypeDefinitionIndex = 10966;

struct alignas(8) DFMEJOMDNKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFMEJOMDNKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DDHLKFJCNLB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDHLKFJCNLB&, ::System::Int32&))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::DFMEJOMDNKB GNAKACOKDNA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DFMEJOMDNKB EIFONLCJOPG)
	{
		return ((::DFMEJOMDNKB(*)(::FlatBuffers::ByteBuffer*, ::DFMEJOMDNKB))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_GNAKACOKDNA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::DFMEJOMDNKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFMEJOMDNKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::DFMEJOMDNKB GNAKACOKDNA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DFMEJOMDNKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_GNAKACOKDNA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DDHLKFJCNLB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDHLKFJCNLB&))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMEJOMDNKB_GHKKNCCLPAN_OFFSET))(this);
	}
};
