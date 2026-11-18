#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPFGHAIONN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x9374E0)
#define PIPFGHAIONN_FFNKELOOBBO_1_OFFSET UNITYSDK_OFFSET(0x1EDC0B90)
#define PIPFGHAIONN_FFNKELOOBBO_OFFSET UNITYSDK_OFFSET(0x1EDC0B20)
#define PIPFGHAIONN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PIPFGHAIONN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PIPFGHAIONN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x937520)
#define PIPFGHAIONN___INIT_OFFSET UNITYSDK_OFFSET(0x9374C0)

inline static constexpr unsigned int PIPFGHAIONN_TypeDefinitionIndex = 17769;

struct alignas(8) PIPFGHAIONN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFGHAIONN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIPFGHAIONN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PIPFGHAIONN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIPFGHAIONN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIPFGHAIONN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PIPFGHAIONN FFNKELOOBBO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PIPFGHAIONN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PIPFGHAIONN_FFNKELOOBBO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFGHAIONN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPFGHAIONN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PIPFGHAIONN FFNKELOOBBO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PIPFGHAIONN EIFONLCJOPG)
	{
		return ((::PIPFGHAIONN(*)(::FlatBuffers::ByteBuffer*, ::PIPFGHAIONN))((::PBYTE)hIl2Cpp + PIPFGHAIONN_FFNKELOOBBO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
