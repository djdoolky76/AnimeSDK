#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IEPOFOJGAIJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF230)
#define IEPOFOJGAIJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IEPOFOJGAIJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IEPOFOJGAIJ_ODPLACHIJHB_1_OFFSET UNITYSDK_OFFSET(0x19349E00)
#define IEPOFOJGAIJ_ODPLACHIJHB_OFFSET UNITYSDK_OFFSET(0x19349D90)
#define IEPOFOJGAIJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF270)
#define IEPOFOJGAIJ___INIT_OFFSET UNITYSDK_OFFSET(0x7DF210)

inline static constexpr unsigned int IEPOFOJGAIJ_TypeDefinitionIndex = 11848;

struct alignas(8) IEPOFOJGAIJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IEPOFOJGAIJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEPOFOJGAIJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IEPOFOJGAIJ ODPLACHIJHB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IEPOFOJGAIJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ_ODPLACHIJHB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IEPOFOJGAIJ ODPLACHIJHB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IEPOFOJGAIJ EIFONLCJOPG)
	{
		return ((::IEPOFOJGAIJ(*)(::FlatBuffers::ByteBuffer*, ::IEPOFOJGAIJ))((::PBYTE)hIl2Cpp + IEPOFOJGAIJ_ODPLACHIJHB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
