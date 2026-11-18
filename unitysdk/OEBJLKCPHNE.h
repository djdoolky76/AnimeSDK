#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEBJLKCPHNE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A66F0)
#define OEBJLKCPHNE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OEBJLKCPHNE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OEBJLKCPHNE_MKHHENGDNAD_1_OFFSET UNITYSDK_OFFSET(0x17364D60)
#define OEBJLKCPHNE_MKHHENGDNAD_OFFSET UNITYSDK_OFFSET(0x17364C60)
#define OEBJLKCPHNE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A6730)
#define OEBJLKCPHNE___INIT_OFFSET UNITYSDK_OFFSET(0x7A66D0)

inline static constexpr unsigned int OEBJLKCPHNE_TypeDefinitionIndex = 17746;

struct alignas(8) OEBJLKCPHNE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBJLKCPHNE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEBJLKCPHNE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::OEBJLKCPHNE MKHHENGDNAD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OEBJLKCPHNE EIFONLCJOPG)
	{
		return ((::OEBJLKCPHNE(*)(::FlatBuffers::ByteBuffer*, ::OEBJLKCPHNE))((::PBYTE)hIl2Cpp + OEBJLKCPHNE_MKHHENGDNAD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OEBJLKCPHNE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEBJLKCPHNE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEBJLKCPHNE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBJLKCPHNE_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBJLKCPHNE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::OEBJLKCPHNE MKHHENGDNAD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OEBJLKCPHNE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OEBJLKCPHNE_MKHHENGDNAD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
