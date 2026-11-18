#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIGMNLGFKCA_BEFJBAIMIDJ_1_OFFSET UNITYSDK_OFFSET(0x1954A750)
#define JIGMNLGFKCA_BEFJBAIMIDJ_OFFSET UNITYSDK_OFFSET(0x1954A700)
#define JIGMNLGFKCA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define JIGMNLGFKCA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JIGMNLGFKCA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JIGMNLGFKCA___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int JIGMNLGFKCA_TypeDefinitionIndex = 16214;

struct alignas(8) JIGMNLGFKCA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMNLGFKCA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIGMNLGFKCA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGMNLGFKCA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::JIGMNLGFKCA BEFJBAIMIDJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIGMNLGFKCA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIGMNLGFKCA_BEFJBAIMIDJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JIGMNLGFKCA BEFJBAIMIDJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JIGMNLGFKCA EIFONLCJOPG)
	{
		return ((::JIGMNLGFKCA(*)(::FlatBuffers::ByteBuffer*, ::JIGMNLGFKCA))((::PBYTE)hIl2Cpp + JIGMNLGFKCA_BEFJBAIMIDJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JIGMNLGFKCA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JIGMNLGFKCA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JIGMNLGFKCA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
