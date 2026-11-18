#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPLFJIGOHNK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IACKAFJEJOC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IACKAFJEJOC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x76EFA0)
#define IACKAFJEJOC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IACKAFJEJOC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IACKAFJEJOC_JOBBEEMKDGB_1_OFFSET UNITYSDK_OFFSET(0x15A92820)
#define IACKAFJEJOC_JOBBEEMKDGB_OFFSET UNITYSDK_OFFSET(0x15A927B0)
#define IACKAFJEJOC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x76EFF0)
#define IACKAFJEJOC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x76EFE0)
#define IACKAFJEJOC___INIT_OFFSET UNITYSDK_OFFSET(0x76EF80)

inline static constexpr unsigned int IACKAFJEJOC_TypeDefinitionIndex = 15562;

struct alignas(8) IACKAFJEJOC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACKAFJEJOC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IACKAFJEJOC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IACKAFJEJOC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JPLFJIGOHNK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPLFJIGOHNK&))((::PBYTE)hIl2Cpp + IACKAFJEJOC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IACKAFJEJOC JOBBEEMKDGB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IACKAFJEJOC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IACKAFJEJOC_JOBBEEMKDGB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::IACKAFJEJOC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IACKAFJEJOC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IACKAFJEJOC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IACKAFJEJOC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IACKAFJEJOC JOBBEEMKDGB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IACKAFJEJOC EIFONLCJOPG)
	{
		return ((::IACKAFJEJOC(*)(::FlatBuffers::ByteBuffer*, ::IACKAFJEJOC))((::PBYTE)hIl2Cpp + IACKAFJEJOC_JOBBEEMKDGB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JPLFJIGOHNK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JPLFJIGOHNK&, ::System::Int32&))((::PBYTE)hIl2Cpp + IACKAFJEJOC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
