#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CDHCJGOFEHB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKAIDPAEPBP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GKAIDPAEPBP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7796C0)
#define GKAIDPAEPBP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GKAIDPAEPBP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GKAIDPAEPBP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7796A0)
#define GKAIDPAEPBP_OOEEEJHHKBG_1_OFFSET UNITYSDK_OFFSET(0x160E5840)
#define GKAIDPAEPBP_OOEEEJHHKBG_OFFSET UNITYSDK_OFFSET(0x160E55A0)
#define GKAIDPAEPBP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7796B0)
#define GKAIDPAEPBP___INIT_OFFSET UNITYSDK_OFFSET(0x779680)

inline static constexpr unsigned int GKAIDPAEPBP_TypeDefinitionIndex = 10476;

struct alignas(8) GKAIDPAEPBP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKAIDPAEPBP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GKAIDPAEPBP OOEEEJHHKBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GKAIDPAEPBP EIFONLCJOPG)
	{
		return ((::GKAIDPAEPBP(*)(::FlatBuffers::ByteBuffer*, ::GKAIDPAEPBP))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_OOEEEJHHKBG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CDHCJGOFEHB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDHCJGOFEHB&, ::System::Int32&))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GKAIDPAEPBP OOEEEJHHKBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKAIDPAEPBP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_OOEEEJHHKBG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GKAIDPAEPBP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GKAIDPAEPBP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CDHCJGOFEHB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CDHCJGOFEHB&))((::PBYTE)hIl2Cpp + GKAIDPAEPBP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
