#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCDEGLHGNKM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DA7B0)
#define OCDEGLHGNKM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OCDEGLHGNKM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OCDEGLHGNKM_LGKNKNDCFNG_1_OFFSET UNITYSDK_OFFSET(0x19128F50)
#define OCDEGLHGNKM_LGKNKNDCFNG_OFFSET UNITYSDK_OFFSET(0x19128EE0)
#define OCDEGLHGNKM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DA7A0)
#define OCDEGLHGNKM___INIT_OFFSET UNITYSDK_OFFSET(0x7DA780)

inline static constexpr unsigned int OCDEGLHGNKM_TypeDefinitionIndex = 13930;

struct alignas(8) OCDEGLHGNKM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDEGLHGNKM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDEGLHGNKM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDEGLHGNKM_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCDEGLHGNKM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OCDEGLHGNKM LGKNKNDCFNG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCDEGLHGNKM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDEGLHGNKM_LGKNKNDCFNG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::OCDEGLHGNKM LGKNKNDCFNG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OCDEGLHGNKM EIFONLCJOPG)
	{
		return ((::OCDEGLHGNKM(*)(::FlatBuffers::ByteBuffer*, ::OCDEGLHGNKM))((::PBYTE)hIl2Cpp + OCDEGLHGNKM_LGKNKNDCFNG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OCDEGLHGNKM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OCDEGLHGNKM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OCDEGLHGNKM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
