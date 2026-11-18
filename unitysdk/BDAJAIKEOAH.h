#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDAJAIKEOAH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0310)
#define BDAJAIKEOAH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BDAJAIKEOAH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BDAJAIKEOAH_KNGBEIKKFPE_1_OFFSET UNITYSDK_OFFSET(0x18774EB0)
#define BDAJAIKEOAH_KNGBEIKKFPE_OFFSET UNITYSDK_OFFSET(0x18774E40)
#define BDAJAIKEOAH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0300)
#define BDAJAIKEOAH___INIT_OFFSET UNITYSDK_OFFSET(0x7D02E0)

inline static constexpr unsigned int BDAJAIKEOAH_TypeDefinitionIndex = 11819;

struct alignas(8) BDAJAIKEOAH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAJAIKEOAH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDAJAIKEOAH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BDAJAIKEOAH KNGBEIKKFPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDAJAIKEOAH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDAJAIKEOAH_KNGBEIKKFPE_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BDAJAIKEOAH KNGBEIKKFPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BDAJAIKEOAH EIFONLCJOPG)
	{
		return ((::BDAJAIKEOAH(*)(::FlatBuffers::ByteBuffer*, ::BDAJAIKEOAH))((::PBYTE)hIl2Cpp + BDAJAIKEOAH_KNGBEIKKFPE_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAJAIKEOAH_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAJAIKEOAH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BDAJAIKEOAH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BDAJAIKEOAH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDAJAIKEOAH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
