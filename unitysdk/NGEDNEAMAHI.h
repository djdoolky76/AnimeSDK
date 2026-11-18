#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGEDNEAMAHI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AB3A0)
#define NGEDNEAMAHI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NGEDNEAMAHI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NGEDNEAMAHI_KMKHIFCIHCD_1_OFFSET UNITYSDK_OFFSET(0x1CFEBBB0)
#define NGEDNEAMAHI_KMKHIFCIHCD_OFFSET UNITYSDK_OFFSET(0x1CFEBB40)
#define NGEDNEAMAHI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AB3E0)
#define NGEDNEAMAHI___INIT_OFFSET UNITYSDK_OFFSET(0x8AB380)

inline static constexpr unsigned int NGEDNEAMAHI_TypeDefinitionIndex = 9192;

struct alignas(8) NGEDNEAMAHI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEDNEAMAHI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGEDNEAMAHI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::NGEDNEAMAHI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGEDNEAMAHI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGEDNEAMAHI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::NGEDNEAMAHI KMKHIFCIHCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NGEDNEAMAHI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGEDNEAMAHI_KMKHIFCIHCD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEDNEAMAHI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NGEDNEAMAHI KMKHIFCIHCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NGEDNEAMAHI EIFONLCJOPG)
	{
		return ((::NGEDNEAMAHI(*)(::FlatBuffers::ByteBuffer*, ::NGEDNEAMAHI))((::PBYTE)hIl2Cpp + NGEDNEAMAHI_KMKHIFCIHCD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEDNEAMAHI_PPOMNIFACOL_OFFSET))(this);
	}
};
