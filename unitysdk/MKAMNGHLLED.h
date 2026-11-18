#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MHGECKJKDHJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKAMNGHLLED_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MKAMNGHLLED_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A110)
#define MKAMNGHLLED_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKAMNGHLLED_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKAMNGHLLED_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A150)
#define MKAMNGHLLED_OOMNIFAPGKP_1_OFFSET UNITYSDK_OFFSET(0x1BA9C040)
#define MKAMNGHLLED_OOMNIFAPGKP_OFFSET UNITYSDK_OFFSET(0x1BA9BFE0)
#define MKAMNGHLLED_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A100)
#define MKAMNGHLLED___INIT_OFFSET UNITYSDK_OFFSET(0x81A0E0)

inline static constexpr unsigned int MKAMNGHLLED_TypeDefinitionIndex = 10571;

struct alignas(8) MKAMNGHLLED
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMNGHLLED_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKAMNGHLLED___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMNGHLLED_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAMNGHLLED_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MKAMNGHLLED BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKAMNGHLLED(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKAMNGHLLED_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MHGECKJKDHJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHGECKJKDHJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + MKAMNGHLLED_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::MKAMNGHLLED OOMNIFAPGKP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKAMNGHLLED EIFONLCJOPG)
	{
		return ((::MKAMNGHLLED(*)(::FlatBuffers::ByteBuffer*, ::MKAMNGHLLED))((::PBYTE)hIl2Cpp + MKAMNGHLLED_OOMNIFAPGKP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MKAMNGHLLED OOMNIFAPGKP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKAMNGHLLED(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKAMNGHLLED_OOMNIFAPGKP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MHGECKJKDHJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MHGECKJKDHJ&))((::PBYTE)hIl2Cpp + MKAMNGHLLED_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
