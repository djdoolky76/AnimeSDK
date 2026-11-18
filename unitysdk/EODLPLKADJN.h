#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EODLPLKADJN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D1280)
#define EODLPLKADJN_FIOFGJMKPPH_1_OFFSET UNITYSDK_OFFSET(0x187B1F10)
#define EODLPLKADJN_FIOFGJMKPPH_OFFSET UNITYSDK_OFFSET(0x187B1EA0)
#define EODLPLKADJN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EODLPLKADJN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EODLPLKADJN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D12C0)
#define EODLPLKADJN___INIT_OFFSET UNITYSDK_OFFSET(0x7D1260)

inline static constexpr unsigned int EODLPLKADJN_TypeDefinitionIndex = 9570;

struct alignas(8) EODLPLKADJN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EODLPLKADJN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EODLPLKADJN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EODLPLKADJN FIOFGJMKPPH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EODLPLKADJN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EODLPLKADJN_FIOFGJMKPPH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::EODLPLKADJN FIOFGJMKPPH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EODLPLKADJN EIFONLCJOPG)
	{
		return ((::EODLPLKADJN(*)(::FlatBuffers::ByteBuffer*, ::EODLPLKADJN))((::PBYTE)hIl2Cpp + EODLPLKADJN_FIOFGJMKPPH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EODLPLKADJN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::EODLPLKADJN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EODLPLKADJN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EODLPLKADJN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EODLPLKADJN_PPOMNIFACOL_OFFSET))(this);
	}
};
