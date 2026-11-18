#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGMIFGIDIMD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x779DE0)
#define HGMIFGIDIMD_FCKNPJGAKHP_1_OFFSET UNITYSDK_OFFSET(0x160F4B40)
#define HGMIFGIDIMD_FCKNPJGAKHP_OFFSET UNITYSDK_OFFSET(0x160F4AD0)
#define HGMIFGIDIMD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HGMIFGIDIMD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HGMIFGIDIMD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779E20)
#define HGMIFGIDIMD___INIT_OFFSET UNITYSDK_OFFSET(0x779DC0)

inline static constexpr unsigned int HGMIFGIDIMD_TypeDefinitionIndex = 13800;

struct alignas(8) HGMIFGIDIMD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMIFGIDIMD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGMIFGIDIMD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HGMIFGIDIMD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGMIFGIDIMD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGMIFGIDIMD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMIFGIDIMD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMIFGIDIMD_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HGMIFGIDIMD FCKNPJGAKHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HGMIFGIDIMD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGMIFGIDIMD_FCKNPJGAKHP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HGMIFGIDIMD FCKNPJGAKHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HGMIFGIDIMD EIFONLCJOPG)
	{
		return ((::HGMIFGIDIMD(*)(::FlatBuffers::ByteBuffer*, ::HGMIFGIDIMD))((::PBYTE)hIl2Cpp + HGMIFGIDIMD_FCKNPJGAKHP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
