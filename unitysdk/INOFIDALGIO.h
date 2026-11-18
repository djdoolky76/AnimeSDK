#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AFIJGPIILFF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INOFIDALGIO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define INOFIDALGIO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E4030)
#define INOFIDALGIO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define INOFIDALGIO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define INOFIDALGIO_LLBLNHPANPF_1_OFFSET UNITYSDK_OFFSET(0x195442C0)
#define INOFIDALGIO_LLBLNHPANPF_OFFSET UNITYSDK_OFFSET(0x19544250)
#define INOFIDALGIO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E4010)
#define INOFIDALGIO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E4020)
#define INOFIDALGIO___INIT_OFFSET UNITYSDK_OFFSET(0x7E3FF0)

inline static constexpr unsigned int INOFIDALGIO_TypeDefinitionIndex = 15940;

struct alignas(8) INOFIDALGIO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOFIDALGIO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOFIDALGIO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AFIJGPIILFF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AFIJGPIILFF&))((::PBYTE)hIl2Cpp + INOFIDALGIO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::INOFIDALGIO LLBLNHPANPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INOFIDALGIO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOFIDALGIO_LLBLNHPANPF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AFIJGPIILFF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AFIJGPIILFF&, ::System::Int32&))((::PBYTE)hIl2Cpp + INOFIDALGIO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::INOFIDALGIO LLBLNHPANPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::INOFIDALGIO EIFONLCJOPG)
	{
		return ((::INOFIDALGIO(*)(::FlatBuffers::ByteBuffer*, ::INOFIDALGIO))((::PBYTE)hIl2Cpp + INOFIDALGIO_LLBLNHPANPF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOFIDALGIO_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOFIDALGIO_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::INOFIDALGIO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::INOFIDALGIO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + INOFIDALGIO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
