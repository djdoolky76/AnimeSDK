#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/INBGLNJFNMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EGKCALPKMHK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EGKCALPKMHK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FA740)
#define EGKCALPKMHK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EGKCALPKMHK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EGKCALPKMHK_ONDKJHLOOHI_1_OFFSET UNITYSDK_OFFSET(0x1A560CC0)
#define EGKCALPKMHK_ONDKJHLOOHI_OFFSET UNITYSDK_OFFSET(0x1A560C50)
#define EGKCALPKMHK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FA730)
#define EGKCALPKMHK___INIT_OFFSET UNITYSDK_OFFSET(0x7FA710)

inline static constexpr unsigned int EGKCALPKMHK_TypeDefinitionIndex = 12245;

struct alignas(8) EGKCALPKMHK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKCALPKMHK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGKCALPKMHK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKCALPKMHK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::EGKCALPKMHK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGKCALPKMHK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGKCALPKMHK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKCALPKMHK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EGKCALPKMHK ONDKJHLOOHI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EGKCALPKMHK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EGKCALPKMHK_ONDKJHLOOHI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::INBGLNJFNMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::INBGLNJFNMJ&))((::PBYTE)hIl2Cpp + EGKCALPKMHK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::EGKCALPKMHK ONDKJHLOOHI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EGKCALPKMHK EIFONLCJOPG)
	{
		return ((::EGKCALPKMHK(*)(::FlatBuffers::ByteBuffer*, ::EGKCALPKMHK))((::PBYTE)hIl2Cpp + EGKCALPKMHK_ONDKJHLOOHI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
