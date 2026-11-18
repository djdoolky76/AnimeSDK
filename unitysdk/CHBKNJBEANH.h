#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHBKNJBEANH_AFDBPCGJLLM_1_OFFSET UNITYSDK_OFFSET(0x1776A2F0)
#define CHBKNJBEANH_AFDBPCGJLLM_OFFSET UNITYSDK_OFFSET(0x1776A280)
#define CHBKNJBEANH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ACFE0)
#define CHBKNJBEANH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CHBKNJBEANH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CHBKNJBEANH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD020)
#define CHBKNJBEANH___INIT_OFFSET UNITYSDK_OFFSET(0x7ACFC0)

inline static constexpr unsigned int CHBKNJBEANH_TypeDefinitionIndex = 10234;

struct alignas(8) CHBKNJBEANH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBKNJBEANH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHBKNJBEANH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::CHBKNJBEANH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHBKNJBEANH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHBKNJBEANH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::CHBKNJBEANH AFDBPCGJLLM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CHBKNJBEANH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CHBKNJBEANH_AFDBPCGJLLM_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::CHBKNJBEANH AFDBPCGJLLM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CHBKNJBEANH EIFONLCJOPG)
	{
		return ((::CHBKNJBEANH(*)(::FlatBuffers::ByteBuffer*, ::CHBKNJBEANH))((::PBYTE)hIl2Cpp + CHBKNJBEANH_AFDBPCGJLLM_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBKNJBEANH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBKNJBEANH_GHKKNCCLPAN_OFFSET))(this);
	}
};
