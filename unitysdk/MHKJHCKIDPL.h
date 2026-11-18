#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHKJHCKIDPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81F070)
#define MHKJHCKIDPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHKJHCKIDPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MHKJHCKIDPL_LOKKFLBNKJG_1_OFFSET UNITYSDK_OFFSET(0x1C0896E0)
#define MHKJHCKIDPL_LOKKFLBNKJG_OFFSET UNITYSDK_OFFSET(0x1C089670)
#define MHKJHCKIDPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81F060)
#define MHKJHCKIDPL___INIT_OFFSET UNITYSDK_OFFSET(0x81F040)

inline static constexpr unsigned int MHKJHCKIDPL_TypeDefinitionIndex = 12204;

struct alignas(8) MHKJHCKIDPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJHCKIDPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHKJHCKIDPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJHCKIDPL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKJHCKIDPL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::MHKJHCKIDPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHKJHCKIDPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHKJHCKIDPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::MHKJHCKIDPL LOKKFLBNKJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHKJHCKIDPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHKJHCKIDPL_LOKKFLBNKJG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::MHKJHCKIDPL LOKKFLBNKJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MHKJHCKIDPL EIFONLCJOPG)
	{
		return ((::MHKJHCKIDPL(*)(::FlatBuffers::ByteBuffer*, ::MHKJHCKIDPL))((::PBYTE)hIl2Cpp + MHKJHCKIDPL_LOKKFLBNKJG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
