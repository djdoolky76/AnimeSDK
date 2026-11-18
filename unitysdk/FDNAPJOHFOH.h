#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BOLDFBAAEKG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDNAPJOHFOH_AKIFIAPJEOP_1_OFFSET UNITYSDK_OFFSET(0x17458970)
#define FDNAPJOHFOH_AKIFIAPJEOP_OFFSET UNITYSDK_OFFSET(0x17458770)
#define FDNAPJOHFOH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FDNAPJOHFOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7820)
#define FDNAPJOHFOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FDNAPJOHFOH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FDNAPJOHFOH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A7810)
#define FDNAPJOHFOH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A7860)
#define FDNAPJOHFOH___INIT_OFFSET UNITYSDK_OFFSET(0x7A77F0)

inline static constexpr unsigned int FDNAPJOHFOH_TypeDefinitionIndex = 15272;

struct alignas(8) FDNAPJOHFOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDNAPJOHFOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BOLDFBAAEKG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOLDFBAAEKG&))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FDNAPJOHFOH AKIFIAPJEOP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FDNAPJOHFOH EIFONLCJOPG)
	{
		return ((::FDNAPJOHFOH(*)(::FlatBuffers::ByteBuffer*, ::FDNAPJOHFOH))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_AKIFIAPJEOP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BOLDFBAAEKG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BOLDFBAAEKG&, ::System::Int32&))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FDNAPJOHFOH AKIFIAPJEOP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDNAPJOHFOH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_AKIFIAPJEOP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FDNAPJOHFOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FDNAPJOHFOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNAPJOHFOH_PPOMNIFACOL_OFFSET))(this);
	}
};
