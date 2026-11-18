#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAFLKMHEJBE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x812830)
#define JAFLKMHEJBE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JAFLKMHEJBE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JAFLKMHEJBE_KMDNHLDKANC_1_OFFSET UNITYSDK_OFFSET(0x1B7D5BC0)
#define JAFLKMHEJBE_KMDNHLDKANC_OFFSET UNITYSDK_OFFSET(0x1B7D5B60)
#define JAFLKMHEJBE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x812870)
#define JAFLKMHEJBE___INIT_OFFSET UNITYSDK_OFFSET(0x812810)

inline static constexpr unsigned int JAFLKMHEJBE_TypeDefinitionIndex = 13993;

struct alignas(8) JAFLKMHEJBE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLKMHEJBE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAFLKMHEJBE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::JAFLKMHEJBE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAFLKMHEJBE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAFLKMHEJBE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLKMHEJBE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFLKMHEJBE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JAFLKMHEJBE KMDNHLDKANC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JAFLKMHEJBE EIFONLCJOPG)
	{
		return ((::JAFLKMHEJBE(*)(::FlatBuffers::ByteBuffer*, ::JAFLKMHEJBE))((::PBYTE)hIl2Cpp + JAFLKMHEJBE_KMDNHLDKANC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::JAFLKMHEJBE KMDNHLDKANC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JAFLKMHEJBE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAFLKMHEJBE_KMDNHLDKANC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
