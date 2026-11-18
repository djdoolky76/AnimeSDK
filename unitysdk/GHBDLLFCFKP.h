#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHBDLLFCFKP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FCA00)
#define GHBDLLFCFKP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GHBDLLFCFKP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GHBDLLFCFKP_PGFPNHILOHG_1_OFFSET UNITYSDK_OFFSET(0x1A5BFA70)
#define GHBDLLFCFKP_PGFPNHILOHG_OFFSET UNITYSDK_OFFSET(0x1A5BF970)
#define GHBDLLFCFKP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FCA40)
#define GHBDLLFCFKP___INIT_OFFSET UNITYSDK_OFFSET(0x7FC9E0)

inline static constexpr unsigned int GHBDLLFCFKP_TypeDefinitionIndex = 11089;

struct alignas(8) GHBDLLFCFKP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDLLFCFKP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHBDLLFCFKP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GHBDLLFCFKP PGFPNHILOHG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GHBDLLFCFKP EIFONLCJOPG)
	{
		return ((::GHBDLLFCFKP(*)(::FlatBuffers::ByteBuffer*, ::GHBDLLFCFKP))((::PBYTE)hIl2Cpp + GHBDLLFCFKP_PGFPNHILOHG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::GHBDLLFCFKP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHBDLLFCFKP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHBDLLFCFKP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDLLFCFKP_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBDLLFCFKP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GHBDLLFCFKP PGFPNHILOHG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GHBDLLFCFKP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHBDLLFCFKP_PGFPNHILOHG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
