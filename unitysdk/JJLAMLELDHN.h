#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJLAMLELDHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812BC0)
#define JJLAMLELDHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JJLAMLELDHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JJLAMLELDHN_KLGGCBIELLF_1_OFFSET UNITYSDK_OFFSET(0x1B7DC720)
#define JJLAMLELDHN_KLGGCBIELLF_OFFSET UNITYSDK_OFFSET(0x1B7DC6B0)
#define JJLAMLELDHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812BB0)
#define JJLAMLELDHN___INIT_OFFSET UNITYSDK_OFFSET(0x812B90)

inline static constexpr unsigned int JJLAMLELDHN_TypeDefinitionIndex = 13254;

struct alignas(8) JJLAMLELDHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLAMLELDHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJLAMLELDHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::JJLAMLELDHN KLGGCBIELLF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJLAMLELDHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJLAMLELDHN_KLGGCBIELLF_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLAMLELDHN_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JJLAMLELDHN KLGGCBIELLF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JJLAMLELDHN EIFONLCJOPG)
	{
		return ((::JJLAMLELDHN(*)(::FlatBuffers::ByteBuffer*, ::JJLAMLELDHN))((::PBYTE)hIl2Cpp + JJLAMLELDHN_KLGGCBIELLF_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLAMLELDHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JJLAMLELDHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JJLAMLELDHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJLAMLELDHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
