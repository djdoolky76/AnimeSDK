#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONMJDOIIABF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81AE30)
#define ONMJDOIIABF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ONMJDOIIABF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ONMJDOIIABF_JIKKLCHBPIC_1_OFFSET UNITYSDK_OFFSET(0x1BAB91B0)
#define ONMJDOIIABF_JIKKLCHBPIC_OFFSET UNITYSDK_OFFSET(0x1BAB9140)
#define ONMJDOIIABF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81AE70)
#define ONMJDOIIABF___INIT_OFFSET UNITYSDK_OFFSET(0x81AE10)

inline static constexpr unsigned int ONMJDOIIABF_TypeDefinitionIndex = 16264;

struct alignas(8) ONMJDOIIABF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMJDOIIABF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMJDOIIABF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ONMJDOIIABF JIKKLCHBPIC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONMJDOIIABF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMJDOIIABF_JIKKLCHBPIC_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ONMJDOIIABF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ONMJDOIIABF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ONMJDOIIABF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::ONMJDOIIABF JIKKLCHBPIC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ONMJDOIIABF EIFONLCJOPG)
	{
		return ((::ONMJDOIIABF(*)(::FlatBuffers::ByteBuffer*, ::ONMJDOIIABF))((::PBYTE)hIl2Cpp + ONMJDOIIABF_JIKKLCHBPIC_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMJDOIIABF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMJDOIIABF_PPOMNIFACOL_OFFSET))(this);
	}
};
