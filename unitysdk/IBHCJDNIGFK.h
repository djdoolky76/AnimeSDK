#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBHCJDNIGFK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FD110)
#define IBHCJDNIGFK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IBHCJDNIGFK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IBHCJDNIGFK_MIAJPGAHODK_1_OFFSET UNITYSDK_OFFSET(0x1A5D4430)
#define IBHCJDNIGFK_MIAJPGAHODK_OFFSET UNITYSDK_OFFSET(0x1A5D4390)
#define IBHCJDNIGFK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FD150)
#define IBHCJDNIGFK___INIT_OFFSET UNITYSDK_OFFSET(0x7FD0F0)

inline static constexpr unsigned int IBHCJDNIGFK_TypeDefinitionIndex = 10704;

struct alignas(8) IBHCJDNIGFK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHCJDNIGFK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBHCJDNIGFK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IBHCJDNIGFK MIAJPGAHODK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IBHCJDNIGFK EIFONLCJOPG)
	{
		return ((::IBHCJDNIGFK(*)(::FlatBuffers::ByteBuffer*, ::IBHCJDNIGFK))((::PBYTE)hIl2Cpp + IBHCJDNIGFK_MIAJPGAHODK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::IBHCJDNIGFK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBHCJDNIGFK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBHCJDNIGFK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IBHCJDNIGFK MIAJPGAHODK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IBHCJDNIGFK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IBHCJDNIGFK_MIAJPGAHODK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHCJDNIGFK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHCJDNIGFK_GHKKNCCLPAN_OFFSET))(this);
	}
};
