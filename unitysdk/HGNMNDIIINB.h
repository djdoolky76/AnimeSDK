#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGNMNDIIINB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80A190)
#define HGNMNDIIINB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGNMNDIIINB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HGNMNDIIINB_NANMKADMCJK_1_OFFSET UNITYSDK_OFFSET(0x1B123690)
#define HGNMNDIIINB_NANMKADMCJK_OFFSET UNITYSDK_OFFSET(0x1B1235F0)
#define HGNMNDIIINB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80A180)
#define HGNMNDIIINB___INIT_OFFSET UNITYSDK_OFFSET(0x80A160)

inline static constexpr unsigned int HGNMNDIIINB_TypeDefinitionIndex = 11123;

struct alignas(8) HGNMNDIIINB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNMNDIIINB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGNMNDIIINB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNMNDIIINB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HGNMNDIIINB NANMKADMCJK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HGNMNDIIINB EIFONLCJOPG)
	{
		return ((::HGNMNDIIINB(*)(::FlatBuffers::ByteBuffer*, ::HGNMNDIIINB))((::PBYTE)hIl2Cpp + HGNMNDIIINB_NANMKADMCJK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HGNMNDIIINB NANMKADMCJK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGNMNDIIINB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGNMNDIIINB_NANMKADMCJK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNMNDIIINB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HGNMNDIIINB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGNMNDIIINB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGNMNDIIINB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
