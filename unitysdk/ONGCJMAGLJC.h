#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONGCJMAGLJC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x803A40)
#define ONGCJMAGLJC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONGCJMAGLJC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONGCJMAGLJC_LCEFCIBJOPE_1_OFFSET UNITYSDK_OFFSET(0x1AB3A010)
#define ONGCJMAGLJC_LCEFCIBJOPE_OFFSET UNITYSDK_OFFSET(0x1AB39FB0)
#define ONGCJMAGLJC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803A80)
#define ONGCJMAGLJC___INIT_OFFSET UNITYSDK_OFFSET(0x803A20)

inline static constexpr unsigned int ONGCJMAGLJC_TypeDefinitionIndex = 17209;

struct alignas(8) ONGCJMAGLJC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCJMAGLJC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGCJMAGLJC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::ONGCJMAGLJC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGCJMAGLJC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGCJMAGLJC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONGCJMAGLJC LCEFCIBJOPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONGCJMAGLJC EIFONLCJOPG)
	{
		return ((::ONGCJMAGLJC(*)(::FlatBuffers::ByteBuffer*, ::ONGCJMAGLJC))((::PBYTE)hIl2Cpp + ONGCJMAGLJC_LCEFCIBJOPE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ONGCJMAGLJC LCEFCIBJOPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONGCJMAGLJC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONGCJMAGLJC_LCEFCIBJOPE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCJMAGLJC_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCJMAGLJC_PPOMNIFACOL_OFFSET))(this);
	}
};
