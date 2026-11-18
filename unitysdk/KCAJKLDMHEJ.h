#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HAKMCMBCDIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCAJKLDMHEJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KCAJKLDMHEJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D6990)
#define KCAJKLDMHEJ_FFBKBFJBJMA_1_OFFSET UNITYSDK_OFFSET(0x18DE1C30)
#define KCAJKLDMHEJ_FFBKBFJBJMA_OFFSET UNITYSDK_OFFSET(0x18DE1BC0)
#define KCAJKLDMHEJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KCAJKLDMHEJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KCAJKLDMHEJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D69D0)
#define KCAJKLDMHEJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D69E0)
#define KCAJKLDMHEJ___INIT_OFFSET UNITYSDK_OFFSET(0x7D6970)

inline static constexpr unsigned int KCAJKLDMHEJ_TypeDefinitionIndex = 11401;

struct alignas(8) KCAJKLDMHEJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::KCAJKLDMHEJ FFBKBFJBJMA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCAJKLDMHEJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_FFBKBFJBJMA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::KCAJKLDMHEJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KCAJKLDMHEJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HAKMCMBCDIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAKMCMBCDIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::KCAJKLDMHEJ FFBKBFJBJMA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KCAJKLDMHEJ EIFONLCJOPG)
	{
		return ((::KCAJKLDMHEJ(*)(::FlatBuffers::ByteBuffer*, ::KCAJKLDMHEJ))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_FFBKBFJBJMA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HAKMCMBCDIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HAKMCMBCDIN&))((::PBYTE)hIl2Cpp + KCAJKLDMHEJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
