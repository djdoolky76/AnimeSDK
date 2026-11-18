#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGDOJJMIFPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAD00)
#define AGDOJJMIFPB_CLHKHMEAOBE_1_OFFSET UNITYSDK_OFFSET(0x1A56CA70)
#define AGDOJJMIFPB_CLHKHMEAOBE_OFFSET UNITYSDK_OFFSET(0x1A56CA00)
#define AGDOJJMIFPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AGDOJJMIFPB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AGDOJJMIFPB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAD40)
#define AGDOJJMIFPB___INIT_OFFSET UNITYSDK_OFFSET(0x7FACE0)

inline static constexpr unsigned int AGDOJJMIFPB_TypeDefinitionIndex = 16736;

struct alignas(8) AGDOJJMIFPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDOJJMIFPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDOJJMIFPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AGDOJJMIFPB CLHKHMEAOBE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGDOJJMIFPB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDOJJMIFPB_CLHKHMEAOBE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::AGDOJJMIFPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AGDOJJMIFPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AGDOJJMIFPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AGDOJJMIFPB CLHKHMEAOBE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AGDOJJMIFPB EIFONLCJOPG)
	{
		return ((::AGDOJJMIFPB(*)(::FlatBuffers::ByteBuffer*, ::AGDOJJMIFPB))((::PBYTE)hIl2Cpp + AGDOJJMIFPB_CLHKHMEAOBE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDOJJMIFPB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDOJJMIFPB_GHKKNCCLPAN_OFFSET))(this);
	}
};
