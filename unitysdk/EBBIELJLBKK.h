#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBBIELJLBKK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EDE90)
#define EBBIELJLBKK_CLDLBGHHCFP_1_OFFSET UNITYSDK_OFFSET(0x19C0A770)
#define EBBIELJLBKK_CLDLBGHHCFP_OFFSET UNITYSDK_OFFSET(0x19C0A6D0)
#define EBBIELJLBKK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBBIELJLBKK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBBIELJLBKK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EDED0)
#define EBBIELJLBKK___INIT_OFFSET UNITYSDK_OFFSET(0x7EDE70)

inline static constexpr unsigned int EBBIELJLBKK_TypeDefinitionIndex = 14275;

struct alignas(8) EBBIELJLBKK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBIELJLBKK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBBIELJLBKK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EBBIELJLBKK CLDLBGHHCFP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBBIELJLBKK EIFONLCJOPG)
	{
		return ((::EBBIELJLBKK(*)(::FlatBuffers::ByteBuffer*, ::EBBIELJLBKK))((::PBYTE)hIl2Cpp + EBBIELJLBKK_CLDLBGHHCFP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EBBIELJLBKK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBBIELJLBKK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBBIELJLBKK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EBBIELJLBKK CLDLBGHHCFP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBBIELJLBKK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBBIELJLBKK_CLDLBGHHCFP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBIELJLBKK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBBIELJLBKK_GHKKNCCLPAN_OFFSET))(this);
	}
};
