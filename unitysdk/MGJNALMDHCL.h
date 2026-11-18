#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGJNALMDHCL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A5A70)
#define MGJNALMDHCL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MGJNALMDHCL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MGJNALMDHCL_KMBKNFHAEJD_1_OFFSET UNITYSDK_OFFSET(0x17344E30)
#define MGJNALMDHCL_KMBKNFHAEJD_OFFSET UNITYSDK_OFFSET(0x17344D90)
#define MGJNALMDHCL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A5AB0)
#define MGJNALMDHCL___INIT_OFFSET UNITYSDK_OFFSET(0x7A5A50)

inline static constexpr unsigned int MGJNALMDHCL_TypeDefinitionIndex = 16001;

struct alignas(8) MGJNALMDHCL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNALMDHCL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJNALMDHCL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNALMDHCL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MGJNALMDHCL KMBKNFHAEJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MGJNALMDHCL EIFONLCJOPG)
	{
		return ((::MGJNALMDHCL(*)(::FlatBuffers::ByteBuffer*, ::MGJNALMDHCL))((::PBYTE)hIl2Cpp + MGJNALMDHCL_KMBKNFHAEJD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::MGJNALMDHCL KMBKNFHAEJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGJNALMDHCL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJNALMDHCL_KMBKNFHAEJD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::MGJNALMDHCL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MGJNALMDHCL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGJNALMDHCL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJNALMDHCL_PPOMNIFACOL_OFFSET))(this);
	}
};
