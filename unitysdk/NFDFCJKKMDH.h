#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JGLPBGDHHPG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFDFCJKKMDH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NFDFCJKKMDH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFC20)
#define NFDFCJKKMDH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NFDFCJKKMDH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NFDFCJKKMDH_JJOHNNBGHPL_1_OFFSET UNITYSDK_OFFSET(0x19DC06F0)
#define NFDFCJKKMDH_JJOHNNBGHPL_OFFSET UNITYSDK_OFFSET(0x19DC0680)
#define NFDFCJKKMDH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EFC60)
#define NFDFCJKKMDH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFC70)
#define NFDFCJKKMDH___INIT_OFFSET UNITYSDK_OFFSET(0x7EFC00)

inline static constexpr unsigned int NFDFCJKKMDH_TypeDefinitionIndex = 16803;

struct alignas(8) NFDFCJKKMDH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFDFCJKKMDH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NFDFCJKKMDH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFDFCJKKMDH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JGLPBGDHHPG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGLPBGDHHPG&))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::NFDFCJKKMDH JJOHNNBGHPL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NFDFCJKKMDH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_JJOHNNBGHPL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JGLPBGDHHPG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JGLPBGDHHPG&, ::System::Int32&))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NFDFCJKKMDH JJOHNNBGHPL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NFDFCJKKMDH EIFONLCJOPG)
	{
		return ((::NFDFCJKKMDH(*)(::FlatBuffers::ByteBuffer*, ::NFDFCJKKMDH))((::PBYTE)hIl2Cpp + NFDFCJKKMDH_JJOHNNBGHPL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
