#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHCNJIODNMH_BALELHJIPNI_1_OFFSET UNITYSDK_OFFSET(0x1B6317F0)
#define JHCNJIODNMH_BALELHJIPNI_OFFSET UNITYSDK_OFFSET(0x1B631780)
#define JHCNJIODNMH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80FA80)
#define JHCNJIODNMH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JHCNJIODNMH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JHCNJIODNMH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80FA70)
#define JHCNJIODNMH___INIT_OFFSET UNITYSDK_OFFSET(0x80FA50)

inline static constexpr unsigned int JHCNJIODNMH_TypeDefinitionIndex = 11072;

struct alignas(8) JHCNJIODNMH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCNJIODNMH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHCNJIODNMH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCNJIODNMH_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHCNJIODNMH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JHCNJIODNMH BALELHJIPNI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHCNJIODNMH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHCNJIODNMH_BALELHJIPNI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::JHCNJIODNMH BALELHJIPNI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JHCNJIODNMH EIFONLCJOPG)
	{
		return ((::JHCNJIODNMH(*)(::FlatBuffers::ByteBuffer*, ::JHCNJIODNMH))((::PBYTE)hIl2Cpp + JHCNJIODNMH_BALELHJIPNI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::JHCNJIODNMH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JHCNJIODNMH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JHCNJIODNMH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
