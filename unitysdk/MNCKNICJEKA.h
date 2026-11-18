#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FALCBDAIGNC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNCKNICJEKA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MNCKNICJEKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5DE0)
#define MNCKNICJEKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MNCKNICJEKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MNCKNICJEKA_KKPGJADIKDJ_1_OFFSET UNITYSDK_OFFSET(0x1734B9D0)
#define MNCKNICJEKA_KKPGJADIKDJ_OFFSET UNITYSDK_OFFSET(0x1734B960)
#define MNCKNICJEKA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A5DD0)
#define MNCKNICJEKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5DC0)
#define MNCKNICJEKA___INIT_OFFSET UNITYSDK_OFFSET(0x7A5DA0)

inline static constexpr unsigned int MNCKNICJEKA_TypeDefinitionIndex = 16929;

struct alignas(8) MNCKNICJEKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCKNICJEKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNCKNICJEKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MNCKNICJEKA KKPGJADIKDJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNCKNICJEKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNCKNICJEKA_KKPGJADIKDJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCKNICJEKA_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCKNICJEKA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MNCKNICJEKA KKPGJADIKDJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MNCKNICJEKA EIFONLCJOPG)
	{
		return ((::MNCKNICJEKA(*)(::FlatBuffers::ByteBuffer*, ::MNCKNICJEKA))((::PBYTE)hIl2Cpp + MNCKNICJEKA_KKPGJADIKDJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FALCBDAIGNC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FALCBDAIGNC&, ::System::Int32&))((::PBYTE)hIl2Cpp + MNCKNICJEKA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FALCBDAIGNC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FALCBDAIGNC&))((::PBYTE)hIl2Cpp + MNCKNICJEKA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::MNCKNICJEKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MNCKNICJEKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNCKNICJEKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
