#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PINAKIFGOAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x937430)
#define PINAKIFGOAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PINAKIFGOAG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PINAKIFGOAG_MMBIDHJECCL_1_OFFSET UNITYSDK_OFFSET(0x1EDC0400)
#define PINAKIFGOAG_MMBIDHJECCL_OFFSET UNITYSDK_OFFSET(0x1EDC0300)
#define PINAKIFGOAG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x937470)
#define PINAKIFGOAG___INIT_OFFSET UNITYSDK_OFFSET(0x937410)

inline static constexpr unsigned int PINAKIFGOAG_TypeDefinitionIndex = 15730;

struct alignas(8) PINAKIFGOAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PINAKIFGOAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PINAKIFGOAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PINAKIFGOAG MMBIDHJECCL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PINAKIFGOAG EIFONLCJOPG)
	{
		return ((::PINAKIFGOAG(*)(::FlatBuffers::ByteBuffer*, ::PINAKIFGOAG))((::PBYTE)hIl2Cpp + PINAKIFGOAG_MMBIDHJECCL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PINAKIFGOAG_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::PINAKIFGOAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PINAKIFGOAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PINAKIFGOAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PINAKIFGOAG MMBIDHJECCL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PINAKIFGOAG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PINAKIFGOAG_MMBIDHJECCL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PINAKIFGOAG_PPOMNIFACOL_OFFSET))(this);
	}
};
