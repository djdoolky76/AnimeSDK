#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANCKBNPFDHN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9CF0)
#define ANCKBNPFDHN_DNLCNHMLMLE_1_OFFSET UNITYSDK_OFFSET(0x19AC02F0)
#define ANCKBNPFDHN_DNLCNHMLMLE_OFFSET UNITYSDK_OFFSET(0x19AC01F0)
#define ANCKBNPFDHN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANCKBNPFDHN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANCKBNPFDHN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9D30)
#define ANCKBNPFDHN___INIT_OFFSET UNITYSDK_OFFSET(0x7E9CD0)

inline static constexpr unsigned int ANCKBNPFDHN_TypeDefinitionIndex = 13680;

struct alignas(8) ANCKBNPFDHN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCKBNPFDHN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANCKBNPFDHN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ANCKBNPFDHN DNLCNHMLMLE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANCKBNPFDHN EIFONLCJOPG)
	{
		return ((::ANCKBNPFDHN(*)(::FlatBuffers::ByteBuffer*, ::ANCKBNPFDHN))((::PBYTE)hIl2Cpp + ANCKBNPFDHN_DNLCNHMLMLE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::ANCKBNPFDHN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANCKBNPFDHN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANCKBNPFDHN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCKBNPFDHN_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::ANCKBNPFDHN DNLCNHMLMLE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANCKBNPFDHN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANCKBNPFDHN_DNLCNHMLMLE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCKBNPFDHN_GHKKNCCLPAN_OFFSET))(this);
	}
};
