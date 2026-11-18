#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IKKMDLNEIKO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POEHKJOBHLN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POEHKJOBHLN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x963750)
#define POEHKJOBHLN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POEHKJOBHLN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POEHKJOBHLN_HDBPPJPCDAK_1_OFFSET UNITYSDK_OFFSET(0x1F294800)
#define POEHKJOBHLN_HDBPPJPCDAK_OFFSET UNITYSDK_OFFSET(0x1F2947A0)
#define POEHKJOBHLN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x963790)
#define POEHKJOBHLN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9637A0)
#define POEHKJOBHLN___INIT_OFFSET UNITYSDK_OFFSET(0x963730)

inline static constexpr unsigned int POEHKJOBHLN_TypeDefinitionIndex = 17266;

struct alignas(8) POEHKJOBHLN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEHKJOBHLN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEHKJOBHLN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::POEHKJOBHLN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POEHKJOBHLN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEHKJOBHLN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POEHKJOBHLN_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IKKMDLNEIKO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKKMDLNEIKO&, ::System::Int32&))((::PBYTE)hIl2Cpp + POEHKJOBHLN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POEHKJOBHLN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IKKMDLNEIKO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IKKMDLNEIKO&))((::PBYTE)hIl2Cpp + POEHKJOBHLN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::POEHKJOBHLN HDBPPJPCDAK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POEHKJOBHLN EIFONLCJOPG)
	{
		return ((::POEHKJOBHLN(*)(::FlatBuffers::ByteBuffer*, ::POEHKJOBHLN))((::PBYTE)hIl2Cpp + POEHKJOBHLN_HDBPPJPCDAK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::POEHKJOBHLN HDBPPJPCDAK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POEHKJOBHLN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POEHKJOBHLN_HDBPPJPCDAK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
