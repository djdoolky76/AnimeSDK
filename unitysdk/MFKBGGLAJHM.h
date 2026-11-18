#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFKBGGLAJHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813750)
#define MFKBGGLAJHM_FPBLGCCKJAI_1_OFFSET UNITYSDK_OFFSET(0x1B7F92A0)
#define MFKBGGLAJHM_FPBLGCCKJAI_OFFSET UNITYSDK_OFFSET(0x1B7F9200)
#define MFKBGGLAJHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFKBGGLAJHM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MFKBGGLAJHM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813790)
#define MFKBGGLAJHM___INIT_OFFSET UNITYSDK_OFFSET(0x813730)

inline static constexpr unsigned int MFKBGGLAJHM_TypeDefinitionIndex = 15328;

struct alignas(8) MFKBGGLAJHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKBGGLAJHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFKBGGLAJHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKBGGLAJHM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MFKBGGLAJHM FPBLGCCKJAI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MFKBGGLAJHM EIFONLCJOPG)
	{
		return ((::MFKBGGLAJHM(*)(::FlatBuffers::ByteBuffer*, ::MFKBGGLAJHM))((::PBYTE)hIl2Cpp + MFKBGGLAJHM_FPBLGCCKJAI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::MFKBGGLAJHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFKBGGLAJHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFKBGGLAJHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKBGGLAJHM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MFKBGGLAJHM FPBLGCCKJAI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFKBGGLAJHM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFKBGGLAJHM_FPBLGCCKJAI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
