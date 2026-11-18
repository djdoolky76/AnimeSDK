#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIHPKKIPEIA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A610)
#define NIHPKKIPEIA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NIHPKKIPEIA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NIHPKKIPEIA_MHNHOFGIODK_1_OFFSET UNITYSDK_OFFSET(0x1BAA5870)
#define NIHPKKIPEIA_MHNHOFGIODK_OFFSET UNITYSDK_OFFSET(0x1BAA57D0)
#define NIHPKKIPEIA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A600)
#define NIHPKKIPEIA___INIT_OFFSET UNITYSDK_OFFSET(0x81A5E0)

inline static constexpr unsigned int NIHPKKIPEIA_TypeDefinitionIndex = 10848;

struct alignas(8) NIHPKKIPEIA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHPKKIPEIA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIHPKKIPEIA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHPKKIPEIA_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHPKKIPEIA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NIHPKKIPEIA MHNHOFGIODK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NIHPKKIPEIA EIFONLCJOPG)
	{
		return ((::NIHPKKIPEIA(*)(::FlatBuffers::ByteBuffer*, ::NIHPKKIPEIA))((::PBYTE)hIl2Cpp + NIHPKKIPEIA_MHNHOFGIODK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NIHPKKIPEIA MHNHOFGIODK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIHPKKIPEIA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIHPKKIPEIA_MHNHOFGIODK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NIHPKKIPEIA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NIHPKKIPEIA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NIHPKKIPEIA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
