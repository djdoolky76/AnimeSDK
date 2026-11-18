#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGEAJENDKCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBKGHGCBHKA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBKGHGCBHKA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FDFA0)
#define LBKGHGCBHKA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBKGHGCBHKA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBKGHGCBHKA_ONOCGHIBMCL_1_OFFSET UNITYSDK_OFFSET(0x1A5FFB40)
#define LBKGHGCBHKA_ONOCGHIBMCL_OFFSET UNITYSDK_OFFSET(0x1A5FFAD0)
#define LBKGHGCBHKA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FDFE0)
#define LBKGHGCBHKA___INIT_OFFSET UNITYSDK_OFFSET(0x7FDF80)

inline static constexpr unsigned int LBKGHGCBHKA_TypeDefinitionIndex = 14497;

struct alignas(8) LBKGHGCBHKA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBKGHGCBHKA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LBKGHGCBHKA ONOCGHIBMCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBKGHGCBHKA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_ONOCGHIBMCL_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LBKGHGCBHKA ONOCGHIBMCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBKGHGCBHKA EIFONLCJOPG)
	{
		return ((::LBKGHGCBHKA(*)(::FlatBuffers::ByteBuffer*, ::LBKGHGCBHKA))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_ONOCGHIBMCL_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LBKGHGCBHKA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBKGHGCBHKA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGEAJENDKCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGEAJENDKCB&))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKGHGCBHKA_PPOMNIFACOL_OFFSET))(this);
	}
};
