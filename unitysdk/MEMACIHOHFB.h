#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AEIPDDFFIMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEMACIHOHFB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define MEMACIHOHFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81DD00)
#define MEMACIHOHFB_DNDPHEIENEN_1_OFFSET UNITYSDK_OFFSET(0x1BF5D5D0)
#define MEMACIHOHFB_DNDPHEIENEN_OFFSET UNITYSDK_OFFSET(0x1BF5D4D0)
#define MEMACIHOHFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MEMACIHOHFB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MEMACIHOHFB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81DCF0)
#define MEMACIHOHFB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81DCE0)
#define MEMACIHOHFB___INIT_OFFSET UNITYSDK_OFFSET(0x81DCC0)

inline static constexpr unsigned int MEMACIHOHFB_TypeDefinitionIndex = 13789;

struct alignas(8) MEMACIHOHFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMACIHOHFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEMACIHOHFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MEMACIHOHFB DNDPHEIENEN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MEMACIHOHFB EIFONLCJOPG)
	{
		return ((::MEMACIHOHFB(*)(::FlatBuffers::ByteBuffer*, ::MEMACIHOHFB))((::PBYTE)hIl2Cpp + MEMACIHOHFB_DNDPHEIENEN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMACIHOHFB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MEMACIHOHFB DNDPHEIENEN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEMACIHOHFB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEMACIHOHFB_DNDPHEIENEN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AEIPDDFFIMJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEIPDDFFIMJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + MEMACIHOHFB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::MEMACIHOHFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MEMACIHOHFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MEMACIHOHFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AEIPDDFFIMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AEIPDDFFIMJ&))((::PBYTE)hIl2Cpp + MEMACIHOHFB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMACIHOHFB_GHKKNCCLPAN_OFFSET))(this);
	}
};
