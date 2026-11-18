#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KJFOGJDLBEH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOAFKPDDJDJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EOAFKPDDJDJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x808020)
#define EOAFKPDDJDJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EOAFKPDDJDJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EOAFKPDDJDJ_PBFPMJJABNN_1_OFFSET UNITYSDK_OFFSET(0x1ADDABC0)
#define EOAFKPDDJDJ_PBFPMJJABNN_OFFSET UNITYSDK_OFFSET(0x1ADDAB50)
#define EOAFKPDDJDJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x808010)
#define EOAFKPDDJDJ___INIT_OFFSET UNITYSDK_OFFSET(0x807FF0)

inline static constexpr unsigned int EOAFKPDDJDJ_TypeDefinitionIndex = 16041;

struct alignas(8) EOAFKPDDJDJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EOAFKPDDJDJ PBFPMJJABNN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOAFKPDDJDJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_PBFPMJJABNN_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KJFOGJDLBEH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KJFOGJDLBEH&))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EOAFKPDDJDJ PBFPMJJABNN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EOAFKPDDJDJ EIFONLCJOPG)
	{
		return ((::EOAFKPDDJDJ(*)(::FlatBuffers::ByteBuffer*, ::EOAFKPDDJDJ))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_PBFPMJJABNN_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EOAFKPDDJDJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EOAFKPDDJDJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAFKPDDJDJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
