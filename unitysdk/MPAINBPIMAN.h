#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELJFNDGECBE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPAINBPIMAN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MPAINBPIMAN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x805220)
#define MPAINBPIMAN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MPAINBPIMAN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MPAINBPIMAN_JNHKNGOLGOM_1_OFFSET UNITYSDK_OFFSET(0x1AD79860)
#define MPAINBPIMAN_JNHKNGOLGOM_OFFSET UNITYSDK_OFFSET(0x1AD797F0)
#define MPAINBPIMAN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x805210)
#define MPAINBPIMAN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x805260)
#define MPAINBPIMAN___INIT_OFFSET UNITYSDK_OFFSET(0x8051F0)

inline static constexpr unsigned int MPAINBPIMAN_TypeDefinitionIndex = 10778;

struct alignas(8) MPAINBPIMAN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAINBPIMAN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPAINBPIMAN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MPAINBPIMAN JNHKNGOLGOM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPAINBPIMAN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPAINBPIMAN_JNHKNGOLGOM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ELJFNDGECBE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELJFNDGECBE&))((::PBYTE)hIl2Cpp + MPAINBPIMAN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ELJFNDGECBE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ELJFNDGECBE&, ::System::Int32&))((::PBYTE)hIl2Cpp + MPAINBPIMAN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MPAINBPIMAN JNHKNGOLGOM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MPAINBPIMAN EIFONLCJOPG)
	{
		return ((::MPAINBPIMAN(*)(::FlatBuffers::ByteBuffer*, ::MPAINBPIMAN))((::PBYTE)hIl2Cpp + MPAINBPIMAN_JNHKNGOLGOM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MPAINBPIMAN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MPAINBPIMAN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MPAINBPIMAN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAINBPIMAN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAINBPIMAN_PPOMNIFACOL_OFFSET))(this);
	}
};
