#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCOHABLGJPE_BHAMPGJJEHN_1_OFFSET UNITYSDK_OFFSET(0x17A789A0)
#define BCOHABLGJPE_BHAMPGJJEHN_OFFSET UNITYSDK_OFFSET(0x17A78900)
#define BCOHABLGJPE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1840)
#define BCOHABLGJPE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BCOHABLGJPE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BCOHABLGJPE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1880)
#define BCOHABLGJPE___INIT_OFFSET UNITYSDK_OFFSET(0x7B1820)

inline static constexpr unsigned int BCOHABLGJPE_TypeDefinitionIndex = 9595;

struct alignas(8) BCOHABLGJPE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHABLGJPE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCOHABLGJPE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHABLGJPE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::BCOHABLGJPE BHAMPGJJEHN(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BCOHABLGJPE EIFONLCJOPG)
	{
		return ((::BCOHABLGJPE(*)(::FlatBuffers::ByteBuffer*, ::BCOHABLGJPE))((::PBYTE)hIl2Cpp + BCOHABLGJPE_BHAMPGJJEHN_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BCOHABLGJPE BHAMPGJJEHN_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCOHABLGJPE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCOHABLGJPE_BHAMPGJJEHN_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BCOHABLGJPE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BCOHABLGJPE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BCOHABLGJPE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHABLGJPE_PPOMNIFACOL_OFFSET))(this);
	}
};
