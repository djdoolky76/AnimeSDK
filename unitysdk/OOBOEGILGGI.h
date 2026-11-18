#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOBOEGILGGI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937150)
#define OOBOEGILGGI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OOBOEGILGGI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OOBOEGILGGI_KNGPABKJMGL_1_OFFSET UNITYSDK_OFFSET(0x1EDB9180)
#define OOBOEGILGGI_KNGPABKJMGL_OFFSET UNITYSDK_OFFSET(0x1EDB90C0)
#define OOBOEGILGGI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x937190)
#define OOBOEGILGGI___INIT_OFFSET UNITYSDK_OFFSET(0x937130)

inline static constexpr unsigned int OOBOEGILGGI_TypeDefinitionIndex = 13882;

struct alignas(8) OOBOEGILGGI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBOEGILGGI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOBOEGILGGI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::OOBOEGILGGI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOBOEGILGGI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOBOEGILGGI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OOBOEGILGGI KNGPABKJMGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OOBOEGILGGI EIFONLCJOPG)
	{
		return ((::OOBOEGILGGI(*)(::FlatBuffers::ByteBuffer*, ::OOBOEGILGGI))((::PBYTE)hIl2Cpp + OOBOEGILGGI_KNGPABKJMGL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBOEGILGGI_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBOEGILGGI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OOBOEGILGGI KNGPABKJMGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OOBOEGILGGI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OOBOEGILGGI_KNGPABKJMGL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
