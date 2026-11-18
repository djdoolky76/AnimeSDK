#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFJOBJKDMBN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE0C0)
#define EFJOBJKDMBN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EFJOBJKDMBN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EFJOBJKDMBN_MADPEIMKNPG_1_OFFSET UNITYSDK_OFFSET(0x19C0FBC0)
#define EFJOBJKDMBN_MADPEIMKNPG_OFFSET UNITYSDK_OFFSET(0x19C0FB20)
#define EFJOBJKDMBN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE100)
#define EFJOBJKDMBN___INIT_OFFSET UNITYSDK_OFFSET(0x7EE0A0)

inline static constexpr unsigned int EFJOBJKDMBN_TypeDefinitionIndex = 12106;

struct alignas(8) EFJOBJKDMBN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJOBJKDMBN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFJOBJKDMBN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJOBJKDMBN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EFJOBJKDMBN MADPEIMKNPG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EFJOBJKDMBN EIFONLCJOPG)
	{
		return ((::EFJOBJKDMBN(*)(::FlatBuffers::ByteBuffer*, ::EFJOBJKDMBN))((::PBYTE)hIl2Cpp + EFJOBJKDMBN_MADPEIMKNPG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EFJOBJKDMBN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFJOBJKDMBN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFJOBJKDMBN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EFJOBJKDMBN MADPEIMKNPG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EFJOBJKDMBN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EFJOBJKDMBN_MADPEIMKNPG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJOBJKDMBN_PPOMNIFACOL_OFFSET))(this);
	}
};
