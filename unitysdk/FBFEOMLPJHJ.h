#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBFEOMLPJHJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B2BC0)
#define FBFEOMLPJHJ_FCGIFMPHBGC_1_OFFSET UNITYSDK_OFFSET(0x17AADBD0)
#define FBFEOMLPJHJ_FCGIFMPHBGC_OFFSET UNITYSDK_OFFSET(0x17AADB60)
#define FBFEOMLPJHJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBFEOMLPJHJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBFEOMLPJHJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B2C00)
#define FBFEOMLPJHJ___INIT_OFFSET UNITYSDK_OFFSET(0x7B2BA0)

inline static constexpr unsigned int FBFEOMLPJHJ_TypeDefinitionIndex = 13712;

struct alignas(8) FBFEOMLPJHJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::FBFEOMLPJHJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBFEOMLPJHJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBFEOMLPJHJ FCGIFMPHBGC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBFEOMLPJHJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ_FCGIFMPHBGC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FBFEOMLPJHJ FCGIFMPHBGC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBFEOMLPJHJ EIFONLCJOPG)
	{
		return ((::FBFEOMLPJHJ(*)(::FlatBuffers::ByteBuffer*, ::FBFEOMLPJHJ))((::PBYTE)hIl2Cpp + FBFEOMLPJHJ_FCGIFMPHBGC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
