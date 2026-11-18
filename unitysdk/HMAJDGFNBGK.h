#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMAJDGFNBGK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7DF100)
#define HMAJDGFNBGK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HMAJDGFNBGK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HMAJDGFNBGK_OABOOPFEPNB_1_OFFSET UNITYSDK_OFFSET(0x193452B0)
#define HMAJDGFNBGK_OABOOPFEPNB_OFFSET UNITYSDK_OFFSET(0x19345240)
#define HMAJDGFNBGK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7DF0F0)
#define HMAJDGFNBGK___INIT_OFFSET UNITYSDK_OFFSET(0x7DF0D0)

inline static constexpr unsigned int HMAJDGFNBGK_TypeDefinitionIndex = 16777;

struct alignas(8) HMAJDGFNBGK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJDGFNBGK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMAJDGFNBGK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::HMAJDGFNBGK OABOOPFEPNB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMAJDGFNBGK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMAJDGFNBGK_OABOOPFEPNB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::HMAJDGFNBGK OABOOPFEPNB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HMAJDGFNBGK EIFONLCJOPG)
	{
		return ((::HMAJDGFNBGK(*)(::FlatBuffers::ByteBuffer*, ::HMAJDGFNBGK))((::PBYTE)hIl2Cpp + HMAJDGFNBGK_OABOOPFEPNB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJDGFNBGK_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAJDGFNBGK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HMAJDGFNBGK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HMAJDGFNBGK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HMAJDGFNBGK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
