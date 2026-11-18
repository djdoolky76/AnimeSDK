#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKKJCAAGAHB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B15C0)
#define AKKJCAAGAHB_FCKJLFOHNLC_1_OFFSET UNITYSDK_OFFSET(0x17A72980)
#define AKKJCAAGAHB_FCKJLFOHNLC_OFFSET UNITYSDK_OFFSET(0x17A728E0)
#define AKKJCAAGAHB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AKKJCAAGAHB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AKKJCAAGAHB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B15B0)
#define AKKJCAAGAHB___INIT_OFFSET UNITYSDK_OFFSET(0x7B1590)

inline static constexpr unsigned int AKKJCAAGAHB_TypeDefinitionIndex = 15810;

struct alignas(8) AKKJCAAGAHB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKJCAAGAHB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKKJCAAGAHB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AKKJCAAGAHB FCKJLFOHNLC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AKKJCAAGAHB EIFONLCJOPG)
	{
		return ((::AKKJCAAGAHB(*)(::FlatBuffers::ByteBuffer*, ::AKKJCAAGAHB))((::PBYTE)hIl2Cpp + AKKJCAAGAHB_FCKJLFOHNLC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::AKKJCAAGAHB FCKJLFOHNLC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKKJCAAGAHB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKKJCAAGAHB_FCKJLFOHNLC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKJCAAGAHB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::AKKJCAAGAHB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AKKJCAAGAHB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AKKJCAAGAHB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKJCAAGAHB_GHKKNCCLPAN_OFFSET))(this);
	}
};
