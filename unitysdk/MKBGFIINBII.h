#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKBGFIINBII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D9E40)
#define MKBGFIINBII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MKBGFIINBII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MKBGFIINBII_IIIMIBCGDFD_1_OFFSET UNITYSDK_OFFSET(0x1910BC30)
#define MKBGFIINBII_IIIMIBCGDFD_OFFSET UNITYSDK_OFFSET(0x1910BBC0)
#define MKBGFIINBII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D9E80)
#define MKBGFIINBII___INIT_OFFSET UNITYSDK_OFFSET(0x7D9E20)

inline static constexpr unsigned int MKBGFIINBII_TypeDefinitionIndex = 10274;

struct alignas(8) MKBGFIINBII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGFIINBII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKBGFIINBII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MKBGFIINBII IIIMIBCGDFD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKBGFIINBII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKBGFIINBII_IIIMIBCGDFD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MKBGFIINBII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MKBGFIINBII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MKBGFIINBII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGFIINBII_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::MKBGFIINBII IIIMIBCGDFD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MKBGFIINBII EIFONLCJOPG)
	{
		return ((::MKBGFIINBII(*)(::FlatBuffers::ByteBuffer*, ::MKBGFIINBII))((::PBYTE)hIl2Cpp + MKBGFIINBII_IIIMIBCGDFD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBGFIINBII_GHKKNCCLPAN_OFFSET))(this);
	}
};
