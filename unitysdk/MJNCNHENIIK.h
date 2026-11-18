#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/POABMLIJKCF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJNCNHENIIK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MJNCNHENIIK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AAF70)
#define MJNCNHENIIK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJNCNHENIIK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJNCNHENIIK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AAF60)
#define MJNCNHENIIK_MKAHHMGOBPC_1_OFFSET UNITYSDK_OFFSET(0x1CFE12A0)
#define MJNCNHENIIK_MKAHHMGOBPC_OFFSET UNITYSDK_OFFSET(0x1CFE1230)
#define MJNCNHENIIK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AAFB0)
#define MJNCNHENIIK___INIT_OFFSET UNITYSDK_OFFSET(0x8AAF40)

inline static constexpr unsigned int MJNCNHENIIK_TypeDefinitionIndex = 14963;

struct alignas(8) MJNCNHENIIK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNCNHENIIK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJNCNHENIIK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::POABMLIJKCF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POABMLIJKCF&, ::System::Int32&))((::PBYTE)hIl2Cpp + MJNCNHENIIK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::POABMLIJKCF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::POABMLIJKCF&))((::PBYTE)hIl2Cpp + MJNCNHENIIK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::MJNCNHENIIK MKAHHMGOBPC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJNCNHENIIK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJNCNHENIIK_MKAHHMGOBPC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MJNCNHENIIK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJNCNHENIIK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJNCNHENIIK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MJNCNHENIIK MKAHHMGOBPC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJNCNHENIIK EIFONLCJOPG)
	{
		return ((::MJNCNHENIIK(*)(::FlatBuffers::ByteBuffer*, ::MJNCNHENIIK))((::PBYTE)hIl2Cpp + MJNCNHENIIK_MKAHHMGOBPC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNCNHENIIK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNCNHENIIK_GHKKNCCLPAN_OFFSET))(this);
	}
};
