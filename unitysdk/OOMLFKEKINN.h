#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOMLFKEKINN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x820BC0)
#define OOMLFKEKINN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOMLFKEKINN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OOMLFKEKINN_KHNIBHICAJI_1_OFFSET UNITYSDK_OFFSET(0x1C1A5980)
#define OOMLFKEKINN_KHNIBHICAJI_OFFSET UNITYSDK_OFFSET(0x1C1A5920)
#define OOMLFKEKINN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x820C00)
#define OOMLFKEKINN___INIT_OFFSET UNITYSDK_OFFSET(0x820BA0)

inline static constexpr unsigned int OOMLFKEKINN_TypeDefinitionIndex = 17265;

struct alignas(8) OOMLFKEKINN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMLFKEKINN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOMLFKEKINN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OOMLFKEKINN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOMLFKEKINN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOMLFKEKINN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMLFKEKINN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OOMLFKEKINN KHNIBHICAJI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OOMLFKEKINN EIFONLCJOPG)
	{
		return ((::OOMLFKEKINN(*)(::FlatBuffers::ByteBuffer*, ::OOMLFKEKINN))((::PBYTE)hIl2Cpp + OOMLFKEKINN_KHNIBHICAJI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMLFKEKINN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OOMLFKEKINN KHNIBHICAJI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOMLFKEKINN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOMLFKEKINN_KHNIBHICAJI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
