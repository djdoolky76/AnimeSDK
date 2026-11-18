#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJOOHBPHJLB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AEA00)
#define MJOOHBPHJLB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MJOOHBPHJLB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MJOOHBPHJLB_OOBGILBFNAE_1_OFFSET UNITYSDK_OFFSET(0x1D0B8100)
#define MJOOHBPHJLB_OOBGILBFNAE_OFFSET UNITYSDK_OFFSET(0x1D0B8060)
#define MJOOHBPHJLB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AE9F0)
#define MJOOHBPHJLB___INIT_OFFSET UNITYSDK_OFFSET(0x8AE9D0)

inline static constexpr unsigned int MJOOHBPHJLB_TypeDefinitionIndex = 12340;

struct alignas(8) MJOOHBPHJLB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOOHBPHJLB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJOOHBPHJLB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOOHBPHJLB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOOHBPHJLB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MJOOHBPHJLB OOBGILBFNAE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MJOOHBPHJLB EIFONLCJOPG)
	{
		return ((::MJOOHBPHJLB(*)(::FlatBuffers::ByteBuffer*, ::MJOOHBPHJLB))((::PBYTE)hIl2Cpp + MJOOHBPHJLB_OOBGILBFNAE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MJOOHBPHJLB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJOOHBPHJLB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJOOHBPHJLB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MJOOHBPHJLB OOBGILBFNAE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MJOOHBPHJLB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MJOOHBPHJLB_OOBGILBFNAE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
