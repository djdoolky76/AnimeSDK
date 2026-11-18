#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CCNAHGDDPFN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIMMFICOGEP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IIMMFICOGEP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF4F0)
#define IIMMFICOGEP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IIMMFICOGEP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IIMMFICOGEP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7DF4D0)
#define IIMMFICOGEP_OCEFIIPKKDA_1_OFFSET UNITYSDK_OFFSET(0x193506C0)
#define IIMMFICOGEP_OCEFIIPKKDA_OFFSET UNITYSDK_OFFSET(0x19350650)
#define IIMMFICOGEP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF4E0)
#define IIMMFICOGEP___INIT_OFFSET UNITYSDK_OFFSET(0x7DF4B0)

inline static constexpr unsigned int IIMMFICOGEP_TypeDefinitionIndex = 16556;

struct alignas(8) IIMMFICOGEP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMFICOGEP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIMMFICOGEP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CCNAHGDDPFN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCNAHGDDPFN&, ::System::Int32&))((::PBYTE)hIl2Cpp + IIMMFICOGEP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IIMMFICOGEP OCEFIIPKKDA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIMMFICOGEP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIMMFICOGEP_OCEFIIPKKDA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMFICOGEP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IIMMFICOGEP OCEFIIPKKDA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IIMMFICOGEP EIFONLCJOPG)
	{
		return ((::IIMMFICOGEP(*)(::FlatBuffers::ByteBuffer*, ::IIMMFICOGEP))((::PBYTE)hIl2Cpp + IIMMFICOGEP_OCEFIIPKKDA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IIMMFICOGEP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IIMMFICOGEP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIMMFICOGEP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CCNAHGDDPFN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CCNAHGDDPFN&))((::PBYTE)hIl2Cpp + IIMMFICOGEP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMFICOGEP_GHKKNCCLPAN_OFFSET))(this);
	}
};
