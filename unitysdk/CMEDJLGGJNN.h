#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMEDJLGGJNN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5440)
#define CMEDJLGGJNN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CMEDJLGGJNN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CMEDJLGGJNN_PGAPINFMACE_1_OFFSET UNITYSDK_OFFSET(0x1A181AB0)
#define CMEDJLGGJNN_PGAPINFMACE_OFFSET UNITYSDK_OFFSET(0x1A181A40)
#define CMEDJLGGJNN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5480)
#define CMEDJLGGJNN___INIT_OFFSET UNITYSDK_OFFSET(0x7F5420)

inline static constexpr unsigned int CMEDJLGGJNN_TypeDefinitionIndex = 11638;

struct alignas(8) CMEDJLGGJNN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDJLGGJNN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMEDJLGGJNN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CMEDJLGGJNN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMEDJLGGJNN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMEDJLGGJNN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMEDJLGGJNN PGAPINFMACE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CMEDJLGGJNN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CMEDJLGGJNN_PGAPINFMACE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CMEDJLGGJNN PGAPINFMACE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CMEDJLGGJNN EIFONLCJOPG)
	{
		return ((::CMEDJLGGJNN(*)(::FlatBuffers::ByteBuffer*, ::CMEDJLGGJNN))((::PBYTE)hIl2Cpp + CMEDJLGGJNN_PGAPINFMACE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDJLGGJNN_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEDJLGGJNN_PPOMNIFACOL_OFFSET))(this);
	}
};
