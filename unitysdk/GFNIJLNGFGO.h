#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFNIJLNGFGO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DE5C0)
#define GFNIJLNGFGO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GFNIJLNGFGO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GFNIJLNGFGO_OAAFLLDFGIB_1_OFFSET UNITYSDK_OFFSET(0x1932E4F0)
#define GFNIJLNGFGO_OAAFLLDFGIB_OFFSET UNITYSDK_OFFSET(0x1932E480)
#define GFNIJLNGFGO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DE600)
#define GFNIJLNGFGO___INIT_OFFSET UNITYSDK_OFFSET(0x7DE5A0)

inline static constexpr unsigned int GFNIJLNGFGO_TypeDefinitionIndex = 16265;

struct alignas(8) GFNIJLNGFGO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNIJLNGFGO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFNIJLNGFGO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GFNIJLNGFGO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFNIJLNGFGO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFNIJLNGFGO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNIJLNGFGO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFNIJLNGFGO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GFNIJLNGFGO OAAFLLDFGIB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GFNIJLNGFGO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GFNIJLNGFGO_OAAFLLDFGIB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::GFNIJLNGFGO OAAFLLDFGIB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GFNIJLNGFGO EIFONLCJOPG)
	{
		return ((::GFNIJLNGFGO(*)(::FlatBuffers::ByteBuffer*, ::GFNIJLNGFGO))((::PBYTE)hIl2Cpp + GFNIJLNGFGO_OAAFLLDFGIB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
