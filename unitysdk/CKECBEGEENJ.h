#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKECBEGEENJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EA3F0)
#define CKECBEGEENJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CKECBEGEENJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CKECBEGEENJ_HGCLGEKDJGA_1_OFFSET UNITYSDK_OFFSET(0x19ACF630)
#define CKECBEGEENJ_HGCLGEKDJGA_OFFSET UNITYSDK_OFFSET(0x19ACF590)
#define CKECBEGEENJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EA3E0)
#define CKECBEGEENJ___INIT_OFFSET UNITYSDK_OFFSET(0x7EA3C0)

inline static constexpr unsigned int CKECBEGEENJ_TypeDefinitionIndex = 16405;

struct alignas(8) CKECBEGEENJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECBEGEENJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKECBEGEENJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECBEGEENJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CKECBEGEENJ HGCLGEKDJGA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CKECBEGEENJ EIFONLCJOPG)
	{
		return ((::CKECBEGEENJ(*)(::FlatBuffers::ByteBuffer*, ::CKECBEGEENJ))((::PBYTE)hIl2Cpp + CKECBEGEENJ_HGCLGEKDJGA_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECBEGEENJ_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CKECBEGEENJ HGCLGEKDJGA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKECBEGEENJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKECBEGEENJ_HGCLGEKDJGA_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CKECBEGEENJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CKECBEGEENJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CKECBEGEENJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
