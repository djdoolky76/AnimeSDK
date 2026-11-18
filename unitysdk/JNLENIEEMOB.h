#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNLENIEEMOB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E44F0)
#define JNLENIEEMOB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JNLENIEEMOB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JNLENIEEMOB_HEKPIPLJBCD_1_OFFSET UNITYSDK_OFFSET(0x1954EDE0)
#define JNLENIEEMOB_HEKPIPLJBCD_OFFSET UNITYSDK_OFFSET(0x1954ED70)
#define JNLENIEEMOB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E44E0)
#define JNLENIEEMOB___INIT_OFFSET UNITYSDK_OFFSET(0x7E44C0)

inline static constexpr unsigned int JNLENIEEMOB_TypeDefinitionIndex = 14313;

struct alignas(8) JNLENIEEMOB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLENIEEMOB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNLENIEEMOB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JNLENIEEMOB HEKPIPLJBCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNLENIEEMOB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNLENIEEMOB_HEKPIPLJBCD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLENIEEMOB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JNLENIEEMOB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JNLENIEEMOB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNLENIEEMOB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLENIEEMOB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JNLENIEEMOB HEKPIPLJBCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JNLENIEEMOB EIFONLCJOPG)
	{
		return ((::JNLENIEEMOB(*)(::FlatBuffers::ByteBuffer*, ::JNLENIEEMOB))((::PBYTE)hIl2Cpp + JNLENIEEMOB_HEKPIPLJBCD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
