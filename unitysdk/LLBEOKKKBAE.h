#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MPJBDHIKDEB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LLBEOKKKBAE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LLBEOKKKBAE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x804B40)
#define LLBEOKKKBAE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LLBEOKKKBAE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LLBEOKKKBAE_KIMDEKFFAJL_1_OFFSET UNITYSDK_OFFSET(0x1AD60D50)
#define LLBEOKKKBAE_KIMDEKFFAJL_OFFSET UNITYSDK_OFFSET(0x1AD60BF0)
#define LLBEOKKKBAE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x804B80)
#define LLBEOKKKBAE___INIT_OFFSET UNITYSDK_OFFSET(0x804B20)

inline static constexpr unsigned int LLBEOKKKBAE_TypeDefinitionIndex = 11204;

struct alignas(8) LLBEOKKKBAE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLBEOKKKBAE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::LLBEOKKKBAE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLBEOKKKBAE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LLBEOKKKBAE KIMDEKFFAJL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LLBEOKKKBAE EIFONLCJOPG)
	{
		return ((::LLBEOKKKBAE(*)(::FlatBuffers::ByteBuffer*, ::LLBEOKKKBAE))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_KIMDEKFFAJL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MPJBDHIKDEB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MPJBDHIKDEB&))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LLBEOKKKBAE KIMDEKFFAJL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LLBEOKKKBAE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LLBEOKKKBAE_KIMDEKFFAJL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
